#ifndef MAPA_H
#define MAPA_H
#include "help.h"
#include "symbol.h"

class mapa
{
    public:
        mapa();
        int x;
        int y;
        symbol tab_hasz[20];
        char **tab;
        help h;
        void create_map();
        void draw();
        void load();
        void load_helptab();
        void flood(int,int);
        void extract_symbol(int,int);
        void one(int,int);
        void funkk();
    protected:
    private:
};

#endif // MAPA_H
