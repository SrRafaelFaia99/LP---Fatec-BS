#define ex1
#include <stdio.h>

#ifdef ex1
/*1 - Escreva um programa que receba via teclado um char, int, long, unsigned,
    float, double, unsigned long e unsigned char, declare ponteiros para os
    mesmos e imprima-os no video utilizando o operador de conteudo * no
    seguinte formato:

            10        20        30        40        50        60
    123456789012345678901234567890123456789012345678901234567890
        int                 long                unsigned
                  float               double              char
             unsigned long       unsigned char*/
main()
{
    int i,*pi;
    long l,*pl;
    unsigned u,*pu;
    float f,*pf;
    double d,*pd;
    char c,*pc;
    unsigned long ul,*pul;
    unsigned char uc,*puc;

    printf("Insira um valor para int: ");
    scanf("%d",&i);
    pi = &i;

    printf("Insira um valor para long: ");
    scanf("%li",&l);
    pl = &l;

    printf("Insira um valor para unsigned int: ");
    scanf("%u",&u);
    pu = &u;

    printf("Insira um valor para float: ");
    scanf("%f",&f);
    pf = &f;

    printf("Insira um valor para double: ");
    scanf("%lf",&d);
    pd = &d;

    printf("Insira um valor para char: ");
    getchar();
    scanf("%c",&c);
    pc = &c;

    printf("Insira um valor para unsigned long: ");
    scanf("%lu",&ul);
    pul = &ul;

    printf("Insira um valor para unsigned char: ");
    getchar();
    scanf("%hhc",&uc);
    puc = &uc;

    printf("        10        20        30        40        50        60\n");
    printf("123456789012345678901234567890123456789012345678901234567890\n");
    printf("    %-3d                 %-4li                %-8u\n",*pi,*pl,*pu);
    printf("              %-5.1f               %-6.1lf              %-4c\n",*pf,*pd,*pc);
    printf("         %-13lu       %-13hhc\n",*pul,*puc);
}
#endif // ex1

#ifdef ex2
/*2 - Com a estrutura abaixo, defina um vetor de estruturas de 4 elementos.
    Receba os dados pelo teclado usando ponteiros e imprima-os no video
    também usando ponteiros. Utilize um comando de loop. (vetor de estruturas)
              nome, end, cidade, estado, cep*/

struct info
{
    char nome[20];
    char end[20];
    char cidade[20];
    char estado[20];
    char cep[20];
}

main()
{
    struct info dados[4];
    struct info *pDados;
    pDados = &dados;

    printf("Insira os dados referentes a primeira pessoa: \n");
    printf("Insira o nome: ");
    gets(pDados[1].nome);
    printf("Insira o endereco: ");
    gets(pDados[1].end);
    printf("Insira a cidade: ");
    gets(pDados[1].cidade);
    printf("Insira o estado: ");
    gets(pDados[1].estado);
    printf("Insira o cep: ");
    gets(pDados[1].cep);
    printf("\n");

    printf("Insira os dados referentes a segunda pessoa: \n");
    printf("Insira o nome: ");
    gets(pDados[2].nome);
    printf("Insira o endereco: ");
    gets(pDados[2].end);
    printf("Insira a cidade: ");
    gets(pDados[2].cidade);
    printf("Insira o estado: ");
    gets(pDados[2].estado);
    printf("Insira o cep: ");
    gets(pDados[2].cep);
    printf("\n");

    printf("Insira os dados referentes a terceira pessoa: \n");
    printf("Insira o nome: ");
    gets(pDados[3].nome);
    printf("Insira o endereco: ");
    gets(pDados[3].end);
    printf("Insira a cidade: ");
    gets(pDados[3].cidade);
    printf("Insira o estado: ");
    gets(pDados[3].estado);
    printf("Insira o cep: ");
    gets(pDados[3].cep);
    printf("\n");


    printf("Insira os dados referentes a quarta pessoa: \n");
    printf("Insira o nome: ");
    gets(pDados[4].nome);
    printf("Insira o endereco: ");
    gets(pDados[4].end);
    printf("Insira a cidade: ");
    gets(pDados[4].cidade);
    printf("Insira o estado: ");
    gets(pDados[4].estado);
    printf("Insira o cep: ");
    gets(pDados[4].cep);
    printf("\n");


    for(int i = 1; i <= 4; i++)
    {
        printf("Pessoa numero %d: %s, %s, %s, %s, %s",i,pDados[i].nome,pDados[i].end,pDados[i].cidade,pDados[i].estado,pDados[i].cep);
        printf("\n");
    }
}
#endif // ex2

#ifdef ex3
/*3 - Receba um caracter via teclado usando ponteiros e compara com o vetor abaixo
    usando ponteiros. mostre como resultado se são IGUAIS ou DIFERENTES.
    vetor -> b,d,f,h,j,l,m,o,q,s,u,w,y*/

main()
{
    char vetor[14] = "bdfhjlmoqsuwy";
    char c,*pc;
    int i,verif = 0;

    printf("Insira uma letra para ser comparada: ");
    scanf("%c",&c);
    pc = &c;

    for(i = 0; i < 14; i++)
    {
        if(*pc == vetor[i])
        {
            verif = 1;
        }
    }
    if(verif == 1)
    {
        printf("O caracter inserido consta no vetor!!");
    }
    else
    {
        printf("O caracter inserido NAO consta no vetor!!");
    }
}

#endif // ex3

#ifdef ex4
/*4 - Receba 2 string de ate 10 caracteres via teclado, compare-as usando ponteiros
    e mostre como resultado se são IGUAIS ou DIFERENTES.*/

main()
{
    char A[11],B[11];
    char *PA[11],*PB[11];
    int aux = 0;

    printf("Insira a primeira string: ");
    gets(A);

    for(int i = 0; i < 11; i++)
    {
        PA[i] = &A[i];
    }

    printf("Insira a segunda string: ");
    gets(B);

    for(int i = 0; i < 11; i++)
    {
        PB[i] = &B[i];
    }

    for(int i = 0; *PA[i] != '\0'; i++)
    {
        if(*PA[i] != *PB[i])
        {
            aux = 1;
            break;
        }
    }

    if(aux == 1)
    {
        printf("Diferentes");
    }
    else
    {
        printf("Iguais");
    }
}
#endif // ex4

#ifdef ex5
/*5 - Escreva um programa que receba via teclado numeros inteiros positivos usando
    ponteiros. Quando o numero digitado for negativo o programa deve parar e calcula
    a media dos valores digitados e mostrar o resultado.*/

main()
{
    int num,i=0;
    float media= 0;
    int *Pnum = &num;

    for(;;)
    {
        printf("Insira um numero inteiro: ");
        scanf("%d", Pnum);
        if(*Pnum < 0)
        {
            break;
        }
        media = media + *Pnum;
        i++;
    }

    media = media/i;

    printf("A media dos numeros digitados foi %.2f",media);
}
#endif // ex5

#ifdef ex6
/*6 - Escreva um programa que contenha uma estrutura representando uma data
    valida. Essa estrutura deve conter os campos dia, mes e ano. Em seguida,
    leia duas datas e armazene nessa estrutura usando ponteiros. Calcule e exiba o
    numero de dias que decorrem entre as duas datas usando ponteiros.*/

struct data
{
    int dia;
    int mes;
    int ano;
}
main()
{
    struct data data;
    struct data *pdata = &data;

    long diferenca = 0;
    long *pdiferenca = &diferenca;
    for(int i = 0; i < 2; i++){
        do{
            printf("Digite o %do dia: ", i+1);
            scanf("%d", &pdata[i].dia);
        }while(pdata[i].dia <= 0 || pdata[i].dia > 31);
        do{
            printf("Digite o %do mes: ", i+1);
            scanf("%d", &pdata[i].mes);
        }while(pdata[i].mes <= 0 || pdata[i].mes > 12);
        do{
            printf("Digite o %do ano: ", i+1);
            scanf("%d", &pdata[i].ano);
        }while(pdata[i].ano <= 0 || pdata[i].ano > 3000);
        printf("Data %d: %d/%d/%d \n", i+1, pdata[i].dia, pdata[i].mes, pdata[i].ano);
    }

    if(pdata[0].ano > pdata[1].ano){
        if(pdata[0].mes > pdata[1].mes){
            if(pdata[0].dia > pdata[1].dia)
            {
                diferenca += pdata[0].dia - pdata[1].dia;
                diferenca += 30 * (pdata[0].mes - pdata[1].mes);
                diferenca += 365 * (pdata[0].ano - pdata[1].ano);
            }
            else{
                if(pdata[0].dia < pdata[1].dia){
                    diferenca += (pdata[0].dia + 30) - pdata[1].dia;
                    diferenca += 30 * (pdata[0].mes - pdata[1].mes - 1);
                    diferenca += 365 * (pdata[0].ano - pdata[1].ano);
                }
                else{
                    diferenca += 30 * (pdata[0].mes - pdata[1].mes);
                    diferenca += 365 * (pdata[0].ano - pdata[1].ano);
                }
            }
        }
        else{
            if(pdata[0].dia > pdata[1].dia)
            {
                diferenca += pdata[0].dia - pdata[1].dia;
                diferenca += 30 * ((pdata[0].mes + 12) - pdata[1].mes);
                diferenca += 365 * (pdata[0].ano - pdata[1].ano - 1);
            }
            else{
                if(pdata[0].dia < pdata[1].dia){
                    diferenca += (pdata[0].dia + 30) - pdata[1].dia;
                    diferenca += 30 * ((pdata[0].mes + 12) - pdata[1].mes - 1);
                    diferenca += 365 * (pdata[0].ano - pdata[1].ano - 1);
                }
                else{
                    diferenca += 30 * ((pdata[0].mes + 12) - pdata[1].mes);
                    diferenca += 365 * (pdata[0].ano - pdata[1].ano - 1);
                }
            }
        }
    }
    else{
        if(pdata[0].ano < pdata[1].ano){
            if(pdata[0].mes < pdata[1].mes){
                if(pdata[0].dia < pdata[1].dia)
                {
                    diferenca += pdata[1].dia - pdata[0].dia;
                    diferenca += 30 * (pdata[1].mes - pdata[0].mes);
                    diferenca += 365 * (pdata[1].ano - pdata[0].ano);
                }
                else{
                    if(pdata[0].dia > pdata[1].dia){
                        diferenca += (pdata[1].dia + 30) - pdata[0].dia;
                        diferenca += 30 * (pdata[1].mes - pdata[0].mes - 1);
                        diferenca += 365 * (pdata[1].ano - pdata[0].ano);
                    }
                    else{
                        diferenca += 30 * (pdata[1].mes - pdata[0].mes);
                        diferenca += 365 * (pdata[1].ano - pdata[0].ano);
                    }
                }
            }
            else{
                if(pdata[0].dia < pdata[1].dia)
                {
                    diferenca += pdata[1].dia - pdata[0].dia;
                    diferenca += 30 * ((pdata[1].mes + 12) - pdata[0].mes);
                    diferenca += 365 * (pdata[1].ano - pdata[0].ano - 1);
                }
                else{
                    if(pdata[0].dia > pdata[1].dia){
                        diferenca += (pdata[1].dia + 30) - pdata[0].dia;
                        diferenca += 30 * ((pdata[1].mes + 12) - pdata[0].mes - 1);
                        diferenca += 365 * (pdata[1].ano - pdata[0].ano - 1);
                    }
                    else{
                        diferenca += 30 * ((pdata[1].mes + 12) - pdata[0].mes);
                        diferenca += 365 * (pdata[1].ano - pdata[0].ano - 1);
                    }
                }
            }
        }
        else{
            if(pdata[0].mes > pdata[1].mes){
                if(pdata[0].dia > pdata[1].dia){
                    diferenca += pdata[0].dia - pdata[1].dia;
                    diferenca += 30 * (pdata[0].mes - pdata[1].mes);
                }
                else{
                    if(pdata[0].dia < pdata[1].dia){
                        diferenca += (pdata[0].dia + 30) - pdata[1].dia;
                        diferenca += 30 * (pdata[0].mes - pdata[1].mes - 1);
                    }
                    else{
                        diferenca += 30 * (pdata[0].mes - pdata[1].mes);
                    }
                }
            }
            else{
                if(pdata[0].dia < pdata[1].dia){
                    diferenca += pdata[1].dia - pdata[0].dia;
                    diferenca += 30 * (pdata[1].mes - pdata[0].mes);
                }
                else{
                    if(pdata[0].dia > pdata[1].dia){
                        diferenca += (pdata[1].dia + 30) - pdata[0].dia;
                        diferenca += 30 * (pdata[1].mes - pdata[0].mes - 1);
                    }
                    else{
                        diferenca += 30 * (pdata[1].mes - pdata[0].mes);
                    }
                }
            }
        }
    }
}
#endif // ex6
