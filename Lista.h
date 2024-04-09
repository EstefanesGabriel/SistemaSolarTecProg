#pragma once
#include <iostream>
#include "Elemento.h"

template <class TIPO>
class Lista {
private:
    Elemento<TIPO>* pPrim;
    Elemento<TIPO>* pAtual;

public:
    Lista();
    ~Lista();
    bool incluaElemento(Elemento<TIPO>* pElemento);
    bool incluaInfo(TIPO* pInfo, string nome = ""); // Added string parameter
    Elemento<TIPO>* getpPrim();
    Elemento<TIPO>* getpAtual();
};

template <class TIPO>
Lista<TIPO>::Lista() {
    pPrim = nullptr;
    pAtual = nullptr;
}

template <class TIPO>
Lista<TIPO>::~Lista() {
    Elemento<TIPO>* pAux1 = pPrim, *pAux2;
    while (pAux1 != nullptr) {
        pAux2 = pAux1->getProx();
        delete pAux1;
        pAux1 = pAux2;
    }
    pPrim = nullptr;
    pAtual = nullptr;
}

template <class TIPO>
bool Lista<TIPO>::incluaElemento(Elemento<TIPO>* pElemento) {
    if (pElemento != nullptr) {
        if (pPrim == nullptr) {
            pPrim = pElemento;
            pAtual = pElemento;
        }
        else {
            pElemento->setAnt(pAtual);
            pAtual->setProx(pElemento);
            pAtual = pAtual->getProx();
        }
        return true;
    }
    else {
        cout << "Elemento nulo" << endl;
        return false;
    }
}

template <class TIPO>
bool Lista<TIPO>::incluaInfo(TIPO* pInfo, string nome) { // Added string parameter
    if (pInfo != nullptr) {
        Elemento<TIPO>* pElemento = new Elemento<TIPO>();
        pElemento->setInfo(pInfo);
        incluaElemento(pElemento);
        return true;
    }
    else {
        cout << "Elemento nulo" << endl;
        return false;
    }
}

template <class TIPO>
Elemento<TIPO>* Lista<TIPO>::getpPrim() {
    return pPrim;
}

template <class TIPO>
Elemento<TIPO>* Lista<TIPO>::getpAtual() {
    return pAtual;
}
