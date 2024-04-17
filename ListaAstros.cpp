#include "ListaAstros.h"
#include"SistSolar.h"
#include "Lista.h"
#include "Elemento.h"

ListaAstros::ListaAstros()
{

}

ListaAstros::~ListaAstros()
{
    lAstros.~Lista();
}

void ListaAstros::incluirAstros(Astros* pAstro)
{

    if(pAstro != NULL)
    {
        lAstros.incluaInfo(pAstro);
    }

    else
    {
        cout << "ponteiro nulo" << endl;
    }

}

void ListaAstros::listAstros()
{
    Elemento<Astros>* pElemento = NULL;
    Astros* pAux = nullptr;
    pElemento = lAstros.getpPrim();

        while(pElemento != nullptr)
        {

            pAux = pElemento->getInfo();

            cout << "Astro: " << pAux->getNome() << endl;
            pAux->getInfo();

            pElemento = pElemento->pProx;
        }
}

