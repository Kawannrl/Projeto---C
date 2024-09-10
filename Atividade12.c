# include <stdio.h>
# include <string.h>

modificador_variaveis (char* nome, int* idade, float* altura){

    *nome = "kawann";
    *idade = 18;
    *altura = 1.75;
}

int main (){

    int idade;
    char nome [50];
    float altura;

    printf ("Informe seu nome: ");
    fgets (nome, 50, stdin);
    printf ("Informe sua idade: ");
    scanf ("%d", idade);
    printf ("Informe sua altura: s");
    scanf ("%f", altura);

    modificador_variaveis (&nome, &idade, &altura);

    printf ("Variaveis do inicio do pragrama: %c, %d e %0.2f", nome, idade, altura);

    printf ("Variaveis do final do programa: %c, %d, e %0.2f", nome, idade, altura);

    return 0;
}