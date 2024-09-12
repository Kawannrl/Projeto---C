/*
Criar um pequeno projeto de um caixa eletrônico. O usuário terá um menu para escolher entre saldo, extrato, saue, deposito euma opção para sair.
O saque podera somente ser realizado se tivaer saldo na conta  
*/

# include <stdio.h>
# include <stdlib.h>
#include <string.h>

const int nr_agencia = 1070, nr_conta = 121, nr_senha = 1007;
float saldo = 0.0, limite = 500.00;
float operacao_credito [100], operacao_debito [100];
int voltar, total_credito = 0, total_debito = 0;

void preenche_vetor (){

    for (int i = 0; i < 100; i++){
        operacao_credito [i] = 0.0;
        operacao_debito [i] = 0.0;
    }
}

void consulta_saldo (){

    do {
        printf ("\nSaldo:       R$ %.2f", saldo);
        printf ("\nLimite       R$ %.2f", limite);
        printf ("\nDisponivel   R$ %.2f", saldo + limite);
        printf ("\n*******************");
        printf ("\nDeseja voltar ao menu? [ S | N ]");
        scanf ("%d", &voltar);
        system ("cls");
    } while (voltar != "S");
    chama_menu ();
}

void realizar_deposito(float *saldo) {
    
    float num;

    printf("Informe o valor que voce deseja depositar: ");
    scanf("%f", &num);

    *saldo += num;
    
    if (total_credito < 100) {
        operacao_credito[total_credito++] = num;
    } 
    else {
        printf("Histórico de crédito cheio.\n");
    }
}

void realizar_saque(float *saldo) {
    
    float valor_saque;

    printf("Entre com o valor que voce deseja sacar: ");
    scanf("%f", &valor_saque);

    if (valor_saque <= *saldo) {
        
        *saldo -= valor_saque;
        
        if (total_debito < 100) {
            operacao_debito[total_debito++] = valor_saque;
        } else {
            printf("Histórico de débito cheio.\n");
        }
    } else {
        printf("Saldo insuficiente para o saque.\n");
    }
}

void consultar_extrato(){
  
    int i;

    printf("\nExtrato Bancário Digital:\n");
    printf("\nOperações de Crédito:\n");

    for (int i = 0; i < total_credito; i++) {
        printf("Depósito: %.2f\n", operacao_credito[i]);
    }

    printf("\nOperações de Débito:\n");
    
    for (int i = 0; i < total_debito; i++) {
        printf("Saque: %.2f\n", operacao_debito[i]);
    }

    printf("\nSaldo Final: %.2f\n", saldo);
}

void chama_menu (){

    int opcao;

    do {
        printf ("\nEscolha uma opcao: ");
        printf ("\n1 - Saldo\n2 - Extrato\n3 - Saque\n4 - Deposito\n5 - Sair\nOpcao: ");
        scanf ("%d", &opcao);
        system ("cls");
    } while (opcao != 1 && opcao != 2 && opcao != 3 && opcao != 4 && opcao != 5);

    switch (opcao){

        case 1:
        consulta_saldo ();
        break;
        case 2:
        consulta_extrato ();
        break;
        case 3:
        realizar_saque ();
        break;
        case 4:
        realizar_deposito ();
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

int main (){
    
    int senha , conta, agencia;

    preenche_vetor ();

    do {
        printf ("Infrome sua agencia: ");
        scanf ("%d", &agencia);
        printf ("Infrome sua conta: ");
        scanf ("%d", &conta);
        printf ("Infrome sua senha: ");
        scanf ("%d", &senha);
        system ("cls");

        if (nr_agencia != agencia || nr_conta != conta || nr_senha != senha){
            printf ("Dados incorretos\n\n");
        }
    } while (nr_agencia != agencia || nr_conta != conta || nr_senha != senha);
        printf ("Acesso liberado");

        chama_menu ();
}
