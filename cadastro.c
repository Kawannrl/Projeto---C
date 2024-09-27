# include <stdio.h>
# include <string.h>
# include "estoque.c"


int cadastro (){

  
    int codigo_de_barras, quant_estoque, ano_publicacao;
    float valor_venda;
    char titulo [50], autor [50]; 
    
    printf ("Informe o codigo de barras: ");
    scanf ("%d", &codigo_de_barras);
    getchar ();
    printf ("Informe o nome do autor: ");
    fgets (autor, 50, stdin);
    printf ("Informe o titulo: ");
    fgets (titulo, 50, stdin);
    printf ("Informe o ano de publicacao: ");
    scanf ("%d", &ano_publicacao);
    printf ("Informe a quantidade em estoque: ");
    scanf ("%d", &quant_estoque);
    printf ("Informe o valor do produro: ");
    scanf ("%f", &valor_venda);
    printf ("Livro cadastrado");

    guardar (codigo_de_barras, quant_estoque, ano_publicacao, valor_venda, titulo [50], autor [50]);
    
    return 0;
}