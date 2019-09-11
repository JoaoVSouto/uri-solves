#include <stdio.h>
#include <stdlib.h>

//É interessante perceber que *x1 = v1 e *x2 = v2, tudo bem eles eram ponteiros
//Da mesma forma n1 = tam_ n1  e n2 = tam_v2, tudo bem eles eram inteiros
//Mas *qtd = &tam_v3 , ou seja aconteceu um desrreferenciamento (eu acho)
// qtd agora está armazenando o endereço do tam_v3
//Significa que *qtd aponta para tam_v3, qualquer mudança em *qtd altera também tam_v3

int *uniao(int *x1, int *x2, int n1, int n2, int *qtd) {
    //declara o ponteiro inteiro *x3 ( que posteriormente vai vir a ser o "vetor" v3) e o inteiro i=0
    int *x3, i = 0;
    //Alocação dinâmica -> Solicita ao sistema operacional um pedaço da memória de tamanho preferível ao usuário para ele alocar
    //Essa função retorna um ponteiro, que aponta para o primeiro endereço desse espaço solicitado
    // observe que o tamanho alocado em v3 é igual a soma (obviamente) dos "vetores" v1 e v2
    x3 = calloc(n1 + n2, sizeof(int));
    //Aproveita e diz pra o tam_v3 usando o ponteiro *qtd que o seu tamanho é de n1 + n2
    *qtd = n1 + n2;
    // Colocamos que enquanto i for menor que o tamanho do vetor 3 (obviamente) ele faça o que se segue
    while (i < *qtd) {
        //se o tamanho de n1 for menor que n1 (o que não vai ser inicialmente) ele vai escrever no "vetor" de v3
        // o vetor de v2, pecorrendo ele completamente usando a aritimética de ponteiros
        // além disso vai printar o processo

        // no Se Não vai fazer o mesmo mas com o vetor 1
        if (i >= n1) {  //chegamos ao fim do primeiro vetor
            *x3 = *x2;
            x2++;
            printf("x3[%d] = %d\n", i, *x3);
        } else {
            *x3 = *x1;
            printf("x3[%d] = %d\n", i, *x3);
            x1++;
        }
        //para não sobrescrever os valores -> Aritimética de ponteiros :)
        x3++;
        i++;
    }
    //Irá retornar o "Vetor 3" apontado para o seu primeiro endereço, pois voltou tudo com o -i
    return x3 - i;
}

int main() {
    int i;
    int *v1, *v2, tam_v1, tam_v2, *v3, tam_v3;
    //Pergunta o tamanho dos "vetores"
    scanf("%d", &tam_v1);
    scanf("%d", &tam_v2);

    //Alocação dinâmica -> Solicita ao sistema operacional um pedaço da memória de tamanho preferível ao usuário para ele alocar
    //Essa função retorna um ponteiro, que aponta para o primeiro endereço desse espaço solicitado
    v1 = calloc(tam_v1, sizeof(int));
    v2 = calloc(tam_v2, sizeof(int));

    //Vai pecorrer a memoria preenchendo-a com valores digitados pelos usuários

    for (i = 0; i < tam_v1; i++)
        scanf("%d", &v1[i]);
    for (i = 0; i < tam_v2; i++)
        scanf("%d", &v2[i]);

    // Vai chamar a função "união" e armazenar em  v3
    // Vai passar os "vetores" v1 e v2 (são ponteiros inteiros), vai passar o tamanho de v1 e v2 (são inteiros)
    // Vai passar o endereço de memória do tamanho de v3.
    // Isso significa que a função união vai poder utilizar o tam_v3 em seu escopo sem ele está declarado lá
    // Significa também que o tam_v3 quando alterado na função união também irá ser alterado na função main

    v3 = uniao(v1, v2, tam_v1, tam_v2, &tam_v3);

    // Vai imprimir no console os valores armazenados em v3, observe a aritimética de ponteiros
    // Mesma coisa de v3[i] no lugar do *v3, retirando o v3++

    for (i = 0; i < tam_v3; i++) {
        printf("%d ", *v3);
        v3++;
    }
    printf("\n");
    //limpando todos os vetores usados
    free(v1);
    free(v2);
    free(v3);
    return 0;
}