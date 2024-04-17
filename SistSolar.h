#pragma once

#include "string.h"
#include"ListaPlanetas.h"
#include"Estrela.h"
#include"Planeta.h"
#include"ElementoPlaneta.h"
#include "ListaAstros.h"
#include<iostream>
using std::cout;
using std::endl;

class SistemaSolar
{
private:

    Planeta Terra;
    Planeta Marte;
    Planeta Jupiter;
    Planeta Saturno;
    Planeta Netuno;
    Estrela sol;
    ListaPlanetas lPlanetas;
    ListaAstros lAstros;

public:
    SistemaSolar();
    ~SistemaSolar();
    void Executar();
};
