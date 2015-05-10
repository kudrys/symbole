#ifndef MAPA_H
#define MAPA_H

class mapa
{
    public:
        mapa();
        int x;
        int y;
        char **tab;
        char helptab[201][201];
        void create_map();
        void draw();
        void load();
        void flood(int,int);
        void one(int,int);
        void funkk();
    protected:
    private:
};

#endif // MAPA_H
