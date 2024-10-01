# include <stdio.h>
# include <stdlib.h>
# include "cadastro.c"
# include "estoque.c"

void menu (){

    int opcao;
    
    do {
    
        printf ("\nEscolha uma das opcoes:\n 1 - Cadastro\n 2 - Consulta\n 3 - Venda\n 4 - Estoque\n 5 - Sair\n");
        scanf ("%d", &opcao);

        switch (opcao)
        {
        case 1:
            cadastro ();
            break;
        case 2:
          //  consulta ();
            menu ();
            break;
        case 3:
            //venda ();
            menu ();
            break;
        case 4:
          //  estoque ();
            menu ();
            break;
        case 5:
            printf ("O programa esta sendo encerrado pelo usuario");
            break;
        default:
            system ("cls");
            printf ("Erro!!!\nEscolhe um numero entre 1 e 5");
            menu ();
            break;
        }
    } while (opcao < 0 && opcao > 5);
}