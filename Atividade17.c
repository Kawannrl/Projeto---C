#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct st_aluno{
    char nome[100], telefone[100], endereco[100], email[100];
    int n;
};

struct st_agenda{
    struct st_aluno alunos;
}agenda[100];

void inserir(int* n){

    printf("Digite quantas pessoas pretende inserir: ");
    scanf("%d", &*n);
    getchar();

 for (int i = 0; i < *n; i++){
        printf("Digite o nome do %d aluno: ", i+1);
        fgets(agenda[i].alunos.nome, 100, stdin);
        printf("Digite o Telefone: ");
        fgets(agenda[i].alunos.telefone, 100 ,stdin);
        printf("Digite o email: ");
        fgets(agenda[i].alunos.email, 100, stdin);
        printf("Digite o endereco: ");
        fgets(agenda[i].alunos.endereco, 100, stdin);
        system("cls");
    }
}

void listar_contatos(int *n){
    

    //printf("Digite quantas opcoes gostaria de listar: ");
    //scanf("%d", &*n);

    for (int i = 0; i < *n; i++){
        printf("Nome: %sTelefone: %sE-mail: %sEndereco: %s\n", agenda[i].alunos.nome, agenda[i].alunos.telefone, agenda[i].alunos.email, agenda[i].alunos.endereco);
    }
}

void buscar(int *n){

    int pessoa;

    printf("Tem um total de %d casos", *n);
    printf("\nDigite qual pessoa voce gostaria de avaliar: ");
    scanf("%d", &pessoa);

    for (int i = 0; i < *n; i++){
        if (pessoa == i+1){
            printf("Nome: %sTelefone: %sE-mail: %sEndereco: %s\n", agenda[i].alunos.nome, agenda[i].alunos.telefone, agenda[i].alunos.email, agenda[i].alunos.endereco);
        }
        else{
            printf("Contato nao encontrado");
        }
    }
}

void excluir (int *n){
       int pessoa, resp;
       

    printf("Tem um total de %d casos", *n);
    printf("\nDigite qual pessoa voce gostaria de excluir: ");
    scanf("%d", &pessoa);

    for (int i = 0; i < *n; i++){
        if (pessoa == i+1){
            printf("Nome: %sTelefone: %sE-mail: %sEndereco: %s\n", agenda[i].alunos.nome, agenda[i].alunos.telefone, agenda[i].alunos.email, agenda[i].alunos.endereco);
            printf("Deseja mesmo excluir?\n1- Sim/2- Nao");
            scanf("%d", &resp);
            if (resp == 1){
               for (int i = 0) 
            }
            
        }
        else{
            printf("Contato nao encontrado");
        }
    }
}

int main (){

    int n;

    int opcao;
    
    do{
        printf("Digite qual opcao desejada: ");
        printf("\n1 - Inserir\n2 - Excluir\n3 - Buscar\n4 - Listar contatos\n5 - Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);
        getchar();
        system("cls");

        switch (opcao){
        case 1:
            inserir(&n);
            break;
        case 2:
            excluir(&n);
            break;
        case 3:
            buscar(&n);
            break;
        case 4:
            listar_contatos(&n);
            break;
        case 5:
            break;
        }
    }while (opcao != 5) ;

    return 0;
}
