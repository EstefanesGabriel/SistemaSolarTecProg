#pragma once

#include"Planeta.h"
#include"ListaPlanetas.h"
class SistemaSolar;

class Estrela
{
private:
    int tempo_existencia;
    ListaPlanetas lPlanetas;

public:
    Estrela();
    ~Estrela();
    int getTempoExistencia();
    void setTempoExistencia(int tempo);
};
