#include <stdio.h>
#include <stdlib.h>
#define MAX 5

// Definição da Pilha
typedef struct
{
    int top;
    int elements[MAX]
} Pilha;

void initPilha(Pilha *p)
{
    p->top = -1;
}

// Verificando se Pilha está vazia
int isEmpty(Pilha *p)
{
    return p->top == -1;
}

// Verificando se a Pilha está cheia
int isFull(Pilha *p)
{
    return p->top == MAX - 1;
}

// Inserindo na pilha
void pushPilha(Pilha *p, int value)
{
    if (isFull(p))
    {
        printf("A pilha está cheia, não foi possivel inserir o valor %d na Pilha\n", value);
        return;
    };
    p->elements[++p->top] = value;
    printf("Inserindo o valor %d na Pilha\n", value);
}

// Removendo da pilha
int popPilha(Pilha *p)
{
    if (isEmpty(p))
    {
        printf("A pilha está vazia, não é possivel remover\n");
        return -1;
    };
    int valor = p->elements[p->top--];
    printf("Valor %d retirado da pilha\n", valor);
    return valor;
}

int peekPilha(Pilha *p)
{
    if (isEmpty(p))
    {
        printf("A pilha está vazia!\n");
        return -1;
    };
    return p->elements[p->top];
}

// Mostrando a Pilha
void showPilha(Pilha *p)
{
    for (int i = 0; i <= p->top; i++)
    {
        printf("%d ", p->elements[i]);
    }
}

int main()
{
    Pilha pilha1;
    initPilha(&pilha1);
    int c = 0;
    while (!isFull(&pilha1))
    {
        pushPilha(&pilha1, c);
        c++;
    };
    printf("O Topo da Pilha é: %d", peekPilha(&pilha1));
    // printf("Mostrando a pilha: \n");
    // showPilha(&pilha1);
    return 0;
}