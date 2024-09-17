# include <stdio.h>
# include <string.h>

struct st_dados
{
    char nome [50], endereco [100];
    int idade;
} informacoes;


int main (){

    printf ("Informe seu nome: ");
    fgets (informacoes.nome, 50, stdin);
    printf ("Informe sua idade: ");
    scanf ("%d", &informacoes.idade);
    getchar ();
    printf ("Informe seu endereco: ");
    fgets (informacoes.endereco, 100, stdin);

    printf ("O seu nome eh %s, sua idade eh %d, seu endereco eh %s", strtok(informacoes.nome, "\n"), informacoes.idade, informacoes.endereco);

    return 0;
}