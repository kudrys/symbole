#include "symbol.h"
#ifndef HELP_H
#define HELP_H


class help
{
    public:
        help();
        int x;   //wspolrzedne jedynki z mapy glownej
        int y;
        int wysokosc;   //wysokosz symbolu
        int szerokosc;  //szerokosc symbolu
        int highX; //wspolrzedne pojedynczego symbolu
        int lowX;
        int highY;
        int lowY;
        char helptab[256][256];  //hx,lx,hy,ly  to wspolrzedne w help_tab

        void set_default(int, int);
        void draw();
        void draw_box_and_size();
        void draw_box_to_symbol(symbol*);
        void what_symbol_size();
        int hash_function();
        void clearr(int,int);
        void funkk();
    protected:
    private:
};

#endif // HELP_H
