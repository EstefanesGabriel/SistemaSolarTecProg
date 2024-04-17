#pragma once
#include"Astros.h"
#include <string>
using namespace std;

class SistemaSolar;
class Estrela;

class Planeta: public Astros
{
private:
    int tempo_orbita;
    Estrela* pEstrela;

    int id;
    string nome;



public:
    Planeta();
    ~Planeta();
    float calc_quantOrbitas();
    void setTempoOrbita(int tempo_orbita);
    int getTempoOrbita();

    void setId(int id);

    void setNome(string nome);

    int getId();

    string getNome();

    void setEstrela(Estrela* pEstrela);

    Estrela* getEstrela();


};
