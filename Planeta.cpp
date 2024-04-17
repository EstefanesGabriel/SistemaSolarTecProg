#include"Planeta.h"
#include"SistSolar.h"
#include"Estrela.h"
#include<string>
using std::string;

Planeta::Planeta():
    Astro()
{
    pEstrela = nullptr;
}

Planeta::~Planeta():
    ~Astro()
{
    pEstrela = nullptr;
}

float Planeta::calc_quantOrbitas()
{
    float resultado = 0.0;


    if(pEstrela != nullptr)
    {
        int tempo_sol = pEstrela->getTempoExistencia();

        resultado = (float)tempo_sol / tempo_orbita;
    }

    else
    {
        cout << "ponteiro sol esta nulo" << endl;
        resultado = -1.0;
    }

    return resultado;
}

int Planeta::getTempoOrbita()
{
    return tempo_orbita;
}

void Planeta::setTempoOrbita(int tempo_orbita)
{
    this -> tempo_orbita = tempo_orbita;
}

Estrela* Planeta::getEstrela()
{
    return pEstrela;
}

void Planeta::setId(int id)
{
    this-> id = id;
}

void Planeta::setNome(string nome)
{
    this->nome = nome;
}

int Planeta::getId()
{
    return id;
}

string Planeta::getNome()
{
    return nome;
}


void Planeta::setEstrela(Estrela* pEstrela)
{
    this -> pEstrela = pEstrela;
}
