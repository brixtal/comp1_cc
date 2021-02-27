#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    float nota[5000], temp;
    char nome[11];
    int qtd=0, i, j;

    while (1){
        scanf("%f", &temp);
        if(temp < 0.0)
            break;
        nota[qtd] = temp;
        qtd++;
    }

    for(i=0;i<qtd-1; i++){
        for(j=0;j<qtd-i-1;j++){
            if(nota[j] > nota[j+1]){
                temp = nota[j];
                nota[j] = nota[j+1];
                nota[j+1] = temp;
            }
        }
    }

    for(i=qtd-1; i>=0; i--){
        scanf("%s", nome);
        printf("%s: %.2f\n", nome, nota[i]);
    }

    return 0;
}