#pragma once
#include"Planeta.h"
#include"ListaPlanetas.h"
#include"Astros.h"
class SistemaSolar;

class Estrela : public Astros
{
private:
    int tempo_existencia = NULL;

public:
    Estrela();
    ~Estrela();

    string getNome();
    void setNome(string nome);

    void getInfo(); //int getTempoExistencia();
    void setTempoExistencia(int tempo);
};
