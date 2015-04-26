#ifndef MAPA_H
#define MAPA_H


class mapa
{
    public:
        mapa();
        int x;
        int y;
        char **tab;
        void create_map();
        void draw();
    protected:
    private:
};

#endif // MAPA_H
