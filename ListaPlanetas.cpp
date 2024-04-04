#include"SistSolar.h"


ListaPlanetas::ListaPlanetas()
{
    pElPlanetaPrim = nullptr;

    pElPlanetaAtual = nullptr;
}

ListaPlanetas::~ListaPlanetas()
{
    pElPlanetaPrim = nullptr;

    pElPlanetaAtual = nullptr;
}

void ListaPlanetas::incluirPlaneta(Planeta* pPlaneta)
{
    ElementoPlaneta* elementoAux;

    elementoAux = new ElementoPlaneta();

    elementoAux->setPlaneta(pPlaneta);

    if(pElPlanetaPrim == nullptr)
    {
        pElPlanetaPrim = elementoAux;
        pElPlanetaAtual = elementoAux;
    }

    else
    {
        pElPlanetaAtual->pProx = elementoAux;
        elementoAux->pAnt = pElPlanetaAtual;
        pElPlanetaAtual = elementoAux;
    }

}

void ListaPlanetas::listPlanetas()
{
    ElementoPlaneta* elementoAux;

    elementoAux = pElPlanetaPrim;

    if(elementoAux == nullptr)
    {
        cout << "Nenhum planeta existente" << endl;
        exit(1);
    }

    else
    {
        while(elementoAux != nullptr)
        {
            cout << "Planeta: " << elementoAux->getNome() << endl;

            elementoAux = elementoAux->pProx;
        }
    }
}

/*Planeta* ListaPlanetas::localizar(char* n)
{

}*/

ElementoPlaneta* ListaPlanetas::getPlanetaPrim()
{
    return pElPlanetaPrim;
}

ElementoPlaneta* ListaPlanetas::getPlanetaAtual()
{
    return pElPlanetaAtual;
}
