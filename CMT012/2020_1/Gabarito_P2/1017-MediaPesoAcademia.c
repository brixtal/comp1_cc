#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    char pesado[128], leve[128], alto[128], baixo[128], cliente[128];
    float peso, max_peso=-1, min_peso=999, media_peso=0;
    int altura, max_altura=-1, min_altura=999, media_altura=0, qtd=0;

    while(1){
        scanf("%s", cliente);
        if(cliente[0] == 'F' && cliente[1] == 'I' && cliente[2] == 'M')
            break;
        scanf("%d", &altura);
        scanf("%f", &peso);

        media_altura += altura;
        media_peso += peso;

        if(altura > max_altura){
            max_altura = altura;
            strcpy(alto, cliente);
        }
        if(altura < min_altura){
            min_altura = altura;
            strcpy(baixo, cliente);
        }
        if(peso > max_peso){
            max_peso = peso;
            strcpy(pesado, cliente);
        }
        if(peso < min_peso){
            min_peso = peso;
            strcpy(leve, cliente);
        }
        qtd++;
    }
    
    printf("Maior Peso: %s - %.1f kg\n", pesado, max_peso);
    printf("Menor Peso: %s - %.1f kg\n", leve, min_peso);
    printf("Maior Altura: %s - %d cm\n", alto, max_altura);
    printf("Menor Altura: %s - %d cm\n", baixo, min_altura);
    printf("Media Peso: %.1f kg\n", media_peso/qtd);
    printf("Media Altura: %d cm\n", media_altura/qtd);
    printf("Num Clientes: %d\n", qtd);
    
    return 0;
}