#include <stdio.h>
 
  void moverTorre( int casas) {   // funções recursivas para simular o movimento Torre,
  if (casas >0) {
  printf ("Direito\n");
  moverTorre(casas - 1);
  }
} 
  void moverBispo( int casas) {  // funções recursivas para simular o movimento Torre,
  if (casas >0) {
  printf ("Cima,Esqueda\n");
  moverBispo(casas - 1);
  }
}
  void moverRainha( int casas) { // funções recursivas para simular o movimento Torre,
  if (casas >0) {
  printf ("Esqueda\n");
  moverRainha(casas - 1);
  }
}
void moverCavalo(int movimentos) {  // oops aninhados com múltiplas variáveis

for (int cima = 0; cima < 2; cima++) {   // duas casas para cima
   printf("  Cima\n", cima + 1);
}
for (int direita = 0; direita < 1; direita++) {   // uma casa para direita
   printf("  Direita\n", direita + 1);
}
 }
  int main () {
  
  int opcao = 0;

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
  case 1:
  moverTorre(5);
    break;
  case 2:
  moverBispo(5);
    break;
  case 3:
  moverRainha(8);
    break;
  case 4:
  moverCavalo(1);
    break;

  default:
    break;
  }

  return 0;
}