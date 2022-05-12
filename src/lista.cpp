#include "lista.hpp"

void LVazia(Lista *l){
    l->primeiro = 0;
    l->ultimo = 0;
}

void LInserir(Lista *l, Item d){
    if(l->ultimo >= MAXTAM){
        cout << "Lista cheia!" << endl;
    }else{
        l->vetor[l->ultimo] = d;
        l->ultimo++;
    }
}

void LMaxSoma(Lista *l){
    int maxsoma = 0, somabuffer;
    int pos1, pos2;
    for(int i = l->primeiro; i < l->ultimo; i++){
        somabuffer = 0;
        for(int j = i; j < l->ultimo; j++){
        somabuffer += l->vetor[j].valor;

        if(somabuffer > maxsoma && (i != j)){
            maxsoma = somabuffer;
            pos1 = i;
            pos2 = j;
        }
        }
    }
    cout << endl;
    cout << "Maxima soma -> " << maxsoma << endl;
    cout << "Posição inicia da maxima soma -> " << pos1 << endl;
    cout << "Posição que termina a maxima soma -> " << pos2 << endl;
    cout << endl;
}

void LImprime(Lista *l){
    cout << "Números digitados -> ";
    for(int i=l->primeiro; i<l->ultimo; i++){
        cout << l->vetor[i].valor << ",";
    }
    cout << endl;
    cout << endl;
}