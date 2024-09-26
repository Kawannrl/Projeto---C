# include <stdio.h>
# include "soma.c"
# include "subtrair.c"
# include "multiplicar.c"
# include "dividir.c"


void calculadora (){

    int opcao;
    
    do {
        printf ("\nEscoha uma opcao\n");
        printf ("\n 1 - Somar\n 2 - Subtrair\n 3 - Multiplicar\n 4 - Dividir\n 5 - Sair\n");
        scanf ("%d", &opcao);
    
        switch (opcao)
        {
        case 1:
            somar ();
            break;
        case 2:
            subtrair ();
            break;
        case 3:
            multiplicar ();
            break;
        case 4:
            dividir ();
            break;
        case 5:
            printf ("O programa esta sendo encerrad pelo usuario");
            break;
        
        default:
            printf ("Erro!!!\nDigite um numero de 1 a 5");
            break;
        }
    } while (opcao != 0);
}