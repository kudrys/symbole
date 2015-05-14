#include "help.h"
#include <iostream>
using namespace std;

help::help()
{
    //ctor
}


void mapa::draw() {
    for(int i=0; i<50; i++) {
        cout<<"\n";
        for(int j=0; j<50; j++) {
            cout<<helptab[i][j];
        }
    }
}

void mapa::clearr(int x,int y){
    if(helptab[y][x]=='1'){
        helptab[y][x]='*';
        clear_help(x,y-1);
        clear_help(x,y+1);
        clear_help(x+1,y);
        clear_help(x-1,y);
    }
}
