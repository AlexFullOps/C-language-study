#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <assert.h>

struct No
{
    int info;
    struct No *proximo;
};

struct Lista
{
    struct No *inicio;
    int tamanho;
};

struct Lista *criar()
{
    struct Lista *nova_lista = (struct Lista *)malloc(sizeof(struct Lista));
    if (nova_lista != NULL)
    {
        nova_lista->inicio = NULL;
        nova_lista->tamanho = 0;
    }
    return nova_lista;
}

bool vazia(struct Lista *li)
{
    assert(li != NULL);
    if (li->inicio == NULL)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void inserir(struct Lista *li, int pos, int item)
{
    assert(li != NULL);
    assert(pos >= 0 && pos <= li->tamanho);

    struct No *novo_no = (struct No *)malloc(sizeof(struct No));
    novo_no->info = item;
    if (pos == 0)
    {
        novo_no->proximo = li->inicio;
        li->inicio = novo_no;
    }
    else
    {
        struct No *aux = li->inicio;
        for (int i = 0; i < pos - 1; i++)
        {
            aux = aux->proximo;
        }
        novo_no->proximo = aux->proximo;
        aux->proximo = novo_no;
    }
    li->tamanho++;
}

void imprimir(struct Lista *li)
{
    assert(li != NULL);
    printf("\nLista: ");
    struct No *aux = li->inicio;
    for (int i = 0; i < li->tamanho; i++)
    {
        printf("%d ", aux->info);
        aux = aux->proximo;
    }
}

int tamanho(struct Lista *li)
{
    assert(li != NULL);
    return li->tamanho;
}

int obter(struct Lista *li, int pos)
{
    assert(li != NULL);
    assert(pos >= 0 && pos < li->tamanho);
    struct No *aux = li->inicio;
    for (int i = 0; i < pos; i++)
    {
        aux = aux->proximo;
    }
    return aux->info;
}

int remover(struct Lista *li, int pos)
{
    assert(vazia(li) == false);
    assert(pos >= 0 && pos < li->tamanho);
    struct No *ant = NULL;
    struct No *aux = li->inicio;
    for (int i = 0; i < pos; i++)
    {
        ant = aux;
        aux = aux->proximo;
    }

    if (ant == NULL)
    {
        li->inicio = aux->proximo;
    }
    else
    {
        ant->proximo = aux->proximo;
    }

    int elemento = aux->info;
    li->tamanho--;
    free(aux);
    return elemento;
}

void liberar(struct Lista *li)
{
    while (vazia(li) == false)
    {
        remover(li, 0);
    }
    free(li);
}

int main()
{
    struct Lista *minha_lista = criar();
    inserir(minha_lista, 0, 5);
    inserir(minha_lista, 0, 3);
    liberar(minha_lista);
    return 0;
}
