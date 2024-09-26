# include <stdio.h>

void somar (){

    double num1 = 0.0, num2 = 0.0, soma = 0.0;

    printf ("Informe o primeiro numero: ");
    scanf ("%f", num1);
    printf ("Informe o segundo numero: ");
    scanf ("%f", num2);

    soma = num1 + num2;

    printf ("O resultado da soma eh: %f", soma);

    return soma;
}