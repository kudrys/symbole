#include <iostream>
#ifndef SYMBOL_H
#define SYMBOL_H

class symbol
{
    public:
        symbol(){};
        symbol(int,int);
        virtual ~symbol();
        int x;
        int y;
        int counter;
        char **tab;
        void create_tab(int,int);
        int hasz;
        void draw();
        void counter_grow();
        void funkk();
    protected:
    private:
};

#endif // SYMBOL_H
