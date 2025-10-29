#include <stdio.h>

int main() {

    int Menu, Resposta, I = 0, valor;
    int repetir = 1; // Controle para retornar ao menu.

    // Nessa área é onde é feito o menu, para escolher qual das opções você quer escolher.

    do {

    printf ("###| Menu de Escolhas |###\n");
    printf ("Escolha uma das opções a baixo:\n");
    printf ("1 - Rainha. \n");
    printf ("2 - Bispo. \n");
    printf ("3 - Torre. \n");
    printf ("4 - Cavalo. \n");
    printf ("_____________________\n");
    printf ("Resposta: ");
    scanf ("%d", &Menu);
    printf ("_____________________\n");

    // Já aqui é o codigo das escolhas do menu.

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
    case 4:

    int cavalo = 1;

     printf ("Deseja se movimentar para a esquerda ou direta? \n");
            printf ("1 - Esquerda. \n");
            printf ("2 - Direita. \n");
            printf (" Resposta: ");
            scanf  ("%d", &Resposta);
            printf ("_________________\n");


        if ( Resposta == 1) {
            while ( cavalo-- ) 
            {
                for (int j = 0; j < 2; j++){
                    printf ("O cavalo se moveu para a esquerda! \n");
                }
                printf ("O Cavalo se moveu para cima!");
            }
        } else if ( Resposta == 2){
            while ( cavalo-- ) 
            {
                for (int j = 0; j < 2; j++){
                    printf ("O cavalo se moveu para a direita! \n");
                }
                printf ("O Cavalo se moveu para cima!");
            }
        } else 
            printf ("Resposta Invalida!");
        break;


    default:
            printf ("Opção Invalida 😔 \n");
        break;
    }

// Pergunta se deseja voltar ao menu
        printf ("\n ###| Deseja voltar ao menu? |### \n");
        printf ("1 - Sim. \n");
        printf ("2 - Não. \n");
        printf ("Resposta: ");
        scanf ("%d", &repetir);
        printf ("_____________________\n");

 } while (repetir == 1);

 printf ("Programa encerrado. 👋\n");


return 0;

}
