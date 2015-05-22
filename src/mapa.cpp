#include "mapa.h"
#include "help.h"
#include "symbol.h"
#include <iostream>
using namespace std;

mapa::mapa(){
  hasz_size=0;
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

void mapa::load_helptab() {
    for(int i=0; i<50;i++){
        for(int j=0; j<50; j++) {
            h.helptab[i][j]='0';

        }
    }
}

void mapa::flood(int floodX,int floodY){

    if(floodX<0||floodY<0||floodX>x||floodY>y){
    }else{
        //draw();
        if(tab[floodY][floodX]=='0'){
            tab[floodY][floodX]='.';
            flood(floodX,floodY-1); //up
            flood(floodX,floodY+1); //down
            flood(floodX+1,floodY); //right
            flood(floodX-1,floodY); //left
        }else{
            if(tab[floodY][floodX]=='1'){
                extract_symbol(floodX,floodY);
            }
        }
    }
}

int mapa::insert_hasz(int hasz){                      //zle wsadza do symbolu (zawsze rysuje 3 na 3). Jak tworzy sie tab_hasz to kazde 20 symboli ma rozmiar 3na3.

   for(int i=0;i<hasz_size;i++){
        if(hasz==tab_hasz[i].hasz){
            tab_hasz[i].counter++;
            return 0;  //zwraca 0 gdy nie powiekszylismy tablicy
        }
    }
    tab_hasz[hasz_size]= symbol(h.szerokosc, h.wysokosc);
    tab_hasz[hasz_size].hasz=hasz;
    hasz_size++;
    return 1;   //zwraca 1 gdy znajdzie nowego hasza
}

void mapa::extract_symbol(int ox,int oy){

    h.set_default(ox,oy);
    one(ox,oy);
    h.what_symbol_size();

    int hasz=h.hash_function();
    insert_hasz(hasz);
    cout<<"\nhasz_size:"<<hasz_size<<"\n";

    h.draw_box_to_symbol(&tab_hasz[0]);
    cout<<"\n";
    tab_hasz[0].draw();
    cout<<"hasz:"<<h.hash_function();
    cout<<"\n";

    draw();
    int b;
    cin>>b;
    h.clearr(24,24);
}

void mapa::one(int ox, int oy){ //przepisuje wszystko do helpa

    if(ox<0||oy<0||ox>x||oy>y){
    }else{
        if(tab[oy][ox]=='1'){

            if(h.highX<ox)     //ustawia highX i highY
                h.highX=ox;
            if(h.lowX>ox)
                h.lowX=ox;
            if(h.highY<oy)
                h.highY=oy;
            if(h.lowY>oy)
                h.lowY=oy;

            tab[oy][ox]='0';
            h.helptab[oy-h.y+24][ox-h.x+24]='1';
            one(ox,oy-1); //up
            one(ox,oy+1); //down
            one(ox+1,oy); //right
            one(ox-1,oy); //left
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
