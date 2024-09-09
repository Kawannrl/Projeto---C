# include <stdio.h>
# include <string.h>

void limpar_entrada (){
    
    char c;

    while ((c = getchar ()) != '\n' && c != EOF){}
}

void ler_texto (char * buffer, int length){

    fgets (buffer, length, stdin);
    strtok (buffer, "\n");
}

int main (){

    float salario1, salario2;
    char nome1 [50], nome2 [50];
    int idade;
    char sexo;

    printf ("Informe o nome da primeira pessoa: ");
    ler_texto (nome1, 50);
    printf ("Informe o salario da primeira pessoa: ");
    scanf ("%f", &salario1);

    printf ("Informe o nome da segunda pessoa: ");
    limpar_entrada ();
    ler_texto (nome2, 50);
    printf ("Informe o salario da segunda pessoa: ");
    scanf ("%f", &salario2);

    printf ("O %c recebe %.2f e o %c recebe %.2f", nome1, salario1, nome2, salario2);

    return 0;
}