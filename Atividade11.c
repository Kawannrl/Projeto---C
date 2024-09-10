# include <stdio.h>

void comparador (int num1, int num2){

    printf ("O endereco do num1: %d\n", &num1);
    printf ("O endereco do num2: %d\n", &num2);

    if (&num1 > &num2){
        printf ("O numero com maior endereco eh: %d", num1);
    } 
    else {
        printf ("O numero com maior endereco eh: %d", num2);
    } 
}

int main (){

    int num1, num2;

    printf ("Informe o primeiro numero: ");
    scanf ("%d", &num1);
    printf ("Informe o segundo numero: ");
    scanf ("%d", &num2);

    comparador (num1, num2);

    return 0;
}