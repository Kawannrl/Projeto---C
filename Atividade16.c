# include <stdio.h>
# include <string.h>

struct st_aluno
{
    char nome [100], curso [100];
    int num_matricula;
} aluno1 [5];

int main (){

    for (int i = 0; i < 5; i++){
        printf ("Informe o seu nome: ");
        fgets (aluno1 [i].nome, 100, stdin);
        printf ("Informe seu numero de matricula: ");
        scanf ("%d", &aluno1 [i].num_matricula);
        getchar ();
        printf ("\nInforme o seu curso: ");
        fgets (aluno1 [i].curso, 100, stdin);
    }

    for (int i = 0; i < 5; i++){
        printf ("\nSeu nome eh %s, seu numero de matricula eh %d, seu curso eh %s", strtok (aluno1 [i].nome, "\n"), aluno1 [i].num_matricula, aluno1 [i].curso);
    }

    return 0;
}