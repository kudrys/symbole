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
        int hasz_size;
        symbol tab_hasz[10000];
        char **tab;
        help h;
        void create_map();
        void draw();
        void load();
        void load_helptab();
        void flood(int,int);
        int insert_hasz(int);
        void extract_symbol(int,int);
        void one(int,int);
        void draw_the_biggest();
        void draw_all_symbols();
        void funkk();
    protected:
    private:
};

#endif // MAPA_H
