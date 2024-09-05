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

    printf ("A soma eh: %.2f", soma);
    printf ("\nA media eh: %.2f", media);

    return 0;
}
