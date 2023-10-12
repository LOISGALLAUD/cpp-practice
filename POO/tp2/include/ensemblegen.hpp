#ifndef ENSEMBLEGEN_HPP
#define ENSEMBLEGEN_HPP

#include <fstream>
#include <iostream>
#include <string>

template <typename T> class EnsembleGen
{
  public:
    EnsembleGen();
    EnsembleGen(const EnsembleGen<T> &); // constructeur de copie
    ~EnsembleGen();
    void ajouter(T);
    void retirer(T);
    bool appartient(T) const;
    int cardinal() const;
    bool estVide() const;
    bool estInclus(const EnsembleGen &) const;
    bool estEgal(EnsembleGen &);
    EnsembleGen reunion(const EnsembleGen &);
    EnsembleGen intersection(const EnsembleGen &);
    EnsembleGen difference(const EnsembleGen &);
    void sauvegarder(const std::string) const;
    void charger(const std::string);
    void afficher();

  private:
    T *elements;
    int nbElements;
};

template <typename T> EnsembleGen<T>::EnsembleGen()
{
    this->nbElements = 0;
    this->elements = new T[this->nbElements];
}

template <typename T> EnsembleGen<T>::EnsembleGen(const EnsembleGen<T> &e)
{
    this->nbElements = e.nbElements;
    this->elements = new T[this->nbElements];
    for (int i = 0; i < this->nbElements; i++)
    {
        this->elements[i] = e.elements[i];
    }
}

template <typename T> EnsembleGen<T>::~EnsembleGen()
{
    delete[] this->elements;
}

template <typename T> void EnsembleGen<T>::ajouter(T element)
{
    T *tmp = new T[this->nbElements + 1];
    for (int i = 0; i < this->nbElements; i++)
    {
        tmp[i] = this->elements[i];
    }
    tmp[this->nbElements] = element;
    delete[] this->elements;
    this->elements = tmp;
    this->nbElements++;
}

template <typename T> void EnsembleGen<T>::retirer(T element)
{
    T *tmp = new T[this->nbElements - 1];
    int j = 0;
    for (int i = 0; i < this->nbElements; i++)
    {
        if (this->elements[i] != element)
        {
            tmp[j] = this->elements[i];
            j++;
        }
    }
    delete[] this->elements;
    this->elements = tmp;
    this->nbElements--;
}

template <typename T> bool EnsembleGen<T>::appartient(T element) const
{
    for (int i = 0; i < this->nbElements; i++)
    {
        if (this->elements[i] == element)
        {
            return true;
        }
    }
    return false;
}

template <typename T> int EnsembleGen<T>::cardinal() const
{
    return this->nbElements;
}

template <typename T> bool EnsembleGen<T>::estVide() const
{
    return this->nbElements == 0;
}

template <typename T>
bool EnsembleGen<T>::estInclus(const EnsembleGen<T> &e) const
{
    for (int i = 0; i < this->nbElements; i++)
    {
        if (!e.appartient(this->elements[i]))
        {
            return false;
        }
    }
    return true;
}

template <typename T> bool EnsembleGen<T>::estEgal(EnsembleGen<T> &e)
{
    if (this->nbElements != e.nbElements)
    {
        return false;
    }
    for (int i = 0; i < this->nbElements; i++)
    {
        if (!e.appartient(this->elements[i]))
        {
            return false;
        }
    }
    return true;
}

template <typename T> void EnsembleGen<T>::afficher()
{
    std::cout << "{";
    for (int i = 0; i < this->nbElements; i++)
    {
        std::cout << this->elements[i];
        if (i < this->nbElements - 1)
        {
            std::cout << ", ";
        }
    }
    std::cout << "}" << std::endl;
}

template <typename T>
EnsembleGen<T> EnsembleGen<T>::reunion(const EnsembleGen<T> &e)
{
    EnsembleGen<T> tmp;
    for (int i = 0; i < this->nbElements; i++)
    {
        tmp.ajouter(this->elements[i]);
    }
    for (int i = 0; i < e.nbElements; i++)
    {
        tmp.ajouter(e.elements[i]);
    }
    return tmp;
}

template <typename T>
EnsembleGen<T> EnsembleGen<T>::intersection(const EnsembleGen<T> &e)
{
    EnsembleGen<T> tmp;
    for (int i = 0; i < this->nbElements; i++)
    {
        for (int j = 0; j < e.nbElements; j++)
        {
            if (this->elements[i] == e.elements[j])
            {
                tmp.ajouter(this->elements[i]);
            }
        }
    }
    return tmp;
}

template <typename T>
EnsembleGen<T> EnsembleGen<T>::difference(const EnsembleGen<T> &e)
{
    EnsembleGen<T> tmp;
    for (int i = 0; i < this->nbElements; i++)
    {
        bool found = false;
        for (int j = 0; j < e.nbElements; j++)
        {
            if (this->elements[i] == e.elements[j])
            {
                found = true;
            }
        }
        if (!found)
        {
            tmp.ajouter(this->elements[i]);
        }
    }
    return tmp;
}

template <typename T>
void EnsembleGen<T>::sauvegarder(const std::string path) const
{
    std::ofstream file(path);
    if (file.is_open())
    {
        for (int i = 0; i < this->nbElements; i++)
        {
            file << this->elements[i] << std::endl;
        }
        file.close();
    }
    else
    {
        std::cout << "Unable to open file" << std::endl;
    }
}

template <typename T> void EnsembleGen<T>::charger(const std::string path)
{
    std::ifstream file(path);
    if (file.is_open())
    {
        T data;
        file >> data;
        while (!file.eof())
        {
            this->ajouter(data);
            file >> data;
        }
        file.close();
    }
    else
    {
        std::cout << "Unable to open file" << std::endl;
    }
}

#endif
