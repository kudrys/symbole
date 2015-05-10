#include "mapa.h"
#include <iostream>
using namespace std;

mapa::mapa(){

}

void mapa::create_map() {

    tab = new char* [y+2];
    for (int i = 0; i < y+2; i++) {
        tab[i] = new char [x+2];
    }
}

void mapa::draw() {
    for(int i=0; i<y; i++) {
        cout<<"\n";
        for(int j=0; j<x; j++) {
            cout<<tab[i][j];
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

void mapa::flood(int floodX,int floodY){

    if(floodX<0||floodY<0||floodX>x||floodY>y){
    }else{
        draw();
        if(tab[floodY][floodX]=='0'){
            tab[floodY][floodX]='.';
            flood(floodX,floodY-1); //up
            flood(floodX,floodY+1); //down
            flood(floodX+1,floodY); //right
            flood(floodX-1,floodY); //left
        }else{
            if(tab[floodY][floodX]=='1'){
                one(floodX,floodY);
            }
        }
    }
}

void mapa::one(int ox,int oy){
    if(ox<0||oy<0||ox>x||oy>y){
    }else{
        if(tab[oy][ox]=='1'){
            tab[oy][ox]='0';
            one(ox,oy-1);
            one(ox,oy+1);
            one(ox+1,oy);
            one(ox-1,oy);
        }
    }
}


/*

0011000100
0011000110
0010000000
0010000010
0000000011
1100000000
0110010011
0000111000
1001010010
1100100011
*/
