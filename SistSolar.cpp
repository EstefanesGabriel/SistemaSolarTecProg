#include"SistSolar.h"

SistemaSolar::SistemaSolar()
{

}



SistemaSolar::~SistemaSolar()
{

}





void SistemaSolar::Executar()
{
    Astros* pAstro;
    Planeta* pPlaneta;

    Terra.setNome("Terra");
    lPlanetas.incluirPlaneta(&Terra);
    pPlaneta = &Terra;
    pAstro = static_cast<Astros*>(pPlaneta);
    lAstros.incluirAstros(pAstro);
    Terra.setTempoOrbita(24);



    Marte.setNome("Marte");
    lPlanetas.incluirPlaneta(&Marte);
    pPlaneta = &Marte;
    pAstro = static_cast<Astros*>(pPlaneta);
    lAstros.incluirAstros(pAstro);
    Marte.setTempoOrbita(10);


    Jupiter.setNome("Jupiter");
    lPlanetas.incluirPlaneta(&Jupiter);
    pPlaneta = &Jupiter;
    pAstro = static_cast<Astros*>(pPlaneta);
    lAstros.incluirAstros(pAstro);
    Jupiter.setTempoOrbita(50);

    sol.setNome("Sol");
    pAstro = &sol;
    lAstros.incluirAstros(pAstro);
    sol.setTempoExistencia(8000);

    lPlanetas.listPlanetas();
    lAstros.listAstros();



}
