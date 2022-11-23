#define DBR_H
#ifdef DBR_H

#include "DB.h"
#include <string>
#include <iostream>

using std::cout;
using std::string;

class DBR : public DB
{
    public:
    DBR( string = "" );
    DBR( string );
    DBR( const DBR& );
    ~DBR();

    void printTable(string);
    string operator != (string);

    private:
    string key;
    
};

#endif