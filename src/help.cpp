#include "help.h"
#include "symbol.h"
#include <iostream>
using namespace std;

help::help()
{
    wysokosc=0;
    szerokosc=0;
}

void help::draw() {
    for(int i=0; i<50; i++) {
        cout<<"\n";
        for(int j=0; j<50; j++) {
            cout<<helptab[i][j];
        }
    }
}

void help::draw_box_and_size(){
    cout<<"\n----";
    int hx=highX-x+24;
    int hy=highY-y+24;
    int lx=lowX-x+24;
    int ly=lowY-y+24;
    for(int i=ly; i<=hy; i++) {
        cout<<"\n";
        for(int j=lx; j<=hx; j++) {
            cout<<helptab[i][j];
        }
    }
    cout<<"\n----\n";
    what_symbol_size();
    cout<<"size: "<<wysokosc<<","<<szerokosc;
}

void help::draw_box_to_symbol(symbol* s){
    int hx=highX-x+24;
    int hy=highY-y+24;
    int lx=lowX-x+24;
    int ly=lowY-y+24;
    for(int i=0; i<=s->x; i++) {
        for(int j=0; j<=s->y; j++) {
        s->tab[i][j]=helptab[ly+i][lx+j];
        }
    }
}

void help::what_symbol_size()
{
    int hx=highX-x+24;
    int hy=highY-y+24;
    int lx=lowX-x+24;
    int ly=lowY-y+24;

    wysokosc=hy+1-ly;
    szerokosc=hx+1-lx;
}


void help::clearr(int cx,int cy){
    if(helptab[cy][cx]=='1'){
        helptab[cy][cx]='*';
        clearr(cx,cy-1);
        clearr(cx,cy+1);
        clearr(cx+1,cy);
        clearr(cx-1,cy);
    }
}

void help::set_default(int sx,int sy){ //przekazuje x-y napotkanej "jedynki"

    x=sx;
    y=sy;
    highX=x;
    highY=y;
    lowX=x;
    lowY=y;
}


