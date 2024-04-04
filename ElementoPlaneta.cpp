#include"ElementoPlaneta.h"
class Planeta;

ElementoPlaneta::ElementoPlaneta()
{
    pProx = nullptr;
    pAnt = nullptr;
}

ElementoPlaneta::~ElementoPlaneta()
{
    pProx = nullptr;
    pAnt = nullptr;
}


void ElementoPlaneta::setPlaneta (Planeta* pPlaneta)
{
    this->pPlaneta = pPlaneta;
}

Planeta* ElementoPlaneta::getPlaneta()
{
    return pPlaneta;
}

string ElementoPlaneta::getNome()
{
   return pPlaneta->getNome();
}

Estrela* ElementoPlaneta::getEstrela()
{
    return pPlaneta->getEstrela();
}
