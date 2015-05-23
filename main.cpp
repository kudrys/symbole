#include <iostream>
#include <mapa.h>
using namespace std;

int main(){
    int x, y; //rozmiary mapy
    cin>> x;
    cin>> y;
    mapa skarbow;
    skarbow.x=x;
    skarbow.y=y;

    skarbow.create_map();

    skarbow.load_helptab();  //mapa na symbol

    skarbow.load();   //wypelnia mape glowna

    skarbow.draw();     //rysuje mape glowna

    skarbow.flood(0,0);
    cout<<"\n";
    //skarbow.draw();

    //skarbow.h.draw();

    cout<<"symbol:\n";
    skarbow.tab_hasz[0].draw();
}

