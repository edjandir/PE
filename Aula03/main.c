#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define TAMANHO 5

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    int nums[] = {1, 4, 8, 9 , 12};
    const int num = 10;
    const int pos = busca_num(nums, num);
    if (pos == -1) {
        printf("Número %d não existe no array.", num);
    } else {
        printf("O número %d está na posição %d do array.", num, pos);
    }


    divide_num(12);
    return 0;
}

//retorna a posição do número no array ou -1 caso o número não exista.
int busca_num(int nums[], int n) {
    int pos = 0;
    while (pos < TAMANHO) {
        if (nums[pos] == n) {
            return pos;
        }
        pos++;
    }
    return -1;
}

//divide um número por 2 n vezes.
void divide_num(int num) {
    int vezes = 0;

    while (num > 1) {
        num = num / 2;
        vezes++;
    }

    printf("O número foi dividido %d vezes.", vezes);
}
