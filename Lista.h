#pragma once
#include <iostream>
using std::cout;
using std::endl;
#include "Elemento.h"

template <class TIPO>

class Lista
{
private:

    Elemento<TIPO>* pPrim;
    Elemento<TIPO>* pAtual;

public:

    Elemento<TIPO>* getpPrim();
    Elemento<TIPO>* getpAtual();

};

    template <class TIPO>
    Lista()
    {
        pPrim = nullptr;
        pAtual = nullptr;
    }

    template <class TIPO>
    ~Lista()
    {

        Elemento<Planeta>* pAux1,* pAux2;
        pAux2 = pAux1;
        while(pAux1!=NULL)
        {
            pAux2 = pAux1->pProx;
            delete pAux1;
            pAux1 = pAux2;
        }
        pPrim = nullptr;
        pAtual = nullptr;

    }

    template <class TIPO>
    bool incluaElemento(Elemento<TIPO>* pElemento)
    {
        if(pElemento !=NULL)
        {
            if(pPrim == NULL)
            {
                pPrim = pElemento;
                pAtual = pElemento;
            }
            else
            {
                pElemento->setAnt(pAtual);
                pAtual->setProx(pElemento);
                pAtual = pAtual->getProx();
            }

            return true;
        }

        else
        {
            cout << "elemento nulo" << endl;
            return false;
        }
    }

    template <class TIPO>
    bool incluaInfo(TIPO* pInfo, string nome = "")
    {
        if(pInfo != NULL)
        {
            Elemento<TIPO>* pElemento = new Elemento<TIPO>();
            pElemento->setInfo(pInfo);
            incluaElemento(pElemento);
            return true;
        }

        else
        {
            cout << "elemento nulo" << endl;
            return false;
        }
    }

    template <class TIPO>
    Elemento<TIPO>* Lista<TIPO>* :: getpPrim()
    {
        return pPrim;
    }

    template <class TIPO>
    Elemento<TIPO>* Lista<TIPO>* :: getpAtual()
    {
        return pAtual;
    }




