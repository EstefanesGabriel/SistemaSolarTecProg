#pragma once

#include"Planeta.h"

class ElementoPlaneta
{
private:

    Planeta* pPlaneta;


public:

    ElementoPlaneta* pProx;
    ElementoPlaneta* pAnt;

    ElementoPlaneta();
    ~ElementoPlaneta();

    void setPlaneta (Planeta* pPlaneta);

    Planeta* getPlaneta();

    string getNome();

    Estrela* getEstrela();

};
