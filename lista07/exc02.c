#include <stdio.h>
#include <string.h>

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

TLivro lerLivro() {
    TLivro livro;

    printf("Digite o titulo do livro: ");
    fgets(livro.titulo, 100, stdin);
    livro.titulo[strcspn(livro.titulo, "\n")] = '\0';

    printf("Digite a data de publicacao (dd mm aaaa): ");
    scanf("%d %d %d", &livro.dataPublicacao.dia, &livro.dataPublicacao.mes, &livro.dataPublicacao.ano);

    printf("Digite a quantidade de autores: ");
    scanf("%d", &livro.listaAutores.qtdAutores);

    getchar();

    for (int i=0; i < livro.listaAutores.qtdAutores; i++){
        printf("\nAutor %d\n", i+1);

        printf("Nome: ");
        fgets(livro.listaAutores.autores[i].nome, 100, stdin);
        livro.listaAutores.autores[i].nome[strcspn(livro.listaAutores.autores[i].nome, "\n")] = '\0';

        printf("Nacionalidade: ");
        fgets(livro.listaAutores.autores[i].nacionalidade, 50, stdin);
        livro.listaAutores.autores[i].nacionalidade[strcspn(livro.listaAutores.autores[i].nacionalidade, "\n")] = '\0';

        printf("Data de Nascimento: ");
        scanf("%d %d %d", &livro.listaAutores.autores[i].dataNascimento.dia, 
                          &livro.listaAutores.autores[i].dataNascimento.mes, 
                          &livro.listaAutores.autores[i].dataNascimento.ano);
        getchar();
    }

    return livro;
}

void imprimirLivro(TLivro livro){
    printf("\n===== DADOS DO LIVRO =====\n");

    printf("Titulo: %s\n", livro.titulo);

    printf("Data de publicacao: %02d/%02d/%04d\n",
           livro.dataPublicacao.dia,
           livro.dataPublicacao.mes,
           livro.dataPublicacao.ano);

    printf("Quantidade de autores: %d\n",
           livro.listaAutores.qtdAutores);

    for(int i = 0; i < livro.listaAutores.qtdAutores; i++) {
        printf("\nAutor %d\n", i + 1);

        printf("Nome: %s\n",
               livro.listaAutores.autores[i].nome);

        printf("Nacionalidade: %s\n",
               livro.listaAutores.autores[i].nacionalidade);

        printf("Data de nascimento: %02d/%02d/%04d\n",
               livro.listaAutores.autores[i].dataNascimento.dia,
               livro.listaAutores.autores[i].dataNascimento.mes,
               livro.listaAutores.autores[i].dataNascimento.ano);
    }
}

int main(){
    TLivro biblioteca[100];
    biblioteca[0] = lerLivro();
    imprimirLivro(biblioteca[0]);

    return 0;
}
