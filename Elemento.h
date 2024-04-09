#pragma once


template <class TIPO>

class Elemento
{
private:


    TIPO* pInfo;

public:

    Elemento <TIPO>* pProx;
    Elemento <TIPO>* pAnt;

    Elemento()
    {
        pProx = nullptr;
        pAnt = nullptr;
        pInfo = nullptr;
    }
    ~Elemento()
    {
        pProx = nullptr;
        pAnt = nullptr;
        pInfo = nullptr;
    }


    void setProx(Elemento<TIPO>* pProx)
    {
        this->pProx = pProx;
    }

    Elemento<TIPO>* getProx()
    {
        return pProx;
    }

    void setAnt(Elemento<TIPO>* pAnt)
    {
        this->pAnt = pAnt;
    }

    Elemento<TIPO>* getAnt()
    {
        return pAnt;
    }

    void setInfo(TIPO* pInfo)
    {
        this->pInfo = pInfo;
    }

    TIPO* getInfo()
    {
        return pInfo;
    }
};
