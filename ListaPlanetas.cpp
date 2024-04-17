#include "ListaPlanetas.h"

#include"SistSolar.h"
#include "Lista.h"
#include "Elemento.h"

ListaPlanetas::ListaPlanetas()
{

}

ListaPlanetas::~ListaPlanetas()
{
    lPlanetas.~Lista();
}

void ListaPlanetas::incluirPlaneta(Planeta* pPlaneta)
{

    if(pPlaneta != NULL)
    {
        lPlanetas.incluaInfo(pPlaneta);
    }

    else
    {
        cout << "ponteiro nulo" << endl;
    }

}

void ListaPlanetas::listPlanetas()
{
    Elemento<Planeta>* pElemento = NULL;
    Planeta* pAux = nullptr;
    pElemento = lPlanetas.getpPrim();

        while(pElemento != nullptr)
        {

            pAux = pElemento->getInfo();

            cout << "Planeta: " << pAux->getNome() << endl;

            pElemento = pElemento->pProx;
        }
}

