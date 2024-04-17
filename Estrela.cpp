#include"Estrela.h"
#include"SistSolar.h"

Estrela::Estrela():
    Astro()
{

}
Estrela::~Estrela():
    ~Astro()
{

}

int Estrela::getTempoExistencia()
{
    return tempo_existencia;
}

void Estrela::setTempoExistencia(int tempo)
{
    tempo_existencia = tempo;
}
