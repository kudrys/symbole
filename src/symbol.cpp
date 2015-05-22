#include "symbol.h"
#include <iostream>
using namespace std;

symbol::symbol(int szer, int wys){
    counter =1;
    x=szer;
    y=wys;
    create_tab(x,y);
}

symbol::~symbol(){
    //dtor
}

char symbol::create_tab(int x,int y){

    tab = new char* [x+2];
    for (int i = 0; i < x+2; i++) {
        tab[i] = new char [y+2];
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

