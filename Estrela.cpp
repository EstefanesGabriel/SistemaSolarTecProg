#include"Estrela.h"
#include"SistSolar.h"

Estrela::Estrela()
{

}
Estrela::~Estrela()
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
