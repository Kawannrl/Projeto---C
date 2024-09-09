# include <stdio.h>

int main (){

    int quant;
    float preco1, preco2, preco3;
    char nome [50];
    

    printf ("Bem vindo !!! \nPor favor nos informe o seu nome: ");
    fgets (nome, 50, stdin);
    printf ("Informe a quantidade desse produto: ");
    scanf ("%d", &quant);
    printf ("Informe o valor unitario do produto: ");
    scanf ("%f", &preco1);

    if (preco1 < 10){
        preco2 = preco1;
    } 
    else if (preco1 > 10 && preco1 <= 99){
        preco2 = quant * (preco1 * 0.95);
    }
    else if (preco1 > 100 && preco1 <= 999){
        preco2 = quant * (preco1 * 0.9);
    }
    else {
        preco2 = quant * (preco1 * 0.85);
    }
    preco3 = preco1 * quant;

    printf (" Ola, Sr. %s o valor final do produto foi R$ %0.2f", nome, preco3);
    printf (" O valor final do produto com desconto foi R5 %0.2f", preco2);

    return 0;
}