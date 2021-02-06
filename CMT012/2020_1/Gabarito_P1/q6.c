#include <stdio.h>

int main()
{

   char source[20];
   char dest[40];
   int i, n, ret;

   printf("Entre com a string origem\n");
   scanf("%s", source);
   printf("Entre com a string destino\n");
   scanf("%s", dest);
   printf("Entre com o número de caractere que serão comparados\n");
   scanf("%d", &n);

   i = 0;
   while (i < n)
   {
      if (source[i] != dest[i])
         break;
      i++;
   }
   ret = source[i] - dest[i];

   if (ret < 0)
      printf("%d\n", ret);
   else if (ret > 0)
      printf("%d\n", ret);
   else
      printf("0\n");

   return 0;
}
