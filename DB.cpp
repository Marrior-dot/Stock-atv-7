#include <string>
#include <iostream>
#include "DB.h"
#include "DBR.cpp"
//#include "DBNR.cpp"

using std::cin;
using std::cout;
using std::endl;
using std::string;

DB::DB():Stock("")//:Stock("")
{
    cout << "O estoque não será armazenado em um banco de dados";
}

DB::DB(int DBType):Stock("",0)//:Stock("", 0)
{   
    chooseDB( DBType );
}

DB::DB( const DB & other ):Stock("")//:Stock("")
{
    this -> DBType = other.DBType;
}

DB::~DB(){}

int DB::chooseDB(int DBType){
    int before = DBType;
    string w = "";

    if (DBType == 0){
        w = "relacional";
        cout << "O banco de dados a ser usado para armazenar o estoque será do tipo " << w;
        DBR blabla( string key );
        return 0;

    }
    else if(DBType == 1){
        w = "não-relacional";
        cout << "O banco de dados a ser usado para armazenar o estoque será do tipo " << w;
        return 1;
    }
    else{
        while ( DBType < 0 && DBType > 1 )
        {
            cout << "Por favor escolha segundo as seguintes opções: "<< "\n"
            << "BD relacional - 0"
            << "BD não-relacional - 1";

            cin >> DBType;

        }
        if (DBType == 0){
            w = "relacional";
            return 0;
        }
        else if(DBType == 1){
            w = "não-relacional";
            return 1;
        } 
    }
    
}

void DB::operator != (int DBType){
    

}