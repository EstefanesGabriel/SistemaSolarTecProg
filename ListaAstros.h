#pragma once

#include"Lista.h"

class SistemaSolar;

class ListaAstros
{
private:
    Lista<Astros> lAstros;

public:
    ListaAstros();
    ~ListaAstros();

    void incluirAstros(Astros* pAstro);
    void listAstros();



};