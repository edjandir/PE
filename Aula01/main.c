#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

int main()
{
    //variaveis();
    //multiplos3();
    //pares20e50();
    //de100a0();
    setlocale(LC_ALL, "Portuguese_Brazil");
    entrada_dados();
}



int variaveis()
{
    unsigned char idade = 45;
    float saldo = 456.789;
    bool positivo = true;

    printf("\nIdade: %d\nSaldo: %.2f\nPositivo: %s", idade, saldo, positivo ? "True" : "False");
}

int multiplos3() {
    //múltiplos de 3 entre 1 e 100
    for(int i=3; i <= 100; i+=3) {
        printf("\n%d", i);
    }
}

int pares20e50() {
    for(int i=22; i < 50; i+=2) {
        printf("\n%d", i);
    }
}

int de100a0() {
    for(int i=100; i >= 0; i-=5) {
        printf("\n%d", i);
    }
}

int entrada_dados() {
    char nome[15];
    unsigned int idade;

    printf("Digite o seu nome: ");
    //scanf("%s", &nome);
    fgets(nome, sizeof(nome), stdin);

    //para tirar o \n do final do nome
    nome[strcspn(nome, "\n")] = '\0';

    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    printf("Olá %s, você tem %d anos de idade", nome, idade);

}

