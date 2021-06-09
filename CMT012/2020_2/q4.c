#include <stdio.h>
#define QTD_CARACTERES 4096


int eh_maiuscula(char caractere){
    return caractere >= 'A' && caractere <= 'Z';
}

int eh_minuscula(char caractere){
    return caractere >= 'a' && caractere <= 'z';
}

int eh_letra(char caractere){
    if(eh_maiuscula(caractere)){
        return 1; /* verdadeiro ou true */
    } else if(eh_minuscula(caractere)){
        return 1; /* verdadeiro ou true */
    }
    
    return 0; /* false ou false */
}

char gera_cifra(char caractere, int deslocamento){
    char novo = caractere + deslocamento;    
        
    if(eh_maiuscula(caractere) && (!eh_letra(novo) || eh_minuscula(novo))){
        novo -= 26;
    } else if(eh_minuscula(caractere) && (!eh_letra(novo) || eh_maiuscula(novo))){
        novo -= 26;
    }

    return novo;
}

int main(void){

    char msg[QTD_CARACTERES+1], caractere, cript;
    int deslocamento, i;

    scanf("%d ", &deslocamento);
    fgets(msg, QTD_CARACTERES, stdin);

    for(i =0; i< QTD_CARACTERES; i++){
        caractere = msg[i];
        if(caractere == '\0' || caractere == '\n'){
            break;
        }

        if(eh_letra(caractere)){
            cript = gera_cifra(caractere, deslocamento);
            putchar(cript);
        } else{
            putchar(caractere);
        }
    }
    putchar('\n');

    return 0;
}
/*

Entrada:
9
Essa e a prova de Intro C/C++ de 2020.2

Saída:
Nbbj n j yaxej mn Rwcax L/L++ mn 2020.2

Entrada:
19
Cifra de Cesar

Saída:
Vbykt wx Vxltk

Entrada:
5
O rato roeu a roupa do rei de Roma

Saída:
T wfyt wtjz f wtzuf it wjn ij Wtrf

Entrada:
22
Nos encontramos as 22h15 hoje!

Saída:
Jko ajykjpnwiko wo 22d15 dkfa!

Entrada:
3
ABCDEFGHIJKLMNOPQRSTUVWXYZ

Saída:
DEFGHIJKLMNOPQRSTUVWXYZABC

Entrada:
3
abcdefghijklmnopqrstuvwxyz

Saída:
defghijklmnopqrstuvwxyzabc

Entrada:
22
ABCDEFGHIJKLMNOPQRSTUVWXYZ

Saída:
WXYZABCDEFGHIJKLMNOPQRSTUV

Entrada:
22
abcdefghijklmnopqrstuvwxyz

Saída:
wxyzabcdefghijklmnopqrstuv


*/
