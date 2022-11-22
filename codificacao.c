#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <string.h>

int main ()
{
    /* Bloco que configura o idioma e plota o cabeçalho
    setlocale(LC_ALL,"Portuguese_brasil"); // Rodar no terminal o seguinte código -> chcp 65001
    printf("==============================================\n");
    printf("Olá! Bem-vindo ao jogo de adivinhação da Alura.\n");
    printf("==============================================\n");

    int tentativas = 5;
    for(int i=1; i<=tentativas;i++){
        printf("Tentativa %d / %d\n",i,tentativas);
        int num_secreto = 90;
        int chute;
        printf("Digite o chute: ");
        scanf("%d", &chute);

        //Estrutura de condições 
        int acertou = chute == num_secreto;
        int maior = chute > num_secreto;
        int menor = chute < num_secreto;

        if (acertou)
        {
            printf("Parabéns! Você acertou.\n");
            break;
        }
        else if(maior){
                printf("O número escolhido é maior que o número secreto\n");
            }
            else{
                printf("O número escolhido é menor que o número secreto\n");
            }   
        }*/
/*
    printf("===============================================\n");
    printf("Olá! Bem-vindo ao jogo de adivinhação da Alura.\n");
    printf("===============================================\n");

    int tentativas = 1;
    while(1)
    {
        printf("Tentativa %d\n",tentativas);
        int num_secreto = 90;
        int chute;
        printf("Digite o chute: ");
        scanf("%d", &chute);

        //Estrutura de condições 
        int acertou = chute == num_secreto;
        int maior = chute > num_secreto;
        int menor = chute < num_secreto;

        if (acertou)
        {
            printf("Parabéns! Você acertou.\n");
            break;
        }
        else if(maior){
                printf("O número escolhido é maior que o número secreto\n");
            }
            else{
                printf("O número escolhido é menor que o número secreto\n");
            }   
        tentativas++;
    }       
    printf("Você tentou %d vezes até acertar o número",tentativas);
=====================================================================================================================*/
/*
    printf("===============================================\n");
    printf("Olá! Bem-vindo ao jogo de adivinhação da Alura.\n");
    printf("===============================================\n");

    int segundos = time(0);
    srand(segundos);

    int random = rand();
    int num_secreto = random % 100;
    int chute;
    int tentativas = 1;

    double pontos  = 1000;

    while(1)
    {
        printf("Tentativa %d\n",tentativas);
        printf("Digite o chute: ");
        scanf("%d", &chute);

        //Estrutura de condições 
        int acertou = chute == num_secreto;
        int maior = chute > num_secreto;
        int menor = chute < num_secreto;

        if (acertou)
        {
            printf("Parabéns! Você acertou.\n");
            break;
        }
        else if(maior){
                printf("O número escolhido é maior que o número secreto\n");
            }
            else{
                printf("O número escolhido é menor que o número secreto\n");
            }   
        tentativas++;

        double pontosperdidos = abs(chute-num_secreto) / 2.0;
        pontos = pontos - pontosperdidos;
    }       
    printf("Você tentou %d vezes até acertar o número\n",tentativas);
    printf("Total de pontos: %.2f\n",pontos);
    */
//============================================================================================
//CURSO DA LINGUAGEM C AVANÇADO 
//============================================================================================
// JOGO DA FORCA

    char palavrasecreta[20];
    sprintf(palavrasecreta, "MELANCIA");

    int acertou = 0;
    int enforcou = 0;

    char chutes[26];
    int tentativas = 0;

    do {

        for(int i = 0; i < strlen(palavrasecreta); i++) {
            int achou = 0;

            for(int j = 0; j < tentativas; j++) {
                if(chutes[j] == palavrasecreta[i]) {
                    achou = 1;
                    break;
                }
            }

            if(achou) {
                printf("%c ", palavrasecreta[i]);
            } else {
                printf("_ ");
            }
        }
        printf("\n");

        char chute;
        printf("Qual letra? ");
        scanf(" %c", &chute);

        chutes[tentativas] = chute;
        tentativas++;


    } while (!acertou && !enforcou);

}