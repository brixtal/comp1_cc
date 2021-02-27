#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    
    char data[11];
    int dia, mes, ano, idade, corrente;

    scanf("%d ", &corrente);
    scanf("%s", data);

    dia = atoi(data);

    mes = atoi(&data[3]);

    ano = atoi(&data[6]);

    if(dia < 0 || dia > 31){
        printf("-2\n");
        return 0;
    } else if((mes == 4 || mes == 6 || mes == 9 || mes == 11) && dia == 31){
        printf("-2\n");
        return 0;
    } else if(mes == 2 && dia > 28){
        printf("-2\n");
        return 0;
    }

    if(dia+mes+ano != 2000){
        printf("-1\n");
        return 0;
    }

    printf("%d\n", corrente + dia + mes - 2000);
    
    return 0;
}