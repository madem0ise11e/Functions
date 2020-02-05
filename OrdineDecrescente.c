#include <stdio.h>

int main() {
      double a, b, c;
      printf("Introduci il primo valore: ");
      scanf("%lf", &a);
      printf("Introduci il secondo valore: ");
      scanf("%lf", &b);
      printf("Introduci il terzo valore: ");
      scanf("%lf", &c);
      if (a > b && a > c) /* verifica se a e' > di entrambi */
      if (b > c)
      printf("%f %f %f\n", a, b, c);
      else
      printf("%f %f %f\n", a, c, b);
      else if (b > c)     /* a non e' il piu' grande, o e' b o e' c */
      if (a > c)
      printf("%f %f %f\n", b, a, c);
      else
      printf("%f %f %f\n", b, c, a);
      else                /* non puo' che essere c */
      if (a > b)
      printf("%f %f %f\n", c, a, b);
      else
      printf("%f %f %f\n", c, b, a);
 
   return 0; }
