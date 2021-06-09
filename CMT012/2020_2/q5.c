#include <stdio.h>

int main(void){

    int pontos, i, total=0;
    char area;

    for(i=0; i<3; i++){
        scanf("%d ", &pontos);
        scanf("%c", &area);
        switch (area) {
            case 'D':
                pontos*=2;
                break;
            case 'T':
                pontos*=3;
                break;
            case 'O':
                pontos=25;
                break;
            case 'B':
                pontos=50;
                break;    
        }
        total+=pontos;        
    }    

    printf("%d\n", total);
    return 0;
}

/*

Entrada:
5
D
0
X
20
T

Saída
70

Entrada:
10
S
10
D
10
T

Saída:
60

Entrada:
5
T
0
B
0
O

Saída:
90

Entrada:
0
X
0
X
0
X

Saída:
0




*/