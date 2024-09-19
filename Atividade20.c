# include <stdio.h>

void insert_sort (int vetor [], int tam){

    int i, j, proximo;

    for (i = 0; i < tam; i++){
        proximo = vetor [i];
        j = i - 1;

        while (j >= 0 && vetor[i] > proximo){
            vetor [j + 1] = vetor [j];
            j = j - 1;
        }
        vetor [j + 1] = proximo;
    }
}

int main (){

    int vetor [10] = {10,9,8,7,6,5,4,3,2,1};
    
    insert_sort (vetor, 9);

    for (int i = 0; i < 10; i++){
        printf (" | %d | ", vetor [i]);
    } 

    return 0;
}