# include <stdio.h>
# include <string.h>

struct  st_contato{
    char nome [100];
    int ano_nascimento;
    char telefone [20];
    char email [100]; 
};

struct  st_agenda{
    struct st_contato contatos [100];
}agenda;


int main (){

    for (int i = 0; i < 3; i++){
        printf ("Informe o nome: ");
        fgets (agenda.contatos [i].nome, 100, stdin);
        printf ("Informe o ano de nascimento: ");
        scanf ("%d", &agenda.contatos [i].ano_nascimento);
    }

    return 0;
}