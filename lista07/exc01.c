#include <stdio.h>

typedef struct{
    int dia;
    int mes;
    int ano;
} TData;

typedef struct{
    char nome[100];
    char nacionalidade[50];
    TData dataNascimento;
} TAutor;

typedef struct{
    TAutor autores[10];
    int qtdAutores;
} TAutores;

typedef struct{
    char titulo[100];
    TData dataPublicacao;
    TAutores listaAutores;
} TLivro;

int main() {
    TLivro biblioteca[100];

    return 0;
}
