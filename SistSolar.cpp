#include"SistSolar.h"

SistemaSolar::SistemaSolar()
{

}



SistemaSolar::~SistemaSolar()
{

}





void SistemaSolar::Executar()
{
    Terra.setNome("Terra");
    Marte.setNome("Marte");

    lPlanetas.incluirPlaneta(&Terra);
    lPlanetas.incluirPlaneta(&Marte);

    lPlanetas.listPlanetas();
}
