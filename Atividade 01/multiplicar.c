# include <stdio.h>

void multiplicar (){

    float num1 = 0.0, num2 = 0.0, multiplicar = 0.0;

    printf ("Informe o primeiro numero: ");
    scanf ("%f", num1);
    printf ("Informe o segundo numero: ");
    scanf ("%f", num2);

    multiplicar = num1 * num2;

    printf ("O resultado da soma eh: %f", multiplicar);

    return multiplicar;
}