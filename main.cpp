#include <iostream>
#include <mapa.h>
using namespace std;

int main(){
    int x, y;
    cin>> x;
    cin>> y;
    mapa skarbow;
    symbol s;
    skarbow.x=x;
    skarbow.y=y;

    skarbow.create_map();
    //skarbow.draw();
    skarbow.load_helptab();
    skarbow.load();
    skarbow.draw();
    //skarbow.flood(0,0);
    skarbow.flood(0,0);
    cout<<"\n";
    //skarbow.draw();

    //skarbow.h.draw();

    cout<<"symbol:\n";
    skarbow.tab_hasz[0].draw();
}

