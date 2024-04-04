#pragma once

#include "string.h"
#include"ListaPlanetas.h"
#include"Estrela.h"
#include"Planeta.h"
#include"ElementoPlaneta.h"
#include<iostream>
using std::cout;
using std::endl;

class SistemaSolar
{
private:
    Planeta Terra;
    Planeta Marte;
    Estrela sol;
    ListaPlanetas lPlanetas;
public:
    SistemaSolar();
    ~SistemaSolar();
    void Executar();
};
