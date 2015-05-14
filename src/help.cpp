#include "help.h"
#include <iostream>
using namespace std;

help::help()
{
    //ctor
}


void help::draw() {
    for(int i=0; i<50; i++) {
        cout<<"\n";
        for(int j=0; j<50; j++) {
            cout<<helptab[i][j];
        }
    }
}

void help::clearr(int x,int y){
    if(helptab[y][x]=='1'){
        helptab[y][x]='*';
        clearr(x,y-1);
        clearr(x,y+1);
        clearr(x+1,y);
        clearr(x-1,y);
    }
}
