#include <stdio.h>

#define BOMBA 'X'

int main(void){

    char tabuleiro[10][10];
    int i, j, mina, linha, coluna, qtd_minas=0;

    /*Inicializo o tabuleiro vazio*/
    for(i=0; i<10; i++){
        for(j=0; j<10; j++){
            tabuleiro[i][j] = '0';
        }
    }

    /*Leio a posição das minas*/
    for(i=0; i< 10; i++){
        scanf("%d", &mina);
        linha = mina/10;
        coluna = mina%10; 
        tabuleiro[linha][coluna] = BOMBA;
    }

    /* Leio a posição que desejo saber. Estou reaproveitando a variável mina. */
    scanf("%d", &mina);
    linha = mina/10;
    coluna = mina%10;
    
    if(tabuleiro[linha][coluna] == BOMBA){
        printf("Bomba!\n");
        return 0; /* Não tenho mais o que fazer no programa, então eu retorno*/
    }

    /* Só continuo aqui se não tiver escolhido uma bomba, já que o if acima tem um return */

    /*Verifico o canto superior esquerdo, se existir */
    if(linha-1 >=0 && coluna-1 >=0 && tabuleiro[linha-1][coluna-1] == BOMBA){
        qtd_minas++;
    }
    /*Verifico a casa acima da selecionada, se existir */
    if(linha-1 > 0 && tabuleiro[linha-1][coluna] == BOMBA){
        qtd_minas++;
    }
    /*Verifico o canto superior direito, se existir*/
    if(linha-1 >=0 && coluna+1 <=9 && tabuleiro[linha-1][coluna+1] == BOMBA){
        qtd_minas++;
    }
    /*Verifico a casa à esquerda, se existir*/
    if(coluna-1 >=0 && tabuleiro[linha][coluna-1] == BOMBA){
        qtd_minas++;
    }
    /*Verifico a casa à direita, se existir*/
    if(coluna+1 <=9 && tabuleiro[linha][coluna+1] == BOMBA){
        qtd_minas++;
    }
    /*Verifico a casa inferior esquerda, se existir*/
    if(linha+1 <=9 && coluna-1 >=0 && tabuleiro[linha+1][coluna-1] == BOMBA){
        qtd_minas++;
    }
    /*Verifico a casa abaixo, se existir*/
    if(linha+1 <=9 && tabuleiro[linha+1][coluna] == BOMBA){
        qtd_minas++;
    }
    /*Verifico a casa inferior direita, se existir*/
    if(linha+1 <=9 && coluna+1 <=9 && tabuleiro[linha+1][coluna+1] == BOMBA){
        qtd_minas++;
    }

    printf("%d\n", qtd_minas);

    return 0;
}