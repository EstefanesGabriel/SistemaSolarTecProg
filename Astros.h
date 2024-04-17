#pragma once

#include "string.h"
#include"ListaPlanetas.h"
#include"Estrela.h"
#include"Planeta.h"
#include"ElementoPlaneta.h"
#include<iostream>


class Astros
{
protected:
    int id;

    Planeta Terra;
    Planeta Marte;
    Planeta Jupiter;
    Planeta Saturno;
    Planeta Netuno;
    Estrela sol;
    ListaPlanetas lPlanetas;



public:
    Astros();
    ~Astros();

    void setId(int id);
    int getId();

};
