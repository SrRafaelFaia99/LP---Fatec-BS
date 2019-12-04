#define ex7
#include <stdio.h>

#ifdef ex1
/*1 - Escreva um programa para receber via teclado em vetores 3 int, 3 long,
    3 unsigned, 3 float e 3 double e imprima-os no video no seguinte formato:

            10        20        30        40        50
    12345678901234567890123456789012345678901234567890
      int                 long                unsigned
                float               double
      int                 long                unsigned
                float               double
      int                 long                unsigned
                float               double*/

main()
{
    int A[3];
    int long B[3];
    int unsigned C[3];
    float D[3];
    double E[3];

    printf("Informe tres valores int: ");
    scanf("%d",&A[0]);
    scanf("%d",&A[1]);
    scanf("%d",&A[2]);

    printf("Informe tres valores long: ");
    scanf("%ld",&B[0]);
    scanf("%ld",&B[1]);
    scanf("%ld",&B[2]);

    printf("Informe tres valores unsigned: ");
    scanf("%u",&C[0]);
    scanf("%u",&C[1]);
    scanf("%u",&C[2]);

    printf("Informe tres valores float: ");
    scanf("%f",&D[0]);
    scanf("%f",&D[1]);
    scanf("%f",&D[2]);

    printf("Informe tres valores double: ");
    scanf("%lf",&E[0]);
    scanf("%lf",&E[1]);
    scanf("%lf",&E[2]);

    printf("        10        20        30        40        50\n");
    printf("12345678901234567890123456789012345678901234567890\n");

    printf("  %-3d                 %-4ld                %-8u\n",A[0],B[0],C[0]);
    printf("            %-5.1f               %-6.1lf\n",D[0],E[0]);
    printf("  %-3d                 %-4ld                %-8u\n",A[1],B[1],C[1]);
    printf("            %-5.1f               %-6.1lf\n",D[1],E[1]);
    printf("  %-3d                 %-4ld                %-8u\n",A[2],B[2],C[2]);
    printf("            %-5.1f               %-6.1lf\n",D[2],E[2]);
}
#endif // ex1

#ifdef ex2
/*2 - Um vetor é palíndromo se ele não se altera quando as posições dos componentes
    são invertidos. Por exemplo, o vetor v = {1, 3, 5, 2, 2, 5, 3, 1} é palíndromo.
    Escreva um programa que verifique se um vetor é palíndromo. Receba o vetor
    via teclado (tamanho 10)*/

main()
{
    int A[10];
    int cont,contAux,sim = 0;

    printf("Insira os 10 componentes do vetor a ser verificado\n");

    for(cont=0;cont<10;cont++)
    {
        scanf("%d",&A[cont]);
    }

    for(cont=0,contAux=9;cont<5;cont++,contAux--)
    {
        if(A[cont] == A[contAux])
        {
            sim++;
        }
    }

    if(sim == 5)
    {
        printf("O vetor e palindromo!!");
    }
    else
    {
        printf("O vetor nao e palindromo!!");
    }
}
#endif // ex2

#ifdef ex3
/*3 - Escreva um programa declarando um vetor multidimensional de 2x3x3 de n.
    inteiros e inicialize-o com "0". Receba via teclado novos valores para
    todos os elementos do vetor e imprima no video estes novos conteudos.*/

main()
{
    int A[2][3][3] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int coluna;


    for(coluna = 0; coluna < 3; coluna++)
    {
        printf("Pagina 1,");
        printf("Linha 1 e ");
        printf("Coluna %d: ",coluna+1);
        scanf("%d",&A [0][0][coluna]);
    }

    for(coluna = 0; coluna < 3; coluna++)
    {
        printf("Pagina 1,");
        printf("Linha 2 e ");
        printf("Coluna %d: ",coluna+1);
        scanf("%d",&A [0][1][coluna]);
    }

    for(coluna = 0; coluna < 3; coluna++)
    {
        printf("Pagina 1,");
        printf("Linha 3 e ");
        printf("Coluna %d: ",coluna+1);
        scanf("%d",&A [0][2][coluna]);
    }

    for(coluna = 0; coluna < 3; coluna++)
    {
        printf("Pagina 2,");
        printf("Linha 1 e ");
        printf("Coluna %d: ",coluna+1);
        scanf("%d",&A [1][0][coluna]);
    }

    for(coluna = 0; coluna < 3; coluna++)
    {
        printf("Pagina 2,");
        printf("Linha 2 e ");
        printf("Coluna %d: ",coluna+1);
        scanf("%d",&A [1][1][coluna]);
    }

    for(coluna = 0; coluna < 3; coluna++)
    {
        printf("Pagina 2,");
        printf("Linha 3 e ");
        printf("Coluna %d: ",coluna+1);
        scanf("%d",&A [1][2][coluna]);
    }

    printf("\n\n\RESULTADOS:\n\nPagina 1,Linha 1,Coluna 1: %d\n",A[0][0][0]);
    printf("Pagina 1,Linha 1,Coluna 2: %d\n",A[0][0][1]);
    printf("Pagina 1,Linha 1,Coluna 3: %d\n",A[0][0][2]);
    printf("Pagina 1,Linha 2,Coluna 1: %d\n",A[0][1][0]);
    printf("Pagina 1,Linha 2,Coluna 2: %d\n",A[0][1][1]);
    printf("Pagina 1,Linha 2,Coluna 3: %d\n",A[0][1][2]);
    printf("Pagina 1,Linha 3,Coluna 1: %d\n",A[0][2][0]);
    printf("Pagina 1,Linha 3,Coluna 2: %d\n",A[0][2][1]);
    printf("Pagina 1,Linha 3,Coluna 3: %d\n",A[0][2][2]);
    printf("Pagina 2,Linha 1,Coluna 1: %d\n",A[1][0][0]);
    printf("Pagina 2,Linha 1,Coluna 2: %d\n",A[1][0][1]);
    printf("Pagina 2,Linha 1,Coluna 3: %d\n",A[1][0][2]);
    printf("Pagina 2,Linha 2,Coluna 1: %d\n",A[1][1][0]);
    printf("Pagina 2,Linha 2,Coluna 2: %d\n",A[1][1][1]);
    printf("Pagina 2,Linha 2,Coluna 3: %d\n",A[1][1][2]);
    printf("Pagina 2,Linha 3,Coluna 1: %d\n",A[1][2][0]);
    printf("Pagina 2,Linha 3,Coluna 2: %d\n",A[1][2][1]);
    printf("Pagina 2,Linha 3,Coluna 3: %d\n",A[1][2][2]);
}
#endif // ex3

#ifdef ex4
/*4 - Defina 2 vetores bidimensionais do tipo inteiro de 2x3. Escreva um programa
    que recebe os dados via teclado para esses 2 vetores. Usando o operador
    multiplicacao "*", multiplique os elementos de mesmo indice dos 2 vetores
    e guarde o resultado num 3. vetor. Imprima na tela o indice, os valores e
    o resultado dos 6 elementos dos vetores.*/

main()
{
    int A[2][3];
    int B[2][3];
    int C[2][3];
    int cont;

    printf("Informe os valores da primeira linha do primeiro vetor: ");
    for(cont = 0; cont < 3; cont++)
    {
        scanf("%d",&A[0][cont]);
    }

    printf("Informe os valores da segunda linha do primeiro vetor: ");
    for(cont = 0; cont < 3; cont++)
    {
        scanf("%d",&A[1][cont]);
    }

    printf("Informe os valores da primeira linha do segundo vetor: ");
    for(cont = 0; cont < 3; cont++)
    {
        scanf("%d",&B[0][cont]);
    }

    printf("Informe os valores da segunda linha do segundo vetor: ");
    for(cont = 0; cont < 3; cont++)
    {
        scanf("%d",&B[1][cont]);
    }

    for(cont = 0; cont < 3; cont++)
    {
        C[0][cont] = A[0][cont] * B[0][cont];
    }

    for(cont = 0; cont < 3; cont++)
    {
        C[1][cont] = A[1][cont] * B[1][cont];
    }

    printf("VETOR 1:\n");

    printf("linha 1 e coluna 1: %d\n",A[0][0]);
    printf("linha 1 e coluna 2: %d\n",A[0][1]);
    printf("linha 1 e coluna 3: %d\n",A[0][2]);

    printf("linha 2 e coluna 1: %d\n",A[1][0]);
    printf("linha 2 e coluna 2: %d\n",A[1][1]);
    printf("linha 2 e coluna 3: %d\n",A[1][2]);

    printf("VETOR 2:\n");

    printf("linha 1 e coluna 1: %d\n",B[0][0]);
    printf("linha 1 e coluna 2: %d\n",B[0][1]);
    printf("linha 1 e coluna 3: %d\n",B[0][2]);

    printf("linha 2 e coluna 1: %d\n",B[1][0]);
    printf("linha 2 e coluna 2: %d\n",B[1][1]);
    printf("linha 2 e coluna 3: %d\n",B[1][2]);

    printf("VETOR 3:\n");

    printf("linha 1 e coluna 1: %d\n",C[0][0]);
    printf("linha 1 e coluna 2: %d\n",C[0][1]);
    printf("linha 1 e coluna 3: %d\n",C[0][2]);

    printf("linha 2 e coluna 1: %d\n",C[1][0]);
    printf("linha 2 e coluna 2: %d\n",C[1][1]);
    printf("linha 2 e coluna 3: %d\n",C[1][2]);
}
#endif // ex4

#ifdef ex5
/*5 - Escreva um programa que receba um vetor e o decomponha em dois outros vetores,
    um contendo as componentes de ordem ímpar e o outro contendo as componentes
    de ordem par. Por exemplo, se o vetor dado for v = {3, 5, 6, 8, 1, 4, 2, 3, 7},
    o programa deve gerar os vetores u = {3, 6, 1, 2, 7} e w = {5, 8, 4, 3}.*/

main()
{
    int A[10];
    int Par[10];
    int Impar[10];
    int cont,cont1,cont2;

    printf("Insira 10 valores para o vetor: \n");
    for(cont = 0; cont < 10; cont++)
    {
        scanf("%d",&A[cont]);
    }

    for(cont = 0, cont1 = 0, cont2 = 0; cont < 10; cont++)
    {
        if(A[cont] % 2 == 0)
        {
            Par[cont1] = A[cont];
            cont1++;
        }
        else
        {
            Impar[cont2] = A[cont];
            cont2++;
        }
    }

    printf("VETOR A: \n");
    for(cont = 0; cont < 10; cont++)
    {
        printf("%d ",A[cont]);
    }
    printf("\n\n");

    printf("VETOR Par: \n");
    for(cont = 0; cont < cont1; cont++)
    {
        printf("%d ",Par[cont]);
    }
    printf("\n\n");

    printf("VETOR Impar: \n");
    for(cont = 0; cont < cont2; cont++)
    {
        printf("%d ",Impar[cont]);
    }
    printf("\n\n");

}
#endif // ex5

#ifdef ex6
/*6 - Receba via teclado dez valores numericos e ordene por ordem crescente estes
    valores, guardando-os num vetor. Ordene o valor assim que ele for digitado.
    Mostre ao final os valores em ordem.*/

main()
{
    int A[10];
    int cont,cont1,cont2; //i,j,temp;

    printf("insira 10 numeros: \n");
    for(int cont = 0; cont < 10; cont++)
    {
    printf("digite o %d numero: ",cont+1);
    scanf("%d",&A[cont]);
    }
    for(cont = 0; cont < 10; cont++)
    {
        for(cont1 = cont + 1; cont1 < 10; cont1++)
        {
            if(A[cont] > A[cont1])
            {
               cont2 = A[cont];
               A[cont] = A[cont1];
               A[cont1] = cont2;
            }
        }
    }
    printf("Vetor em ordem crescente: \n");
    for(cont = 0; cont < 10; cont++)
    {
    printf("%d ",A[cont]);
    }
}
#endif // ex6

#ifdef ex7
/*7 - Leia uma matriz 5 x 5. Leia tambem um valor X. O programa dever fazer a busca
    desse valor na matriz e, ao final escrever a localizacao (linha e coluna) ou
    uma mensagem de ”nao encontrado”.*/

main()
{
    int A[5][5];
    int x;
    int cont = 0;
    int i,i2;
    int coluna,linha;

    printf("insira os valores da matriz 5x5: \n");
    for( i2 = 0; i2 < 5; i2++)
        for( i = 0; i < 5; i++)
    {
        {
            printf("Elemento [%d][%d]: ",i + 1,i2 + 1);
            scanf("%d",&A[i][i2]);
        }
    }
    printf("insira o valor a ser procurado no vetor: ");
    scanf("%d",&x);
    for(int i = 0; i < 5; i++)
    {
        for(int i2 = 0; i2 < 5; i2++)
        {
            if(x==A[i][i2])
            {
                coluna = i;
                linha = i2;
                printf("o valor foi encontrado na coluna %d linha %d\n",linha + 1,coluna + 1);
            }
            else
            {
                cont++;
            }
        }
    }
    if(cont > 0)
        {
            printf("o numero nao foi encontrado!");
        }
}
#endif // ex7
