#include <stdio.h>

void Mtd(int direita) {

    if (direita > 0) {
        printf ("A peça se moveu para a direita. \n");
        Mtd (direita - 1);
    } 

}

void Mtc(int cima) {

    if (cima > 0) {
        printf ("A peça se moveu para a cima. \n");
        Mtc (cima - 1);
    } 

}

void Mte(int esquerda) {

    if (esquerda > 0) {
        printf ("A peça se moveu para a esquerda. \n");
        Mte (esquerda - 1);
    } 

}




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
    printf ("5 - Sair do Menu. \n");
    printf ("_____________________\n");
    printf ("Resposta: ");
    scanf ("%d", &Menu);
    printf ("_____________________\n");

    // Já aqui é o codigo das escolhas do menu.

    switch (Menu)
    {
    case 1:

      printf ("Deseja se movimentar para a esquerda ou direita? \n");
            printf ("1 - Esquerda. \n");
            printf ("2 - Direita. \n");
            printf (" Resposta: ");
            scanf  ("%d", &Resposta);
            printf ("_________________\n");

        if ( Resposta == 1) {
            Mte(8);
  
        } 
        else if ( Resposta == 2) {
            Mtd(8);
  
        } else 
            printf ("Resposta Invalida!");
        break;
        
    case 2:

        int bispo = 5;

            printf ("Deseja se movimentar para a esquerda ou direita? \n");
            printf ("1 - Esquerda. \n");
            printf ("2 - Direita. \n");
            printf (" Resposta: ");
            scanf  ("%d", &Resposta);
            printf ("_________________\n");


        if ( Resposta == 1) {

             while ( bispo-- ) 
            {
                for (int j = 0; j < 1; j++){
                    printf ("O bispo se moveu para a cima! \n");
                }
                printf ("O bispo se moveu para esquerda! \n");
                printf ("--- \n");
            }
        
            
        } else if ( Resposta == 2){

            while ( bispo-- ) 
            {
                for (int j = 0; j < 1; j++){
                    printf ("O bispo se moveu para a cima! \n");
                }
                printf ("O bispo se moveu para direita! \n");
                printf("--- \n");
            }

        } else 
            printf ("Resposta Invalida!");
        break;
        

        break;
    case 3:

            printf ("Deseja se movimentar para os lados ou para cima? \n");
            printf ("1 - Esquerda. \n");
            printf ("2 - Direita. \n");
            printf ("3 - Cima. \n");
            printf (" Resposta: ");
            scanf  ("%d", &Resposta);
            printf ("_________________\n");


        if ( Resposta == 1) {
            Mte(5);
            
        } else if ( Resposta == 2){
            Mtd(5);

        } else if ( Resposta == 3){
            Mtc(5);

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


        if ( Resposta == 1 || Resposta == 2) {
            
            while (cavalo--) {

                for (int j = 0; j < 2; j++) {
                    printf("O cavalo se moveu para cima!\n");

            if (j == 0) continue;
                    }
            if (Resposta == 1)
                printf("O cavalo se moveu para a esquerda!\n");
            else
                printf("O cavalo se moveu para a direita!\n");

            printf("---\n");
        }
    } else 
    {
        printf("Resposta inválida!\n");
    }

    break;
case 5:

    printf ("### Menu desligado! ### \n");
    printf ("Programa encerrado. 👋\n");
return 0;

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

   }   while (repetir == 1);

 printf ("Programa encerrado. 👋\n");


return 0;

}
