#define ex8
#include <stdio.h>

#ifdef ex1
/*1 - Escreva um programa que receba via teclado numeros inteiros positivos.
    Quando o numero digitado for negativo o programa deve parar e calcula a
    media dos valores digitados.*/

main()
{
    int num=0;
    int soma;
    int i=0;
    int media;

    while(num>=0)
    {
        printf("Digite um valor:\n");
        printf("Obs:o programa finalizara apos ser informado um numero negativo \n");
        scanf("%d",&num);
        if(num>-1)
        {
            soma=soma+num;
            i++;
        }
    }

    media=soma/i;

    printf("A media dos numeros digitados e %d",media);
}
#endif // ex1

#ifdef ex2
/*2 - Escreva um programa para adivinhar um numero entre 1 e 99 que o usuario
    pensou. Digite via teclado os simbolos =,> ou < a cada pergunta. Utilize o
    comando if-else.*/

// ASCII CODES
// '<' = 60
// '=' = 61
// '>' = 62

main()
{
    int menor=1;
    int maior=99;
    int valor=50;
    char c;

    printf("Pense em numero entre 1 e 99\n");
    printf("Use = para igual, < para menor, > para maior\n\n");

    do
    {
        printf("O numero que voce pensou foi %d?\n",valor);
        printf("[<, =, >]: ");
        scanf("%c",&c);

        if(c==60)
        {
            maior=valor-1;
        }

        if(c==61)
        {
            printf("\nVoce pensou no numero %d!!!\n",valor);
        }

        if(c==62)
        {
            menor=valor+1;
        }

        valor=(maior+menor)/2;
    }while(c!=61);
}
#endif // ex2

#ifdef ex3
/*3 - Resecreva o programa do execicio anterior agora utilizando o comando switch.
    Conte o n. de tentativas e imprima o resultado no video.*/

main()
{
    int menor=1;
    int maior=99;
    int valor=50;
    char c;

    printf("Pense em numero entre 1 e 99\n");
    printf("Use = para igual, < para menor, > para maior\n\n");

     do
    {
        printf("O numero que voce pensou foi %d?\n",valor);
        printf("[<, =, >]: ");
        scanf("%c",&c);

        switch (c)
        {

            case 60 :
            {
                maior = valor - 1;
                break;
            }

            case 61 :
            {
                printf("\nVoce pensou no numero %d!!!\n",valor);
                break;
            }

            case 62 :
            {
                menor=valor+1;
                break;
            }
        }
        valor=(maior+menor)/2;
    }while(c != 61);
}
#endif // ex3

#ifdef ex4
/*4 - De um modo geral, as ligações telefônicas são cobradas pelas suas durações.
    O sistema registra os instantes em que a ligação foi iniciada e concluída.
    Escreva um programa que recebe os dois instantes dados em horas, minutos e
    segundo e determina o intervalo de tempo (em horas, minutos e segundos)
    decorrido entre eles.*/

main()
{
    int h1,h2,h3;
    int min1,min2,min3;
    int s1,s2,s3;
    int total1,total2,total3;

    printf("Informe o horario que começou a ligacao:\n");
    printf("Horas: ");
    scanf("%d",&h1);
    printf("Minutos: ");
    scanf("%d",&min1);
    printf("Segundos ");
    scanf("%d",&s1);

    total1 = s1;
    total1 = total1 + (min1*60);
    total1 = total1 + (h1*3600);

    printf("Informe o horario que terminou a ligacao:\n");
    printf("Horas: ");
    scanf("%d",&h2);
    printf("Minutos: ");
    scanf("%d",&min2);
    printf("Segundos ");
    scanf("%d",&s2);

    total2 = s2;
    total2 = total2 + (min2*60);
    total2 = total2 + (h2*3600);

    total3 = total2 - total1;

    h3 = total3/3600;
    min3 = (total3%3600)/60;
    s3 = (total3%3600)%60;

    printf("Sua ligacao durou %dh %dmin e %ds ",h3,min3,s3);

}
#endif // ex4

#ifdef ex5
/*5 - Escreva um programa que realize arredondamentos de números utilizando a
    seguinte regra:
    - se a parte fracionaria for menor ou igual a 0,24 o n. e' arredonda para 0
    - se a parte fracionaria for maior ou igual a 0,25 e menor ou igual a 0,74
      o numero e' arredondado para 0,5
    - se a parte fracionaria for maior ou igual a 0,75 o numero e' arredondado
      para o inteiro imediatamente superior*/

main()
{
    float num;
    int numInt;

    printf("Insira o numero que você deseja realizar o arredondamento: ");
    scanf("%f",&num);

    numInt = num;
    num = num - numInt;

    if(num <= 0.24)
        num = 0;

    if(num >= 0.25 && num <= 0.74)
        num = 0.5;

    if(num >= 0.75)
        num = 1;

    num = num + numInt;

    printf("O resultado do arrendondamento e: %.2f",num);
}
#endif // ex5

#ifdef ex6
/*6 - Um posto está vendendo combustíveis com a seguinte tabela de descontos:
     Álcool
         até 20 litros, desconto de 3% por litro
         acima de 20 litros, desconto de 5% por litro
     Gasolina
          até 20 litros, desconto de 4% por litro
          acima de 20 litros, desconto de 6% por litro
     Escreva um programa que leia o número de litros vendidos e o tipo de
     combustível (codificado da seguinte forma: A-álcool, G-gasolina), calcule e
     imprima o valor a ser pago pelo cliente sabendo-se que o preço do litro da
     gasolina é R$ 3,88 e o preço do litro do álcool é R$ 3,18.*/

main()
{
    char c;
    float gasolina = 3.88;
    float alcool = 3.18;
    float litros;
    float valor;

    printf("Qual tipo de combustivel voce deseja abastecer?\nUse G para gasolina e A para alcool: ");
    scanf("%c",&c);

    printf("Quantos litros devem ser abastecidos? ");
    scanf("%f",&litros);

    if(c == 'A' || c == 'a' && litros <= 20)
    {
        valor = alcool * litros;
        valor = valor * 0.97;
    }
    else
    {
        if(c == 'A' || c == 'a' && litros > 20)
        {
            valor = alcool * litros;
            valor = valor * 0.95;
        }
        else
        {
            if(c == 'G' || c == 'g' && litros <= 20)
            {
                valor = gasolina * litros;
                valor = valor * 0.96;
            }
            else
            {
                valor = gasolina * litros;
                valor = valor * 0.94;
            }
        }
    }

    printf("O valor de combustivel a ser pago e: %.2f",valor);
}
#endif // ex6

#ifdef ex7
/*7 - Leia a distancia em Km e a quantidade de litros de gasolina consumidos
    por um carro em um percurso, calcule o consumo em Km/l e escreva uma
    mensagem de acordo com a tabela abaixo:
    CONSUMO (Km/l) MENSAGEM
    menor que 8    Venda o carro!
    entre 8 e 14   Economico!
    maior que 14   Super economico!*/

main()
{
    int km;
    int litros;
    int consumo;

    printf("Insira a distancia em quilometros: ");
    scanf("%d",&km);

    printf("Insira a quantidade de litros de gasolina consumidos: ");
    scanf("%d",&litros);

    consumo = km / litros;

    if(consumo < 8)
        printf("Venda o carro!");
    else
    {
        if(consumo >= 8 && consumo <= 14)
            printf("Economico!");
        else
            printf("Super Economico!");
    }
}
#endif // ex7

#ifdef ex8
/*8 - Escreva um programa que calcule o IMC de uma pessoa e mostre sua classificacao
    conforme tabela abaixo:
       IMC             Classificacao
     < 18,5            Abaixo do Peso
       18,6 - 24,9     Saudavel
       25,0 - 29,9     Peso em excesso
       30,0 - 34,9     Obesidade Grau I
       35,0 - 39,9     Obesidade Grau II(severa)
     > 40,0            Obesidade Grau III(morbida)*/

main()
{
    float altura;
    float peso;
    float resultado;

    printf("Insira a sua altura: ");
    scanf("%f",&altura);

    printf("Insira o seu peso: ");
    scanf("%f",&peso);

    resultado = peso / (altura * altura);

    if(resultado < 18.5)
        printf("Abaixo do peso");
    else
        if(resultado >= 18.5  && resultado <= 24.9)
        printf("Peso normal");
    else
        if(resultado >= 25  && resultado <= 29.9)
        printf("Sobrepeso");
    else
        if(resultado >= 30  && resultado <= 34.9)
        printf("Obesidade grau 1");
    else
        if(resultado >= 35 && resultado <= 39.9)
        printf("Obesidade grau 2");
    else
        printf("Obesidade grau 3");


}
#endif // ex8
