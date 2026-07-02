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
    int qtdPaginas;
    TData dataPublicacao;
    TAutores listaAutores;
} TLivro;

TLivro lerLivro() {
    TLivro livro;

    printf("\nDigite o titulo do livro: ");
    fgets(livro.titulo, 100, stdin);
    livro.titulo[strcspn(livro.titulo, "\n")] = '\0';

    printf("Digite a quantidade de paginas: ");
    scanf("%d", &livro.qtdPaginas);

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

void imprimirLivro(TLivro biblioteca[], int qtdLivros){
    printf("\n===== DADOS DO LIVRO + 300 PAGINAS =====\n");

    for(int i =0; i < qtdLivros; i++){
        if (biblioteca[i].qtdPaginas > 300){
            printf("Titulo: %s\n", biblioteca[i].titulo);

            printf("Autores:\n");
            for (int j=0; j<biblioteca[i].listaAutores.qtdAutores; j++){
                printf("- %s\n", biblioteca[i].listaAutores.autores[j].nome);
            }
        }
    }
}

int main(){
    TLivro biblioteca[100];
    biblioteca[0] = lerLivro();
    biblioteca[1] = lerLivro();

    imprimirLivro(biblioteca, 2);

    return 0;
}
