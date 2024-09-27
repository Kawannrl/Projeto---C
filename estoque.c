#include <stdio.h>

struct st_cadastro
{
    int codigo, quant, publicacao;
    float venda;
    char titulo [50], autor [50]; 
} cadastrar;


int guardar (int codigo, int quant, int publicacao, float venda, char titulo [50], char autor [50]);

int consultar (int codigo, int quant, int publicacao, float venda, char titulo [50], char autor [50]);