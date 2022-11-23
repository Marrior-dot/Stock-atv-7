#define DB_H
#ifdef DB_H
#include "stock.h"
#include <string>
#include <iostream>

using std::cout;
using std::string;

class DB : public Stock{
    public:
    DB();
    DB( int );
    DB( const DB& );
    ~DB();

    int chooseDB (int);
    void operator != ( int );

    private:
    int DBType;
    
};

#endif