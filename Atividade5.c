# include <stdio.h>

int main (){

    int c, cart, numero_Multas, mCart, total_num_Multas;
    float valor, total, totalGeral;

    mCart = 0;
    total_num_Multas = 0;
    totalGeral = 0.0;

    printf ("Digite a carteira de motoristaou 0 para terminar: ");
    scanf ("%d", &cart);

    if (cart < 4328){
        while (cart != 0 && cart < 4328){
            
            total = 0.0;

            printf ("Digite o numero de multas: ");
            scanf ("%d", &numero_Multas);

            for (c = 1; c < numero_Multas; c++){
                printf ("Digite o valor da ", c, "º multa: ");
                scanf ("%f", &valor);

                total = totalvalor
            }

            if (numero_Multas > mnMult){
                mnMult = numero_Multas;
                mCart = cart
            }
            printf ("\n")
        }
    }
    

    return 0;
}