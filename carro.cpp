#include "carro.h"

#include <iostream>
using std::cout;

Carro::Carro()
:carBrand(""),carFab(0000)
{
    setLigado(0);
}
Carro::Carro(string carBrand, int carFab){
    setcarBrand(carBrand);
    setcarFab(carFab);
    setLigado(0);
}
Carro::Carro(int carFab)
:carBrand("")
{
    setcarFab(carFab);
    setLigado(0);
}

void Carro::setcarBrand(string marca){
    this->carBrand = marca;
    if (marca.length() >= MAXCARBRAND){
        cout << "\nnome longo!\n";
    }
}
void Carro::setcarFab(int carFab){
    this->carFab = carFab;
}
void Carro::setLigado(int l){
    if (l == 1){
        this->ligado = true;
    }else if(l == 0){
        this->ligado = false;
    }
}
bool Carro::getLigado(){
    return ligado;
}
int Carro::getcarFab(){
    return carFab;
}
string Carro::getcarBrand(){
    return carBrand;
}