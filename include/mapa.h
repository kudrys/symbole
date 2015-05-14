#ifndef MAPA_H
#define MAPA_H

class mapa
{
    public:
        mapa();
        int x;
        int y;
        char **tab;
        char helptab[50][50];
        void create_map();
        void draw();
        void draw_help();
        void load();
        void load_helptab();
        void clear_help(int,int);
        void flood(int,int);
        void extract_symbol(int,int);
        void one(int,int);
        void funkk();
    protected:
    private:
};

#endif // MAPA_H
