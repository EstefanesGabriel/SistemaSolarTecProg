#include"Estrela.h"
#include"SistSolar.h"
#include <iostream>
using namespace std;

Estrela::Estrela():
    Astros()
{

}
Estrela::~Estrela()
{

}

void Estrela::getInfo()
{
    cout << "Tempo de existencia:" << tempo_existencia << endl;
}

void Estrela::setTempoExistencia(int tempo)
{
    tempo_existencia = tempo;
}

string Estrela :: getNome()
{
    return nome;
}

void Estrela:: setNome(string nome)
{
    this->nome = nome;
}
