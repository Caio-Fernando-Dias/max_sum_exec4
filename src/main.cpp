#include "lista.hpp"

int main(){

    setlocale(LC_ALL,"Portuguese");

    Lista l;
    Item aux;
    int num;

    LVazia(&l);

    for(int i = 0; i < MAXTAM; i++){
        cout << "Digite os números que serão colocados na lista -> "; 
        cin >> num;
        aux.valor = num;
        LInserir(&l, aux);
    }

    LMaxSoma(&l);
    
    LImprime(&l);

}