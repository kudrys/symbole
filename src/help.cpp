#include "help.h"
#include <iostream>
using namespace std;

help::help()
{

}

void help::draw() {
    for(int i=0; i<50; i++) {
        cout<<"\n";
        for(int j=0; j<50; j++) {
            cout<<helptab[i][j];
        }
    }
}

void help::draw_box(){
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
    cout<<"\n----";

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

void help::set_default(int sx,int sy){

    x=sx;
    y=sy;
    highX=x;
    highY=y;
    lowX=x;
    lowY=y;
}

