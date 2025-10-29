#include <stdio.h>

int main() {

    int opcao = 0;  // variável

    printf ("###### Jogo de Xadrez ######\n"); // Menu para seleção de peças
    printf ("1 Torre:\n");
    printf ("2 Bispo:\n");
    printf ("3 Rainha:\n"); 
    
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
               
    default:                       // opção invalida caso alguem escolha que não conste no Menu
    printf ("opção invalida!\n");        
    break;
    }
    return 0;
}