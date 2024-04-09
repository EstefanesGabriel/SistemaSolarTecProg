#include"SistSolar.h"
#include "ListaPlanetas.h"
#include "Lista.h"


ListaPlanetas::ListaPlanetas()
{

}

ListaPlanetas::~ListaPlanetas()
{
    lPlanetas.~Lista();
}

void ListaPlanetas::incluirPlaneta(Planeta* pPlaneta)
{

    if(pPlaneta == nullptr)
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
    Elemento<Planeta>* pElemento = lPlanetas;
    Planeta* pAux = nullptr;

    if(pElemento == nullptr)
    {
        cout << "Nenhum planeta existente" << endl;
        exit(1);
    }

    else
    {


        while(pElemento != nullptr)
        {

            pAux = pElemento->getInfo();

            cout << "Planeta: " << pAux->getNome() << endl;

            pElemento = pElemento->pProx;
        }
    }
}


Elemento<Planeta>* ListaPlanetas::getPlanetaPrim()
{
    return pPrim;
}

Elemento<Planeta>* ListaPlanetas::getPlanetaAtual()
{
    return pAtual;
}
