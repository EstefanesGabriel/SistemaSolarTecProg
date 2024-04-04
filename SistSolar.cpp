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
    Jupiter.setNome("Jupiter");


    lPlanetas.incluirPlaneta(&Terra);
    lPlanetas.incluirPlaneta(&Marte);
    lPlanetas.incluirPlaneta(&Jupiter);

    lPlanetas.listPlanetas();
}
