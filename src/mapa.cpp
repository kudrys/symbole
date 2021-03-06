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
    }
}


void mapa::load_helptab() {
    for(int i=0; i<300;i++){
        for(int j=0; j<300; j++) {
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

void mapa::flood2(){

    for(int i=0; i<y; i++){
        for(int j=0; j<x; j++){//cout<<"\ni:"<<i<<" j:"<<j;
            if(tab[i][j]=='1'){

                extract_symbol(j,i);
            }
        }
    }
}

int mapa::insert_hasz(int hasz){                      //zle wsadza do symbolu (zawsze rysuje 2 na 3). Jak tworzy sie tab_hasz to kazde 20 symboli ma rozmiar 3na3.

   for(int i=0;i<hasz_size;i++){
        if(hasz==tab_hasz[i].hasz){
            tab_hasz[i].counter_grow();
            return 0;  //zwraca 0 gdy nie powiekszylismy tablicy
        }
    }
    tab_hasz[hasz_size]= symbol(h.szerokosc, h.wysokosc);
    tab_hasz[hasz_size].hasz=hasz;
    hasz_size++;
    h.draw_box_to_symbol(&tab_hasz[hasz_size-1]);

    return 1;   //zwraca 1 gdy znajdzie nowego hasza
}

void mapa::extract_symbol(int ox,int oy){

    h.set_default(ox,oy);
    one(ox,oy);
    h.what_symbol_size();

    int hasz=h.hash_function();

    insert_hasz(hasz);
    //tab_hasz[hasz_size-1].draw();
    h.draw_box_and_size();

    h.clearr(127,127);
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
            h.helptab[oy-h.y+127][ox-h.x+127]='1';
            one(ox,oy-1); //up
            one(ox,oy+1); //down
            one(ox+1,oy); //right
            one(ox-1,oy); //left
        }
    }
}

void mapa::draw_the_biggest(){
    int temp=0;
    int temp_index=0;
    for(int i=0; i<hasz_size; i++){
        if(tab_hasz[i].counter>temp){
            temp=tab_hasz[i].counter;
            temp_index=i;
        }
    }
    cout<<endl<<tab_hasz[temp_index].counter;
    tab_hasz[temp_index].draw();

    //cout<<"\ntemp:"<<temp;
}

void mapa::draw_all_symbols(){

    for(int i=0; i<hasz_size; i++){
        cout<<"\n-"<<i<<"-\n";
        tab_hasz[i].draw();
        cout<<tab_hasz[i].counter;
    }
}

/*

10 10
0101010100
0100000110
0100010000
0110011010
0100000011
1100000000
0110010011
0000011000
1001010010
1100000011
*/
