#define ex1
#include <stdio.h>
#include <math.h>

#ifdef ex1
/*1 - Escreva um programa que tem uma estrutura da dados com os membros abaixo.
    receba dados via teclado e imprima estes conteudos no video no seguinte
    formato.
             char, int, long, float, double
             unsigned char, unsigned int, unsigned long,

            10        20        30        40        50        60        70
    1234567890123456789012345678901234567890123456789012345678901234567890
        char      int       long                float               double
              unsigned char       unsigned int        unsigned long*/

struct dados
{
    char c;
    int i;
    long l;
    float f;
    double d;
    unsigned char uc;
    unsigned int ui;
    unsigned long ul;
}
main()
{
    struct dados dados;
    printf("Insira um valor para char: ");
    scanf("%c",&dados.c);
    printf("Insira um valor para int: ");
    scanf("%d",&dados.i);
    printf("Insira um valor para long: ");
    scanf("%li",&dados.l);
    printf("Insira um valor para float: ");
    scanf("%f",&dados.f);
    printf("Insira um valor para double: ");
    scanf("%lf",&dados.d);
    printf("Insira um valor para unsigned char: ");
    scanf("%u %c",&dados.uc,&dados.uc);
    getchar();
    printf("Insira um valor para unsigned int: ");
    scanf("%u",&dados.ui);
    printf("Insira um valor para unsigned long: ");
    scanf("%lu",&dados.uc);

    printf("        10        20        30        40        50        60        70\n");
    printf("1234567890123456789012345678901234567890123456789012345678901234567890\n");
    printf("    %-6c    %-6d    %-6li              %-6f            %-6lf\n",dados.c,dados.i,dados.l,dados.f,dados.d);
    printf("          %-6c              %-6u              %-6lu\n",dados.uc,dados.ui,dados.ul);
}
#endif // ex1

#ifdef ex2
/*2 - Escreva um programa com a estrutura abaixo. Defina um vetor de estruturas
    de 4 elementos. Receba os dados pelo teclado e imprima-os no video. Faça um
    menu. (vetor de estruturas)
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

    printf("Insira os dados referentes a primeira pessoa: \n");
    printf("Insira o nome: ");
    gets(dados[1].nome);
    printf("Insira o endereco: ");
    gets(dados[1].end);
    printf("Insira a cidade: ");
    gets(dados[1].cidade);
    printf("Insira o estado: ");
    gets(dados[1].estado);
    printf("Insira o cep: ");
    gets(dados[1].cep);
    printf("\n");

    printf("Insira os dados referentes a segunda pessoa: \n");
    printf("Insira o nome: ");
    gets(dados[2].nome);
    printf("Insira o endereco: ");
    gets(dados[2].end);
    printf("Insira a cidade: ");
    gets(dados[2].cidade);
    printf("Insira o estado: ");
    gets(dados[2].estado);
    printf("Insira o cep: ");
    gets(dados[2].cep);
    printf("\n");

    printf("Insira os dados referentes a terceira pessoa: \n");
    printf("Insira o nome: ");
    gets(dados[3].nome);
    printf("Insira o endereco: ");
    gets(dados[3].end);
    printf("Insira a cidade: ");
    gets(dados[3].cidade);
    printf("Insira o estado: ");
    gets(dados[3].estado);
    printf("Insira o cep: ");
    gets(dados[3].cep);
    printf("\n");


    printf("Insira os dados referentes a quarta pessoa: \n");
    printf("Insira o nome: ");
    gets(dados[4].nome);
    printf("Insira o endereco: ");
    gets(dados[4].end);
    printf("Insira a cidade: ");
    gets(dados[4].cidade);
    printf("Insira o estado: ");
    gets(dados[4].estado);
    printf("Insira o cep: ");
    gets(dados[4].cep);
    printf("\n");

    for(int i = 1; i <= 4; i++)
    {
        printf("Pessoa numero %d: %s, %s, %s, %s, %s",i,dados[i].nome,dados[i].end,dados[i].cidade,dados[i].estado,dados[i].cep);
        printf("\n");
    }
}
#endif // ex2

#ifdef ex3
/*3 - Crie uma estrutura para representar as coordenadas de um ponto no plano
    (posicoes X e Y). Em seguida, declare e leia do teclado um ponto e exiba a
    distancia dele ate' a origem das coordenadas, isto é, posição (0, 0). Para
    realizar o cálculo, utilize a fórmula a seguir:
           d = raiz quadrada de  (XB - XA)ao 2 +(YB -YA)ao 2
    Em que:
    d = distância entre os pontos A e B
    X = coordenada X em um ponto
    Y = coordenada Y em um ponto*/

struct coordenadas
{
    unsigned int x;
    unsigned int y;
}

main()
{
    struct coordenadas pontos;
    float distancia;


    printf("Insira as coordenadas do ponto que voce deseja calcular a distancia dele ate a origem das coordenadas:\n");

    printf("Insira o ponto do eixo x: ");
    scanf("%u",&pontos.x);

    printf("Insira o ponto do eixo y: ");
    scanf("%u",&pontos.y);

    distancia = sqrt(pow(pontos.x,2)+ pow(pontos.y,2));

    printf("A distancia dos pontos e de %.2f",distancia);
}
#endif // ex3
