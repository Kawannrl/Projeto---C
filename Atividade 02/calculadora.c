#include <stdio.h>
#include <stdlib.h>

void somar() {
    float num1, num2;
    printf("Informe o primeiro numero: ");
    scanf("%f", &num1);
    printf("Informe o segundo numero: ");
    scanf("%f", &num2);
    printf("O resultado da soma eh: %.2f\n", num1 + num2);
}

void subtrair() {
    float num1, num2;
    printf("Informe o primeiro numero: ");
    scanf("%f", &num1);
    printf("Informe o segundo numero: ");
    scanf("%f", &num2);
    printf("O resultado da subtracao eh: %.2f\n", num1 - num2);
}

void multiplicar() {
    float num1, num2;
    printf("Informe o primeiro numero: ");
    scanf("%f", &num1);
    printf("Informe o segundo numero: ");
    scanf("%f", &num2);
    printf("O resultado da multiplicacao eh: %.2f\n", num1 * num2);
}

void dividir() {
    float num1, num2;
    printf("Informe o primeiro numero: ");
    scanf("%f", &num1);
    printf("Informe o segundo numero: ");
    scanf("%f", &num2);

    while (num2 == 0) {
        printf("Divisao por zero eh invalida!!\ninforme um outro numero: ");
        scanf("%f", &num2);
    }
    printf("O resultado da divisao eh: %.2f\n", num1 / num2);
}

void calculadora() {
    int opcao;

    do {
        printf("\nMENU DE OPERACOES\n");
        printf("1 - Soma\n2 - Subtracao\n3 - Divisao\n4 - Multiplicacao\n0 - Sair\n");
        printf("informe sua opcao: ");
        scanf("%d", &opcao);
        

        switch (opcao) {
            case 1:
                system("cls");
                somar();
                break;
            case 2:
                system("cls");
                subtrair();
                break;
            case 3:
                system("cls");
                dividir();
                break;
            case 4:
                system("cls");
                multiplicar();
                break;
            case 0:
                system("cls");
                printf("Saindo da calculadora\n");
                break;
            default:
                printf("Opcao invalida!!!\ninforme uma opcao valida\n");
        }
    } while (opcao != 0);
}