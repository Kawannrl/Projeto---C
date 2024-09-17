# include <stdio.h>
# include <string.h>

int n = 0;

struct st_contatos
{
    char nome [100], telefone [100], email [100], endereco [100];
};

struct st_agenda
{
    struct st_contatos contato [100];
} agenda;

void chama_menu (){

    int opcao;

    do {
        printf ("\nEscolha uma opcao: ");
        printf ("\n1 - Inserir\n2 - Excluir\n3 - Buscar\n4 - Listar contatos\n5 - Sair\nOpcao: ");
        scanf ("%d", &opcao);
        system ("cls");
    } while (opcao != 1 && opcao != 2 && opcao != 3 && opcao != 4 && opcao != 5);

    switch (opcao){

        case 1:
        inserir ();
        chama_menu();
        break;
        case 2:
        excluir ();
        chama_menu ();
        break;
        case 3:
        buscar ();
        chama_menu ();
        break;
        case 4:
        listar_contatos ();
        chama_menu ();
        break;
        case 5:
        printf ("\nPrograma encerrado pelo usuario");
        break;
        default:
        printf ("Opcao Invalida\n\nInforme uma opcao valida");
        chama_menu ();
        break;
    }
}

void inserir (){
    
    if (agenda.contato > 100){
        printf ("Informe quantos numeros deseja inserir: ");
        scanf ("%d", &n);

        for (int i = 0; i < n; i++){
            printf ("Informe seu nome: ");
            fgets (agenda.contato [i].nome, 100, stdin);
            getchar ();
            printf ("Informe seu telefone: ");
            fgets (agenda.contato [i].telefone, 100, stdin);
            getchar ();
            printf ("Informe seu email: ");
            fgets (agenda.contato [i].email, 100, stdin);
            getchar ();
            printf ("Informe seu endereco: ");
            fgets (agenda.contato [i].endereco, 100, stdin);
            getchar ();
        }
    } else {
        printf ("Agenda cheia!!!\nExclua um numero para poder registrar um novo numero!");
    }
}

void excluir (){

    
    
}

void buscar (){


}

void listar_contatos (){

    for (int i = 0; i < n; i++){
        printf ("O nome eh %s, o telefone eh %s, o email eh %s, o endereco eh %s", agenda.contato [i].nome, agenda.contato [i].telefone, agenda.contato [i].email, agenda.contato [i].endereco);
    }
}

int main (){

    chama_menu ();

    return 0;
}