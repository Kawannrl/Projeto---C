# include <stdio.h>

int main (){

    int numero, i, n;
    float media, soma;

    printf ("Informe quantas somas deseja realizar: ");
    scanf ("%d", &n);
    
    for (i = 0; i < n; i++){
        printf ("Informe um numero: ");
        scanf ("%d", &numero);

        soma = soma + numero;
        media = soma / n;
    }

    printf ("A soma eh: %f", soma);
    printf ("\nA media eh: %f", media);

    return 0;
}