#include <stdio.h>

int main() {

    int Menu, Resposta, I = 0, valor;


    printf ("###| Menu de Escolhas |###\n");
    printf ("Escolha uma das opções a baixo:\n");
    printf ("1 - Rainha. \n");
    printf ("2 - Bispo. \n");
    printf ("3 - Torre. \n");
    printf ("_____________________\n");
    printf ("Resposta: ");
    scanf ("%d", &Menu);
    printf ("_____________________\n");

    switch (Menu)
    {
    case 1:
        for (int i = 0; i < 8; i++) {
            printf ("A Rainha se moveu para a esquerda!\n");
        }

        break;
    case 2:
        while (I <= 5){

            printf ("O bispo se move para a cima, e logo em seguida para a direita! \n");
        
        I++;
        }
        break;
    case 3:

            printf ("Deseja se movimentar para o lado ou para cima? \n");
            printf ("1 - Lado. \n");
            printf ("2 - Cima. \n");
            printf (" Resposta: ");
            scanf  ("%d", &Resposta);
            printf ("_________________\n");


        if ( Resposta == 1) {
            for (int O = 0; O < 5; O++){
                printf (" A torre se moveu para os lados! \n");
            }
        } else if ( Resposta == 2){
            for (int O = 0; O < 5; O++) {
                printf ("A torre se moveu para cima! \n");
            }
        } else 
            printf ("Resposta Invalida!");
        break;
    default:
            printf ("Opção Invalida 😔 \n");
        break;




    }


return 0;

}
