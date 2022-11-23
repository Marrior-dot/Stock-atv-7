#define DBNR_H
#ifdef DBNR_H

#include <string>
#include <iostream>
#include "DB.cpp"

using std::cout;
using std::string;

class DBNR : public DB
{
    public:
    DBNR( string );
    DBNR( string, int );
    DBNR( const DBNR& );
    ~DBNR();

    string dataFormat(int);
    void print(string);

    private:
    string key;
    int textType;
    
};

#endif