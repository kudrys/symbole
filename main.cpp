#include <iostream>
#include <mapa.h>
using namespace std;

int main(){
    int x, y;
    cin>> x;
    cin>> y;
    mapa skarbow;
    skarbow.x=x;
    skarbow.y=y;

    skarbow.create_map();
    skarbow.draw();

    skarbow.load();
    skarbow.draw();
}
