#pragma once
#include"Planeta.h"
#include"Lista.h"

class SistemaSolar;

class ListaPlanetas
{
private:
    Lista<Planeta> lPlanetas;

public:
    ListaPlanetas();
    ~ListaPlanetas();

    void incluirPlaneta(Planeta* pPlaneta);
    void listPlanetas();



};
