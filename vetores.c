#include <stdio.h>
#include <stdlib.h>

void main()
{

  int vetor[3], cont;

  vetor[0] = 5;
  vetor[1] = 10;
  vetor[2] = 15;

  for (cont = 0; cont < 3; cont++  )
  {
    printf("\nPosicao %d:%d",cont, vetor[2]);
  }

  getchar();
}
