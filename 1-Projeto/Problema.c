# include <stdio.h>
# include <stdlib.h>
# include <string.h>

const char nr_login [50] = "321"; 
const char nr_senha [50] = "1234";
float altura = 0.0, peso = 0.0, imc = 0.0, tmb = 0.0;
int idade = 0;

void calculo_imc (){

    printf ("Calculadora de IMC\n");
    printf ("Informe sua altura em m: ");
    scanf ("%f", &altura);
    printf ("Informe o seu peso em Kg: ");
    scanf ("%f", &peso);
    printf ("Informe sua idade: ");
    scanf ("%d", &idade);

    imc = peso / (altura * altura);
    
    printf ("Seu IMC eh: %.2f", imc);
}

float gordura_corporal_homem (float *triceps, float *peitoral, float *abdomen){

    float soma = 0.0, densidade = 0.0;

    soma = *triceps + *peitoral + *abdomen;
    densidade = 1.10938 - (0.0008267 * soma);
    return (495 / densidade) - 450;
}

float gordura_corporal_mulher (float *triceps, float *peitoral, float *coxa){

    float soma = 0.0, densidade = 0.0;

    soma = *triceps + *peitoral + *coxa;
    densidade = 1.097 - (0.0008125 * soma);
    return (495 / densidade) - 450;
}

void gordura_corporal (){

    int sexo;
    float triceps, peitoral, abdomen, coxa, gordura;

    printf ("Informe o seu sexo:\n 1 - Homem\n 2 - Mulher\n");
    scanf ("%d", &sexo);

    if (sexo == 1){

        printf ("Digite a medida da dobra cutanea do triceps em mm: ");
        scanf ("%f", &triceps);
        printf ("Digite a medida da dobra cutanea do peitoral em mm: ");
        scanf ("%f", &peitoral);
        printf ("Digite a medida da dobra cutanea do abdomen em mm: ");
        scanf ("%f", &abdomen);

        gordura = gordura_corporal_homem (&triceps, &peitoral, &abdomen);

        printf ("O seu percentual de gordura corporal eh: %f", gordura);
    }
    else if (sexo == 2){

        printf ("Digite a medida da dobra cutanea do triceps em mm: ");
        scanf ("%f", &triceps);
        printf ("Digite a medida da dobra cutanea do peitoral em mm: ");
        scanf ("%f", &peitoral);
        printf ("Digite a medida da dobra cutanea do coxa em mm: ");
        scanf ("%f", &coxa);

        gordura = gordura_corporal_mulher (&triceps, &peitoral, &coxa);

        printf ("O seu percentual de gordura corporal eh: %f", gordura);
    }
    else {
        printf ("Erro!!! Escolha uma das opcoes");
    }
}

void ficha_treino (){
    printf("Criamos uma ficha de treino com base em seu IMC\n\n");

    // Treino A
    printf("   ||   Treino A  ||\n");
    printf("Voador Peitoral (aquecimento) = 2 series  /  15 repeticoes\n");
    printf("Supino Reto com Barra = 5 series  /  15, 12, 10, 8, 6 repeticoes\n");
    printf("Supino inclinado com halter = 4 series  /  8 a 10 repeticoes\n");
    printf("Voador Peitoral  =  4 series  /  8 a 10 repeticoes\n");
    printf("Pullover (halter, banco reto)  =  3 series  /  10 a 12 repeticoes\n");
    printf("Elevacao lateral maquina = 3 series  /  10 repeticoes\n");
    printf("Triceps frances cross = 3 series  /  10 repeticoes\n");
    printf("Triceps testa com halter (2 halteres) = 3 series  /  10 repeticoes\n");
    printf("Triceps na paralela (Gravitation) = 3 series  /  10 repeticoes\n");

    // Treino B
    printf("   ||   Treino B  ||\n");
    printf("Agachamento corporal (aquecimento) = 2 series  /  15 repeticoes\n");
    printf("Agachamento hack = 5 series  /  8 a 10 repeticoes\n");
    printf("Leg press 45 (piramide) = 4 series  /  12, 10, 8, 6 repeticoes (progresso de carga)\n");
    printf("Cadeira extensora unilateral = 4 series  /  10 repeticoes (cada lado)\n");
    printf("Afundo com halter = 3 series  /  10 repeticoes\n");
    printf("Mesa flexora = 5 series  /  10 repeticoes\n");
    printf("Cadeira flexora unilateral = 4 series  /  10 repeticoes (cada lado)\n");
    printf("Elevacao pelvica (maquina) = 4 series  /  12 a 15 repeticoes\n");
    printf("Panturrilha em pe (agacho articulado) = 4 series  /  12 repeticoes\n");

    // Treino C
    printf("   ||   Treino C  ||\n");
    printf("Desenvolvimento maquina (1 aquecimento) = 1 + 4 series  /  6 a 8 repeticoes (carga alta)\n");
    printf("Elevacao lateral no cabo (cross) = 3 series  /  10 a 12 repeticoes\n");
    printf("Elevacao lateral halter = 3 series  /  10 repeticoes + drop\n");
    printf("Elevacao frontal com barra (pronado) = 3 series  /  8 a 10 repeticoes\n");
    printf("Voador inverso = 3 series  /  10 a 12 repeticoes\n");
    printf("Encolhimento com halter = 4 series  /  12 a 15 repeticoes\n");
    printf("Abdominal supra banco declinado = 3 series  /  10 a 12 repeticoes\n");
    printf("Abdominal infra banco declinado = 3 series  /  10 a 12 repeticoes\n");
    printf("Prancha isometrica = 3 series / max repeticoes\n");

    // Treino D
    printf("   ||   Treino D  ||\n");
    printf("Pulldown com corda = 5 series  /  15, 12, 10, 8, 6 repeticoes (progresso de carga)\n");
    printf("Remada cavalinho pronada = 4 series  /  8 a 10 repeticoes\n");
    printf("Remada baixa supinada (barra) = 4 series  /  8 a 10 repeticoes\n");
    printf("Puxada alta supinada = 3 series  /  10 repeticoes\n");
    printf("Rosca scott = 4 series  /  10 repeticoes\n");
    printf("Rosca banco 45º = 3 series  /  8 a 10 repeticoes\n");
    printf("Rosca martelo com corda cross = 3 series  /  8 a 10 repeticoes\n");
    printf("Rosca punho = 4 series  /  12 a 15 repeticoes\n");
}

void dieta_nutricional (float *peso, float *altura, int *idade){

    int sexo;
    
    printf ("Calculadora da Taxa Metabolica Basal (TMB)\n\n");
    /*printf ("Informe sua altura: ");
    scanf ("%f", &altura);
    printf ("Informe o seu peso: ");
    scanf ("%f", peso);
    printf ("Informe sua idade: ");
    scanf ("%d", &idade);*/

    printf ("Informe o seu sexo:\n 1 - Homem\n 2 - Mulher\n");
    scanf ("%d", &sexo);

    if (sexo == 1){

        tmb = 88.362 + (13.397 * *peso) + (4.799 * (*altura / 100)) - (5.677 * *idade);

        printf ("TMB de acordo com o seu nivel de atividade fisica:\n");
        printf ("Sedentario (pouco ou nenhum exercicio): %f", tmb * 1.2);
        printf ("Levemente ativo (exercicio leve/sportes 1-3 dias/semana): %f", tmb * 1.375);
        printf ("Moderadamente ativo (exercicio moderado/sportes 3-5 dias/semana): %f", tmb * 1.55);
        printf ("Muito ativo (exercicio intenso/sportes 6-7 dias/semana): %f", tmb * 1.725);
        printf ("Extremamente ativo (trabalho fisico intenso ou treinamento 2x/dia): %f", tmb * 1.9);
    }
    else if (sexo == 2){

        tmb = 447.593 + (9.247 * *peso) + (3.098 * (*altura / 100)) - (4.330 * *idade);

        printf ("TMB de acordo com o seu nivel de atividade fisica:\n");
        printf ("Sedentario (pouco ou nenhum exercicio): %f", tmb * 1.2);
        printf ("Levemente ativo (exercicio leve/sportes 1-3 dias/semana): %f", tmb * 1.375);
        printf ("Moderadamente ativo (exercicio moderado/sportes 3-5 dias/semana): %f", tmb * 1.55);
        printf ("Muito ativo (exercicio intenso/sportes 6-7 dias/semana): %f", tmb * 1.725);
        printf ("Extremamente ativo (trabalho fisico intenso ou treinamento 2x/dia): %f", tmb * 1.9);
    }
}

void sobre (){

    printf ("Esse programa foi desenvolvido pelos alunos Kawann e Rodrigo, alunos do 1° periodo do Curso de Analise e desenvovimento de sistemas do Senai. O site tem como objetivo auxiliar as pessoas a terem vida mais saudavel fornecendo ferramentas que analizam os dados fornecidos e dao um resultado preciso. Atraves desses resultados sao fornecidos fichas de treino e a quantidade de Kcal que deverao ser ingeridos. Todo esse programa foi desenvolvido em 2 dias.");
}

void chama_menu (){

    int opcao;
    
    printf ("\nInforme o que voce deseja saber sobre:\n 1 - Calculo do IMC\n 2 - Percentual de gordura corporal\n 3 - Ficha de treino\n 4 - Dieta nutricional\n 5 - Sobre\n 6 - Sair\n");
    scanf ("%d", &opcao);
    system ("cls");

    switch (opcao){
    case 1:
        calculo_imc ();
        chama_menu ();
        break;
    case 2:
        gordura_corporal ();
        chama_menu ();
    case 3:
        ficha_treino ();
        chama_menu ();
        break;
    case 4:
        dieta_nutricional (&peso, &altura, &idade);
        chama_menu ();
        break;
    case 5:
        sobre ();
        chama_menu ();
        break;
    case 6:
        printf ("\nO programa esta sendo encerrado pelo o usuario!");
        break;
    default:
        printf ("Erro!!!\nDigite um numero de 1 a 6");
        chama_menu ();
        break;
    }
}

int main (){

    int conta;
    char login [50], senha [50];

    printf ("Ola, seja bem vindo\n\nVoce ja possui uma conta no site?\n1 - Sim\n2 - Nao\n");
    scanf ("%d", &conta);

    if (conta <= 0 && conta >= 3){   
        printf("Opcao invalida, informe uma opcao valida\n");
    } 
    else if (conta == 1){
        
        do {
            printf ("Informe o seu nome de usuario: ");
            getchar ();
            fgets (login, 50, stdin);
            
            printf ("Informe sua senha: ");
            getchar ();
            fgets (senha, 50, stdin);
            system ("cls");

            /*if (nr_login != login || nr_senha != senha){
                printf ("Dados incorretos\n\n");
            }*/
        } while (nr_login == login || nr_senha == senha);
            printf ("Acesso liberado!");
            
    }
    else {

        printf ("Informe o seu novo nome de usuario: ");
        fgets (nr_login, 50, stdin);
        printf ("Informe sua senha: ");
        scanf (nr_senha, 50, stdin);
        printf ("Conta criada com sucesso!\n");
    }
    
    chama_menu ();    

    return 0;
}
