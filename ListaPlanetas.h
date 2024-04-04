#pragma once

#include"Planeta.h"
#include"ElementoPlaneta.h"

class SistemaSolar;

class ListaPlanetas
{
private:

    ElementoPlaneta* pElPlanetaPrim;

    ElementoPlaneta* pElPlanetaAtual;

public:
    ListaPlanetas();
    ~ListaPlanetas();

    void incluirPlaneta(Planeta* pPlaneta);
    void listPlanetas();

    /*Planeta* localizar(char* n);*/

    ElementoPlaneta* getPlanetaPrim();

    ElementoPlaneta* getPlanetaAtual();

};
