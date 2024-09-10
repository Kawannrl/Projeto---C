# include <stdio.h>

void alterar_valor (int* valor1, int* valor2){
    
    printf ("O valor antes de ser alterado\n");
    printf ("O valor inicial eh: %d e %d\n", *valor1, *valor2);

    printf ("O valor apos ser alterado\n");
    *valor1 = (*valor1) + (*valor1 * 0.5);
    *valor2 = (*valor2) - (*valor2 * 0.5);
    printf ("O valor final eh: %d e %d\n", *valor1, *valor2);
}

int main () {

    int valor1 = 10, valor2 = 4;

    alterar_valor (&valor1, &valor2);

    printf ("A variavel do programa inicial: %d e %d", valor1, valor2);

    return 0;
}