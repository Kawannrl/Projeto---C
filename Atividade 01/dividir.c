# include <stdio.h>

void dividir (){

    float num1 = 0.0, num2 = 0.0, dividir = 0.0;

    printf ("Informe o primeiro numero: ");
    scanf ("%f", num1);
    printf ("Informe o segundo numero: ");
    scanf ("%f", num2);

    if (num1 != 0){
        dividir = num1 - num2;

        printf ("O resultado da soma eh: %f", dividir);
    } 
    else {
        printf ("Digite um numero que seja divisivel");
    }

    return dividir;
}