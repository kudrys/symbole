#include <iostream>
#ifndef SYMBOL_H
#define SYMBOL_H

class symbol
{
    public:
        symbol();
        virtual ~symbol();
        int x;
        int y;
        bool **tab;
        bool create_tab();
        int hasz;
    protected:
    private:
};

#endif // SYMBOL_H
