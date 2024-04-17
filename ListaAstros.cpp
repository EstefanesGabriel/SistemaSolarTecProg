#include "ListaPlanetas.h"
#include"SistSolar.h"
#include "Lista.h"
#include "Elemento.h"

ListaAstros::ListaAstros()
{

}

ListaAstros::~ListaAstros()
{
    lPlanetas.~Lista();
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
    Elemento<Astro>* pElemento = NULL;
    Astros* pAux = nullptr;
    pElemento = lAstros.getpPrim();

        while(pElemento != nullptr)
        {

            pAux = pElemento->getInfo();

            cout << "Planeta: " << pAux->getNome() << endl;

            pElemento = pElemento->pProx;
        }
}

