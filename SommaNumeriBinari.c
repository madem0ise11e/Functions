#include<stdio.h>
#include<stdlib.h>

int main(void) {
  int N;
  int bit_numero1;
  int bit_numero2;
  int bit_risultato;
  int riporto;
  int num_bits;

  printf("Inserisci il numero di bit: ");
  scanf("%d", &N);

  riporto = 0;

  printf("\nInserisci i due numeri binari partendo dal bit meno significativo: ");

  num_bits = 0;

  while(num_bits < N){
    printf("\n");
    printf("Inserisci la cifra %d di peso 2^%d del primo numero: ", num_bits+1, num_bits);
    scanf("%d", &bit_numero1);

    printf("Inserisci la cifra %d di peso 2^%d del secondo numero: ", num_bits+1, num_bits);
    scanf("%d", &bit_numero2);

    bit_risultato = bit_numero1 + bit_numero2 + riporto;
    if (bit_risultato >=2 ){
      bit_risultato = bit_risultato - 2;
      riporto = 1;
    } else
      riporto = 0;
    printf("Il risultato per la cifra %d di peso %d e' %d e il riporto e' %d\n", num_bits+1, num_bits, bit_risultato, riporto);
    num_bits = num_bits+1;
  }
  printf("\n");
  if(riporto==1)
    printf("La somma ha generato overflow\n");
  else
    printf("La somma non ha generato overflow\n");
  exit(0);
}
