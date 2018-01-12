#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int  main() {
    srand((unsigned)time(NULL));
    int aleatorio = rand () % 3;
     int aleat = (rand () % 5) + 1;
     
     printf("%d", aleat);
     
     aleat = (rand() % 5) + 1;
     
     printf("%d", aleat);
     getchar();
     return 0;
}
