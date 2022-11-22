/*
===========================
LINGUAGEM DE PROGRAMAÇÃO C
===========================
1) // -> comentário de uma linha;
2) Para que a string respeite a acentuação, devemos incluir a biblioteca <locate.h> com setlocale(LC_ALL,NULL);
3) printf("O número secreto é %d\n",num_secreto); => Imprimir dados de uma variável
    3.1) Não pode repetir o nome das variáveis.
4) scanf("%d", &num_secreto); => Leitura de dados e armazenamento na variável
5) if(){} else{}
6) Escopo de uma variável são "os lugares onde podemos usá-la".
7) for(int i=0;i<=3,i++)
8) break => parar o programa;
9) variáveis que não variam, chamam-se constantes. #define NOME_DA_VARIAVEL 50
10) if(){} else if(){}
11) continue => dentro de um loop, esse comando passa para a próxima iteração. Caso não queira isso, colocar i--
12) O comando break, else if(){} e continue devem ser usados dentro de um loop nesta linguagem.
13) Tipos de dados => Usamos double(8bytes) e float(4bytes) para representar números com casa decimal. Diferente, int(4B), short(2B) e long(8B) representam apenas números inteiros.
14) Casting => Para que a divisão seja feita entre doubles, e por consequência, teremos casas decimais no resultado. double c = (double)a / (double)b;
15) A função abs() pega o valor absoluto do número. Ou seja, em outras palavras, devolve sempre o valor positivo do número.
16) Utilizo o resto (%) para limitar o intervalo de um número randômico. 
17) time(0) => número de segundos passados desde 1970. Utilizar para alternar os números de 18*.
18) srand()* => utilizado como passador de "semente" para a função rand alterar o seu valor
==========================================================================================================================================
LINGUAGEM C AVANÇADO
================================================================================================================================================
1) arrays => char nome_da_variavel[50];
2) sprintf(), análoga a printf é a que nos ajuda a escrever palavras dentro de arrays de char.
    2.1) sprintf(nome_da_variavel, "MELANCIA"); printf("%s", nome_da_variavel);
3) strlen() => tamanho de posições od array;
4) scanf(" %c") => dei o espaço para ignorar o enter na hora da impressão

*/