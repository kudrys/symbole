#include "symbol.h"
#include <iostream>

symbol::symbol(){
    //ctor
}

symbol::~symbol(){
    //dtor
}

bool symbol::create_tab(){

    tab = new bool* [x+2];
    for (int i = 0; i < x+2; i++) {
        tab[i] = new bool [y+2];
    }
}

