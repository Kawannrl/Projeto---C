# include <stdio.h>
# include <stdlib.h>
# include <string.h>

const int nr_agencia = 1070, nr_conta = 121, nr_senha = 1007;
float saldo = 0.0, limite = 500.00, total;
float operacao_credito [100], operacao_debito [100];
int total_credito = 0, total_debito = 0, i;
char voltar;

void preenche_vetor (){

    for (int i = 0; i < 100; i++){
        operacao_credito [i] = 0.0;
        operacao_debito [i] = 0.0;
    }
}

void consulta_saldo (){
   
    printf ("\nSaldo:       R$ %.2f", saldo);
    printf ("\nLimite       R$ %.2f", limite);
    printf ("\nDisponivel   R$ %.2f", total = saldo + limite);
    
    chama_menu ();
}

void realizar_deposito (float *saldo){
    
    float valor_depositar;

    printf ("\nInforme o valor que voce deseja depositar: ");
    scanf ("%f", &valor_depositar);

    *saldo = *saldo + valor_depositar;
    
    if (total_credito < 100){
        operacao_credito [total_credito++] = valor_depositar;
    } 
    else {
        printf("Crédito cheio.\n");
    }
}

void realizar_saque (float *saldo, float *limite){
    
    float valor_saque;

    total = *saldo + *limite;

    printf ("Entre com o valor que voce deseja sacar: ");
    scanf ("%f", &valor_saque);

    if (total_debito < 100){
        operacao_debito [total_debito++] = valor_saque;
    } else {
        printf ("Debito cheio");
    }

    if (total < valor_saque){
        printf ("Valor acima do valor total");
    } 
    else if (valor_saque > *saldo && (*saldo -valor_saque) < *limite){
        *limite = (*saldo - valor_saque) + *limite ;
        *saldo = (*saldo - valor_saque);
        if (*saldo < 0) {
            *saldo = 0;
        }
    }
    else {
        *saldo = *saldo - valor_saque;
    }
}

void consulta_extrato(){
  
    int i;

    printf ("\nExtrato Bancario Digital:\n");
    printf ("\nOperacoes de Credito:\n");

    for (i = 0; i < total_credito; i++){
        printf ("Deposito: %.2f\n", operacao_credito [i]);
    }

    printf ("\nOperacoes de Debito:\n");
    
    for (i = 0; i < total_debito; i++){
        printf ("Saque: %.2f\n", operacao_debito [i]);
    }

    printf ("\nSaldo Final: %.2f\n", total);
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
        chama_menu();
        break;
        case 2:
        consulta_extrato ();
        chama_menu ();
        break;
        case 3:
        realizar_saque (&saldo, &limite);
        chama_menu ();
        break;
        case 4:
        realizar_deposito (&saldo);
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

int main (){
    
    int senha , conta, agencia;

    preenche_vetor ();

    do {
        printf ("Informe sua agencia: ");
        scanf ("%d", &agencia);
        printf ("Informe sua conta: "); 
        scanf ("%d", &conta);
        printf ("Informe sua senha: ");
        scanf ("%d", &senha);
        system ("cls");

        if (nr_agencia != agencia || nr_conta != conta || nr_senha != senha){
            printf ("Dados incorretos\n\n");
        }
    } while (nr_agencia != agencia || nr_conta != conta || nr_senha != senha);
        printf ("Acesso liberado");

        chama_menu ();
}
