#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    char poltrona[1000][1000];
    int i, j, fileiras, colunas, x, y, qtd;
    
    scanf("%d", &fileiras);
    scanf("%d", &colunas);

    for(i=0; i< fileiras; i++){
        for(j=0; j< colunas; j++){
            poltrona[i][j] = '0';
        }
    }

    while(1){
        scanf("%d", &x);
        scanf("%d", &y);

        if(x < 0){
            break;
        }
        poltrona[x][y] = 'X';
    }

    scanf("%d", &qtd);

    if(qtd > colunas){
        printf("NOK\n");
        return 0;
    }

    /*Usando y para quardar a maior sequência de cadeiras livres e x para guardar os valores atuais*/
    y=0;
    for(i=0; i < fileiras; i++){
        x=0;
        for(j=0; j < colunas; j++){
            if(poltrona[i][j] == '0'){                
                x++;
                if(x == qtd){
                    printf("OK\n");
                    return 0;
                }
            } else {
                x=0;
                if(x > y){
                    y = x;
                }
            }
        }
    }
    
    printf("NOK\n");
    return 0;
}