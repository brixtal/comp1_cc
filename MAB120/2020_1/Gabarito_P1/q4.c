#include <stdio.h>

int main(void) {
    
    char nome[1024][129];
    int i, j, contador=0, pos[1024], temp;
    float nota[1024];

    while(1){
        scanf("%s", nome[contador]);
        scanf("%f", &nota[contador]);

        if(nota[contador] < 0){
            break;
        }
        pos[contador] = contador;
        contador++;
    };

    for(i=0; i < contador-1; i++){
        for(j=0; j < contador-1-i;j++){
            printf("%f %f\n", nota[j], nota[j+1]);
            if(nota[pos[j]] > nota[pos[j+1]]){
                temp = pos[j];
                pos[j] = pos[j+1];
                pos[j+1] = temp;
            }
        }
    }

    for(i=0; i < contador; i++){
        printf("%s - %f\n", nome[pos[i]], nota[pos[i]]);
    }

    return 0;
}