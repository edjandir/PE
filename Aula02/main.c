#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
//    char nome[20];
//    char curso[20];
//    int idade;
//    int formando;
//
//    setlocale(LC_ALL, "pt_BR");
//
//    printf("\nBem-vindo! Faremos agora o seu Cadastro...\nNome:");
//    fgets(nome, sizeof(nome), stdin);
//
//    printf("Curso: ");
//    fgets(curso, sizeof(curso), stdin);
//    fflush(stdin);
//
//    printf("Idade:");
//    scanf("%d", &idade);
//
//    printf("Formando? Digite 1 para 'Sim' ou 0 para 'N�o': ");
//    scanf("%d", &formando);
//
//    printf("\n\n##################################\n");
//    printf("Aluno: %s", nome);
//    printf("Curso: %s", curso);
//    printf("Idade: %d\n", idade);
//    printf("Formando: %s\n", formando ? "Sim" : "N�o");

    palavra_ao_contrario("IFSC");

    return 0;
}

// Fa�a um programa para ler 3 notas mostre a m�dias das  notas.
// Leia uma palavra do usu�rio e mostre essa mesma palavra s� que ao contr�rio.

void palavra_ao_contrario(char palavra[]) {
    const int tamanho = strlen(palavra);

    int j = 0;
    for(int i= tamanho-1; i >=0; i--) {
        printf("%c", palavra[i]);
    }
}

