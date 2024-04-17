#include "Astros.h"
#include <iostream>
using namespace std;

Astros::Astros()
{

}
Astros::~Astros()
{

}

string Astros::getNome()
{
}

void Astros::getInfo()
{
    cout << "Nenhuma informacao" << endl;
}

void Astros::setId(int id)
{
    this->id = id;
}
int Astros::getId()
{
    return id;
}
