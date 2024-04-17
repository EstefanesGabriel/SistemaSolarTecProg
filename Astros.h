#pragma once
#include <string>
using std::string;
/*#include"ListaPlanetas.h"
#include"ElementoPlaneta.h"
#include<iostream>*/




class Astros
{
protected:
    int id;
    string nome;


public:
    Astros();
    ~Astros();

    virtual string getNome();

    virtual void getInfo();

    void setId(int id);
    int getId();

};
