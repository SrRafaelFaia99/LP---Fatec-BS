#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct dados {
            char nome[20];
            int dia;
            int mes;
            int ano;
            char estadoCivil[20];
            float salario;
            //elementos da estrutura
            };

void inclui();
void lista();
int pesquisaNome();
int pesquisaEstadoCivil();
int pesquisaMesNiver();
int pesquisaSalario();
void alteraSalario();
void alteraDados();
void exclui();

int main()
{
        struct dados info;
        struct dados *p;
        int op;
        int i;
        int tam;    //n. de bytes da estrutura

        p = & info;
        tam = sizeof(info);

        while(1){
        printf(" 1 -Inclua dados  \n");
        printf(" 2 -Lista dados  \n");
        printf(" 3 -Pesquisa dados por nome \n");
        printf(" 4 -Pesquisa dados por estado civil  \n");
        printf(" 5 -Pesquisa dados por mes do aniversario  \n");
        printf(" 6 -Pesquisa dados por faixa salarial  \n");
        printf(" 7 -Altera valor do salario  \n");
        printf(" 8 -Altera dados  \n");
        printf(" 9 -Exclui dados  \n");
        printf(" 10 -Saida\n");
        scanf("%d", &op);
        getchar();


    switch(op)
                {
                case 1 : inclui(p, tam);   //passa como parametro o ponteiro para a estrutura e o n. de bytes da desta
                break;

                case 2: lista(p, tam);
                break;

                case 3: pesquisaNome(p, tam);
                break;

                case 4: pesquisaEstadoCivil(p, tam);
                break;

                case 5: pesquisaMesNiver(p, tam);
                break;

                case 6: pesquisaSalario(p, tam);
                break;

                case 7: alteraSalario(p, tam);
                break;

                case 8: alteraDados(p, tam);
                break;

                case 9: exclui(p, tam);
                break;

                case 10: exit(0);
                break;

                default: printf("\n opcao invalida\n");
                }
    };

}

void inclui(struct dados *ps, int tam)
{
    FILE *p, *p1;
    int cont = 0;
    int i;

    p1 = fopen("contador.txt", "r");
    fscanf(p1,"%d",&cont);
    printf("contador antes %d\n",cont);
    fclose(p1);

    //zera os dados da estrutura

    p = fopen("arquivo.txt", "a");

    if( p == NULL){
        printf("\nERRO");
        exit(1);
    }
    {
        //aqui os dados sao recebidos via teclado

       printf("Insira o nome:  ");
       scanf("%s",&ps->nome);

       printf("Insira o estado civil:  ");
       scanf("%s",&ps->estadoCivil);

       printf("Insira o dia do aniversario:  ");
       scanf("%d",&ps->dia);

       printf("Insira o mes do aniversario:  ");
       scanf("%d",&ps->mes);

       printf("Insira o ano do aniversario:  ");
       scanf("%d",&ps->ano);

       printf("Insira o salario:  ");
       scanf("%f",&ps->salario);
    }

    fwrite(ps, tam,1,p);
    fclose(p);

    cont++;

    p1 = fopen("contador.txt", "w");
    fprintf(p1,"%d",cont);
    printf("contador depois %d\n",cont);
    fclose(p1);
}

void lista(struct dados *ps, int tam)
{
    FILE *p, *p1;
    int i;
    int cont,comp;

    p1 = fopen("contador.txt", "r");
    fscanf(p1,"%d",&cont);
    printf("%d\n",cont);
    fclose(p1);

    p = fopen("arquivo.txt", "r"); /*r" --> Abre o arquivo apenas para leitura.*/

    if( p== NULL)
        {
        puts("\nERRO\n");
        exit(1);
    }

    for(i=0;i<cont; i++){
        comp = i*tam;   //calcula o n. de bytes para posicionar o ponteiro do arquivo

    fseek(p,comp,0);    //posiciona o ponteiro no inicio do registro dentro do arquivo
    fread(ps,tam,1,p);   //le o registro
    if(ps -> nome[0] != '*'){     //verifica se esta apagado
        //imprimi registro na tela
        printf("Nome: %s\n",ps->nome);
        printf("Estado civil: %s\n",ps->estadoCivil);
        printf("Data do aniversario: %d/%d/%d\n",ps->dia,ps->mes,ps->ano);
        printf("Salario: R$%.2f\n",ps->salario);
        }
    }
        fclose(p);
}

int pesquisaNome(struct dados *ps, int tam)
{
    FILE *p;
    FILE *p1;

    char nome1[20];
    int i=0,y, x;
    int cont;

    printf("Informe um nome para pesquisa: ");
    gets(nome1);

    p1 = fopen("contador.txt", "r");
    fscanf(p1,"%d",&cont);
    fclose(p1);
    printf("%d\n",cont);

    p = fopen("arquivo.txt", "r");

    for(y=0;y<cont;y++)
    {
        fread(ps,tam,1,p);
        for(x = 0; nome1[x] != '\0';x++){
            if(nome1[x] != ps -> nome[x]){
                break;
            }
        }

    if(nome1[x] == '\0' && ps -> nome[x] == '\0')
    {
        printf("n. do reg.: %d\n",y);
        printf("Nome: %s\n",ps->nome);
        printf("Estado civil: %s\n",ps->estadoCivil);
        printf("Data do aniversario: %d/%d/%d\n",ps->dia,ps->mes,ps->ano);
        printf("Salario: R$%.2f\n",ps->salario);
        return y;
    }
    }
    printf("reg. nao existe\n");
    return -1;
}

int pesquisaEstadoCivil(struct dados *ps, int tam)
{
    FILE *p;
    FILE *p1;

    char estadoCivil1[20];
    int i=0,y, x;
    int cont;

    printf("Informe um estado civil para pesquisa: ");
    gets(estadoCivil1);

    p1 = fopen("contador.txt", "r");
    fscanf(p1,"%d",&cont);
    fclose(p1);
    printf("%d\n",cont);

    p = fopen("arquivo.txt", "r");

    for(y=0;y<cont;y++)
    {
        fread(ps,tam,1,p);
        for(x = 0; estadoCivil1[x] != '\0';x++){
            if(estadoCivil1[x] != ps -> estadoCivil[x]){
                break;
            }
        }

    if(estadoCivil1[x] == '\0' && ps -> estadoCivil[x] == '\0')
    {
        printf("n. do reg.: %d\n",y);
        printf("Nome: %s\n",ps->nome);
        printf("Estado civil: %s\n",ps->estadoCivil);
        printf("Data do aniversario: %d/%d/%d\n",ps->dia,ps->mes,ps->ano);
        printf("Salario: R$%.2f\n",ps->salario);
        return y;
    }
    }
    printf("reg. nao existe\n");
    return -1;
}

int pesquisaMesNiver(struct dados *ps, int tam)
{
    FILE *p;
    FILE *p1;

    int mes1;
    int i=0,y, x;
    int cont;

    printf("Informe um mes para pesquisa: ");
    scanf("%d",&mes1);

    p1 = fopen("contador.txt", "r");
    fscanf(p1,"%d",&cont);
    fclose(p1);
    printf("%d\n",cont);

    p = fopen("arquivo.txt", "r");

    for(y=0;y<cont;y++)
    {
        fread(ps,tam,1,p);

    if(mes1 == ps -> mes)
    {
        printf("n. do reg.: %d\n",y);
        printf("Nome: %s\n",ps->nome);
        printf("Estado civil: %s\n",ps->estadoCivil);
        printf("Data do aniversario: %d/%d/%d\n",ps->dia,ps->mes,ps->ano);
        printf("Salario: R$%.2f\n",ps->salario);
        return y;
    }
    }
    printf("reg. nao existe\n");
    return -1;
}

int pesquisaSalario(struct dados *ps, int tam)
{
    FILE *p;
    FILE *p1;

    float salario1;
    float salario2;
    int i=0,y, x;
    int cont;

    printf("Informe o salario minimo para pesquisa: ");
    scanf("%f",&salario1);

    printf("Informe o salario maximo para pesquisa: ");
    scanf("%f",&salario2);

    p1 = fopen("contador.txt", "r");
    fscanf(p1,"%d",&cont);
    fclose(p1);
    printf("%d\n",cont);

    p = fopen("arquivo.txt", "r");

    for(y=0;y<cont;y++)
    {
        fread(ps,tam,1,p);

    if(ps -> salario >= salario1 && ps -> salario < salario2)
    {
        printf("n. do reg.: %d\n",y);
        printf("Nome: %s\n",ps->nome);
        printf("Estado civil: %s\n",ps->estadoCivil);
        printf("Data do aniversario: %d/%d/%d\n",ps->dia,ps->mes,ps->ano);
        printf("Salario: R$%.2f\n",ps->salario);
        return y;
    }
    }
    printf("reg. nao existe\n");
    return -1;
}

void alteraSalario(struct dados *ps, int tam)
{
    FILE *p;
    int n_reg;;
    int n_bytes;

    n_reg = pesquisaNome(ps, tam);     //pesquisa o registro no arquivo
    printf("altera reg n.: %d\n",n_reg);
    n_bytes = tam * n_reg;

    p = fopen("arquivo.txt", "r+");

    fseek(p,n_bytes,0);       //posioiona o ponteiro do arquivo no registro a ser alterado
    fread(ps, tam, 1, p );  //le registro do arquivo

    if(tam *n_reg==NULL)
    {
        //recebe via teclado todos os dados do registro
        printf("Novo salario: ");
        scanf("%f",&ps->salario);
    }

    fseek(p,n_bytes,0);    //posiciona o ponteiro do arquivo no inicio do regisro a ser alterado
    fwrite(ps, tam,1,p);  //escreve o registro no arquivo

    fclose(p);
}

void alteraDados(struct dados *ps, int tam)
{
    FILE *p;
    int n_reg;;
    int n_bytes;

    n_reg = pesquisaNome(ps, tam);     //pesquisa o registro no arquivo
    printf("altera reg n.: %d\n",n_reg);
    n_bytes = tam * n_reg;

    p = fopen("arquivo.txt", "r+");

    fseek(p,n_bytes,0);       //posioiona o ponteiro do arquivo no registro a ser alterado
    fread(ps, tam, 1, p );  //le registro do arquivo

    //recebe via teclado todos os dados do registro
    if(ps -> nome[0] != '*' && tam *n_reg == NULL)
    {
       printf("Altera o nome:  ");
       scanf("%s",&ps->nome);

       printf("Altera o estado civil:  ");
       scanf("%s",&ps->estadoCivil);

       printf("Altera o dia do aniversario:  ");
       scanf("%d",&ps->dia);

       printf("Altera o mes do aniversario:  ");
       scanf("%d",&ps->mes);

       printf("Altera o ano do aniversario:  ");
       scanf("%d",&ps->ano);

       printf("Altera o salario:  ");
       scanf("%f",&ps->salario);
    }

    fseek(p,n_bytes,0);    //posiciona o ponteiro do arquivo no inicio do regisro a ser alterado
    fwrite(ps, tam,1,p);  //escreve o registro no arquivo

    fclose(p);
}

void exclui(struct dados *ps, int tam)
{
    FILE *p;
    p = fopen("arquivo.txt", "r+");
    int n_reg;
    int n_bytes;

    n_reg = pesquisaNome(ps, tam);  //pesquisa o registro no arquivo
    n_bytes = tam * n_reg;

    fseek(p,n_bytes,0);       //posioiona o ponteiro do arquivo no registro a ser apagado
    fread(ps, tam, 1, p );   //le o registro do arquivo
    printf("nome para apagado!!");
    //apaga o registro do arquivo
        ps -> nome[0] = '*';
        ps -> estadoCivil[0]= '*';
        ps -> dia = '*';
        ps -> mes = '*';
        ps -> ano = '*';
        ps -> salario = '*';

    //printf("nome para apagado virou %s\n",ps -> nome);

    fseek(p,n_bytes,0);  //posiciona o ponteiro do arquivo no inicio do regisro a ser apagado
    fwrite(ps,tam,1,p);  //escreve o registro

    fclose(p);

}
