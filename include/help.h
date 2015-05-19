#include "symbol.h"
#ifndef HELP_H
#define HELP_H


class help
{
    public:
        help();
        int x;
        int y;
        int wysokosc;
        int szerokosc;
        int highX; //rozmiary pojedynczego symbolu
        int lowX;
        int highY;
        int lowY;
        char helptab[50][50];

        void set_default(int, int);
        void draw();
        void draw_box_and_size();
        void draw_box_to_symbol(symbol*);
        void what_symbol_size();
        void clearr(int,int);
        void funkk();
    protected:
    private:
};

#endif // HELP_H
