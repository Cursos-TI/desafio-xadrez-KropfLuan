#include <stdio.h>

int main(){

    printf("Desafio Xadrez!\n");

    int movBispo = 0;
    int movTorre = 0;
    int movRainha = 0;

    for (int movRainha = 0; movRainha < 8; movRainha++){
        printf("Esquerda (Rainha)\n");
    } //movimento da rainha para esquerda 

    do{
        movBispo++;
        printf("Cima direita (Bispo)\n");
    } while (movBispo < 5);
    //movimento do bispo para cima direita (diagonal)

    while (movTorre <5){
        printf("Cima (Torre)\n");
        movTorre++;
    } //movimento da torre para cima

    return 0;
}