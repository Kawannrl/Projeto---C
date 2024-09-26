# include <stdio.h>

void subtrair (){

    float num1 = 0.0, num2 = 0.0, subtrair = 0.0;

    printf ("Informe o primeiro numero: ");
    scanf ("%f", num1);
    printf ("Informe o segundo numero: ");
    scanf ("%f", num2);

    subtrair = num1 - num2;

    printf ("O resultado da soma eh: %f", subtrair);

    return subtrair;
}