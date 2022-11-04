#ifndef STOCK_H
#define STOCK_H
#include <string>
#include <vector>
#include "person.h"
#include "store.h"
#include "date.h"

using std::cout;
using std::string;
using std::vector;

class Stock {
public:

  Stock( const string );
  Stock( const string, int );
  Stock( const Stock & );
  ~Stock( );

  Person* usr;
  Person* usrCopy;
  Date* date; 
  Store* store;

  struct Category{
    string nameOfCategory;
  };

  string getStockName( );
  void printContentList( );
  void setContentNameSize( int );
  void setListSize( int );
  void operator <<( const string ); 
  void operator != (Store);
  void operator /= (Date); 
  void operator = (string); 

private:
  string contentName;
  vector <string> contentList;
  Category category;
  int *listPtr;
  void operator == (int);

  static int listSize;
  static int contentNameSize;
};

//Classe Base
class Database{
  public:
    Database( Stock );
    Database( Store, Stock );
    Database( const Database& );
    ~Database();
  private:
    string DBName;

};

//Classe de Herança Simples
class DBType: public Database{
  public:
    DBType();
    DBType( Database );
    DBType( const DBType& );
    ~DBType();
};

//Classe de Herança Multinível
class Language: public DBType{
  public:
    Language();
    Language( DBType );
    Language( const Language& );
    ~Language();
};

#endif