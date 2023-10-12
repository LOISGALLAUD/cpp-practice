#ifndef PAIREGEN_H
#define PAIREGEN_H

#include<iostream>

template <class T, class U> class PaireGen{
private:
    T cle;
    U valeur;
public:
    PaireGen(T c, U v);
    bool operator>(const PaireGen& obj) const;
    void affiche(void) const;
};

template <class T, class U> PaireGen<T,U>:: PaireGen(T c, U v){
    cle = c;
    valeur = v;
}

template <class T, class U> void  PaireGen<T,U>:: affiche(void) const {
    
    std::cout << cle << "," << valeur << std::endl;
    
}

template <class T,class U> bool PaireGen<T,U>::operator>(const PaireGen<T,U>& obj) const
{
    
    if( cle > obj.cle)
        return true;
    else
        return false;
}

#endif



