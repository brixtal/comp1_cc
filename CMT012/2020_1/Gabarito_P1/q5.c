#include <stdio.h>

int main()
{

    char source[20];
    char dest[40];
    int i, j, n;

    printf("Entre com a string origem\n");
    scanf("%s", source);
    printf("Entre com a string destino\n");
    scanf("%s", dest);
    printf("Entre com o número de caractere que serão concatenados \n");
    scanf("%d", &n);

    // identifica o fim da string dest
    j = 0;
    while (dest[j] != '\0')
        j++;

    // Acrescenta a string source no final de dest
    i = 0;
    while (source[i] != '\0' && i < n)
    {
        dest[j] = source[i];
        i++;
        j++;
    }

    // inclui o terminador null
    dest[j] = '\0';

    // imprime dest
    printf("%s\n", dest);

    return 0;
}
