#ifndef CARRO_H
#define CARRO_H

#include <iostream>
#include <string>
using std::string;
class Carro{
public:
    Carro();
    Carro(string, int = 0);
    Carro(int);

    void setcarBrand(string);
    void setcarFab(int);
    void setLigado(int l);
    bool getLigado();
    string getcarBrand();
    int getcarFab();
private:
    bool ligado;
    string carBrand;
    int carFab;
    const int MAXCARBRAND = 12;

};
#endif //CARRO_H