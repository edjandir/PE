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
        printf("N�mero %d n�o existe no array.", num);
    } else {
        printf("O n�mero %d est� na posi��o %d do array.", num, pos);
    }


    divide_num(12);
    return 0;
}

//retorna a posi��o do n�mero no array ou -1 caso o n�mero n�o exista.
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

//divide um n�mero por 2 n vezes.
void divide_num(int num) {
    int vezes = 0;

    while (num > 1) {
        num = num / 2;
        vezes++;
    }

    printf("O n�mero foi dividido %d vezes.", vezes);
}
