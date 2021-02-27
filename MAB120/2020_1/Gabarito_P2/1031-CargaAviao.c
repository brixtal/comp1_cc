#include <stdio.h>
#include <stdlib.h>

int main(void)
{

  int *size, weight, value=0;

  size = malloc(1);

  do {
    scanf("%d", &weight);

    if (weight == 0) {
      printf("Pronto para decolar!\n");
      return 0;
    }

    value += weight;
    
    size = realloc(size, value);

    if (!size) {
      printf("Sobrepeso!\n");
      break;
    }
  } while (1);

  return 0;
}