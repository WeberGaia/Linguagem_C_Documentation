#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main ()
{
    // Bloco que configura o idioma e plota o cabeçalho
    setlocale(LC_ALL,"Portuguese_brasil"); // Rodar no terminal o seguinte código -> chcp 65001
    printf("=====================================================\n");
    printf("Olá Weber! Bem-vindo ao jogo de adivinhação da Alura.\n");
    printf("=====================================================\n");

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
        }       
}