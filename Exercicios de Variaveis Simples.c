#define ex1
#include <stdio.h>

#ifdef ex1
/*1 - Escreva um programa e inicialize as variaveis do tipo char, int, short,
    long, unsigned(char, int, short, long), float e double com seus valores
    limites e imprima-os no video. Utilize variaveis globais para os valores
    positivos e locais para os negativos.*/

    char c1 = +127;

    int i1 = +32767;
    short int si1 = +32767;
    long int li1 = 2147483647;

    double d1 = 1.7E+308;

    float f1 = 3.4E+38;

    unsigned char uc1 = 255;
    unsigned int ui1 = 65535;
    unsigned short int usi1 = 65535;
    unsigned long int uli1 = 4294967295;

    unsigned char uc2 = 0;
    unsigned int ui2 = 0;
    unsigned short int usi2 = 0;
    unsigned long int uli2 = 0;

main()
{
    char c2 = -128;

    int i2 = -32768;
    short int si2 = -32768;
    long int li2 = -2147483648;

    double d2 = -1.7E-307;

    float f2 = -3.4E-38;

    printf("char-> %c ate %c\n",c2,c1);
    printf("int-> %d ate %d\n",i2,i1);
    printf("short int-> %hd ate %hd\n",si2,si1);
    printf("long int-> %ld ate %ld\n",li2,li1);
    printf("double-> %f ate %f\n",d2,d1);
    printf("float-> %f ate %f\n",f2,f1);
    printf("unsigned char -> %u %c ate %u %c\n",uc2,uc2,uc1,uc1);
    printf("unsigned int -> %u ate %u\n",ui2,ui1);
    printf("unsigned short int -> %hu ate %hu\n",usi2,usi1);
    printf("unsigned long int -> %lu ate %lu\n",uli2,uli1);
}
#endif // ex1

#ifdef ex2
/*2 - Escreva um programa que receba dados via teclado para variaveis do tipo short,
    long, int, float, double e um char e imprima-os no video no seguinte
    formato:

             10        20        30        40        50        60
     12345678901234567890123456789012345678901234567890123456789012345
         short               long                int
                   float               double              char*/

main()
{
    short int si;
    long int li;
    int i;
    float f;
    double d;
    char c;

    printf("Insira um valor para o short ");
    scanf("%hd",&si);

    printf("Insira um valor para o long ");
    scanf("%ld",&li);

    printf("Insira um valor para o int ");
    scanf("%d",&i);

    printf("Insira um valor para o float ");
    scanf("%f",&f);

    printf("Insira um valor para o double ");
    scanf("%lf",&d);

    getchar();
    printf("Insira um valor para o char ");
    scanf("%c",&c);

    printf("        10        20        30        40        50        60\n");

    printf("12345678901234567890123456789012345678901234567890123456789012345\n");

    printf("    %-20hd%-20ld%-20d\n",si,li,i);
    printf("              %-20g%-20g%-20c",f,d,c);

}
#endif // ex2

#ifdef ex3 // (CORRIGIR)
/*3 - Acrescente ao exercicio anterior mais uma linha. Receba via teclado os valores
    sem sinal char, int e long int e escrevendo nas coluna 10, 30 e 50.*/

main()
{
    short int si;
    long int li;
    int i;
    float f;
    double d;
    char c;
    unsigned char uc;
    unsigned int ui;
    unsigned long int uli;

    printf("Insira um valor para o short ");
    scanf("%hd",&si);

    printf("Insira um valor para o long ");
    scanf("%ld",&li);

    printf("Insira um valor para o int ");
    scanf("%d",&i);

    printf("Insira um valor para o float ");
    scanf("%f",&f);

    printf("Insira um valor para o double ");
    scanf("%lf",&d);

    getchar();
    printf("Insira um valor para o char ");
    scanf("%c",&c);

    getchar();
    printf("Insira um valor para o unsigned char ");
    scanf("%c",&uc);

    printf("Insira um valor para o unsigned int ");
    scanf("%u",&ui);

    printf("Insira um valor para o unsigned long int ");
    scanf("%lu",&uli);

    printf("        10        20        30        40        50        60\n");

    printf("12345678901234567890123456789012345678901234567890123456789012345\n");

    printf("    %-20hd%-20ld%-20d\n",si,li,i);
    printf("              %-20g%-20g%-20c\n",f,d,c);
    printf("         %-20c%-20u%-20lu",uc,ui,uli);
}
#endif // ex3

#ifdef ex4
/*4 - Escreva um programa que permute o conteúdo de duas variáveis sem utilizar uma
    variável auxiliar.*/

main()
{
    int a,b;

    printf("Informe o valor de A: ");
    scanf("%d",&a);
    printf("Informe o valor de B: ");
    scanf("%d",&b);

    a=a+b;
    b=a-b;
    a=a-b;

    printf("\nValor de A apos processo: %d\n",a);
    printf("Valor de B apos processo: %d",b);
}
#endif // ex4

#ifdef ex5
/*5 - Escreva um programa que determine o menor multiplo de um numero inteiro. Este
    multiplo deve ser maior que o limite minimo recebido. Recebe os 2 numeros via
    teclado.
    Ex: menor multiplo de 13 maior que 100. Resultado: 104.*/

main()
{
    int MenorMult;
    int LimiteMin;
    int i=1;
    int Resultado;

    printf("Informe o numero que deseja saber o menor multiplo ");
    scanf("%d",&MenorMult);

    printf("Informe o limite minimo ");
    scanf("%d",&LimiteMin);

    do
    {
        Resultado=MenorMult*i;
        i++;
    }while(Resultado<=LimiteMin);

    printf("O menor multiplo de %d maior que %d. O resultado e %d",MenorMult,LimiteMin,Resultado);
}
#endif // ex5

#ifdef ex6
/*6 - Escreva um programa que receba via teclado um tempo em segundos e converta um
    para horas, minutos e segundos.
    Ex.: recebe 3850 segundos que converte para 1h 4min 10s.*/

main()
{
    int s1;
    int s2;
    int min;
    int h;

    printf("Informe quantos segundo voce deseja converter ");
    scanf("%d",&s1);

    h=s1/3600;
    min=(s1%3600)/60;
    s2=(s1%3600)%60;

    printf("O resultado da conversao foi: %dh %dmin %ds ",h,min,s2);
}
#endif // ex6

#ifdef ex7
/*7 - Faça um programa para ler um numero inteiro, positivo de tres digitos, e gerar
    outro número formado pelos dígitos invertidos do número lido.
    Ex:   NúmeroLido = 123
        NúmeroGerado = 321*/

main()
{

    int num;
    int x;
    int unidade;
    int dezena;
    int centena;

    while(num<100 || num>999)
    {
        printf("Insira um numero com 3 digitos desejado ");
        scanf("%d",&num);
    }

    x=num;
    centena=x/100;
    x=x%100;
    dezena=x/10;
    unidade=x%10;

    printf("O numero inserido foi %d\n",num);
    printf("O numero gerado foi %d%d%d\n",unidade,dezena,centena);
}

#endif // ex7

#ifdef ex8
/*8 - Escreva um program que lê um valor em reais e calcula qual o menor número
    possível de notas de $100, $50, $10 e $1 em que o valor lido pode ser
    decomposto. Imprimir o valor lido e a relação de notas necessárias.*/

main()
{
    int valorLido;
    int valor;
    int nota100;
    int nota50;
    int nota10;
    int nota1;

    printf("Digite o valor que voce deseja decompor ");
    scanf("%d",&valor);

    valorLido = valor;
    nota100 = valor/100;
    valor = valor%100;
    nota50 = valor/50;
    valor = valor%50;
    nota10 = valor/10;
    valor = valor%10;
    nota1 = valor;

    printf("O valor lido foi %d\n",valorLido);
    printf("Sera usado:\nNotas 100: %d\nNotas 50: %d\nNotas 10: %d\nNotas 1: %d",nota100,nota50,nota10,nota1);

}
#endif // ex8
