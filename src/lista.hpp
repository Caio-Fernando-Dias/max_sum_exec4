#ifndef LISTA_HPP
#define LISTA_HPP

#include<iostream>

#define MAXTAM 5

using namespace std;

typedef struct Item{
    int valor;
    int pos1;
    int pos2;
}Item;

typedef struct Lista{
    Item vetor[MAXTAM];
    int primeiro;
    int ultimo;
    int pos1;
    int pos2;
}Lista;

void LVazia(Lista *l);
void LInserir(Lista *l, Item d);
void LImprime(Lista *l);
void LMaxSoma(Lista *l);

#endif