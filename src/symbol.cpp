#include "symbol.h"
#include <iostream>
using namespace std;

symbol::symbol(){
    counter =1;
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

void symbol::draw(){
     for(int i=0; i<y; i++) {
        cout<<"\n";
        for(int j=0; j<x; j++) {
            cout<<tab[i][j];
        }
    }
}

void symbol::counter_grow(){
    counter+=counter+1;

}

