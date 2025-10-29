#include <stdio.h>

int main() {

    int opcao = 0;  // variável

    printf ("###### Jogo de Xadrez ######\n"); // Menu para seleção de peças
    printf ("1 Torre:\n");
    printf ("2 Bispo:\n");
    printf ("3 Rainha:\n"); 
    printf ("4 Cavalo:\n");

    printf ("Digite a opção: ");  //  solicitação ao usuario1
   
    scanf ("%d", &opcao);         // digitando a opção
    printf("\n");

   
    switch (opcao) 
    {
        case 1:                    // opção 1 movimentando a torre
    printf("Movendo a Torre\n");
    for (int Torre = 1; Torre <= 2; Torre++) {
        printf("Baixo\n");
    }
    printf("Esquerda\n");
    break;
    case 2:                       // opção 2 movimentando o bispo
            
    printf ("Movendo o Bispo\n"); 
    int Bispo = 1;
    do {
    printf ("Cima, Esqueda\n");
    Bispo++;
    } while (Bispo <= 5);
    break;
    case 3:                    // opção 3 movimentando o Rainha
           
    printf ("Movendo a Rainha\n"); 
    int Rainha = 1;
    while (Rainha <= 8) {
    printf ("Esqueda\n");
    Rainha++;
    }
    break;
   case 4:                    // opção 4 movimentando o Cavalo
    printf("Movendo o Cavalo\n");

    int baixo = 2;
    int esquerda = 1;

    for (int i = 1; i <= baixo; i++) {
        printf("Baixo\n");

        if (i == baixo) {
            int j = 1;
            while (j <= esquerda) {
                printf("Esquerda\n");
                j++;
            }
        }
    }
    break;

           
    default:                       // opção invalida caso alguem escolha que não conste no Menu
    printf ("opção invalida!\n");        
    break;
    }
    return 0;
}