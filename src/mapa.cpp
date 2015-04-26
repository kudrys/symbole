#include "mapa.h"
#include <iostream>
using namespace std;


mapa::mapa(){

}

void mapa::create_map() {

    tab = new char* [x+2];
    for (int i = 0; i < x+2; i++) {
        tab[i] = new char [y+2];
    }
}

void mapa::draw() {
    for(int i=1; i<y+1; i++) {
        cout<<"\n";
        for(int j=1; j<x+1; j++) {
            cout<<tab[j][i];
        }
    }
}

void mapa::load() {
    char c[1000];
    for(int i=0; i<y; i++) {
            cin>> tab[i];
//        for(int j=0; j<x; j++){
//            tab[j][i]=c;
//        }

    }
}

