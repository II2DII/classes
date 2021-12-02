#include <iostream>
#include "carro.h"
#include "carro.cpp"

using std::cout;

int main(){
    Carro *car=new Carro();
    if (car->getLigado()){
        cout << "o carro esta ligado!";
    }else{
        cout << "o carro esta desligado!";
    }
    return 0;
}