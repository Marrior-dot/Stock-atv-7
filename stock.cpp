#include "stock.h"
#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int Stock::listSize = 0;
int Stock::contentNameSize = 0;

Stock::Stock( const string personName){
  usr = new Person(personName);
}

Stock::Stock(const string personName, int personAge){
  usr = new Person(personName, personAge);
}
Stock::Stock(const Stock &other) { 
  usrCopy = new Person(*other.usr);
  this -> category.nameOfCategory = other.category.nameOfCategory;  
}
Stock::~Stock(){}

string Stock::getStockName() { 
  return category.nameOfCategory;   
}

void Stock::operator << (string contentName){
  while (contentName.size() > contentNameSize) {
    cout << "Escolha um nome para o conteudo com comprimento menor que: "
         << contentNameSize << "\n";
    cin >> contentName;
  }
  if (contentList.size() == listSize) {
    string qs = "";
    int newListSize = 0;
    *listPtr = listSize;
    cout << "o estoque está cheio, não é possível por mais conteúdo"
         << "/n"
         << "Deseja aumentar o tamanho para um compartimento maior?Digite S para Sim e N para Não";
    cin >> qs;
    if (qs == "S"){
      //cout << "Digite o tamanho desejado: ";
      //cin >> newListSize;
      while( newListSize <= *listPtr ){
        cout << "Digite um tamanho maior que: " << *listPtr;
        cin >> newListSize;
      }
      //listSizeChange(listSize);
      listSize == newListSize;
    }
      cout << "O conteudo de " 
      << contentName << " não será inserido";
      return;
  }
  contentList.push_back(contentName);
}

void Stock::printContentList() {
  //cout << "Conteúdo do " << getStockName();
  cout << "Conteúdo do estoque:" << "\n";
  for (int i = 0; i < contentList.size(); i++) {
    cout << contentList[i] << "\n";
  }
}

void Stock::setContentNameSize(int contentNameSize) {
  this -> contentNameSize = contentNameSize;
}

void Stock::setListSize(int listSize){
  this -> listSize = listSize;
}

/*void Stock::listSizeChange(int listSize)*/
void Stock::operator == (int listSize) {
  this -> listSize = listSize;
}

void operator != ( Store store, int qunt ){
    cout << "A loja" << store.getStoreName()  << " requisitou "
    << qunt << " do estoque ";
}

void operator /= (Date date, int* dd){
  date.arrive(dd[0], dd[1], dd[2]);
}

void Stock::operator = ( string categoryName ){
  while (categoryName.size() < 3) {
    cout << "Escolha um nome com comprimento maior que 3"
         << "\n";
    cin >> categoryName;
  }
  
  this -> category.nameOfCategory = categoryName;
  cout << "O estoque pertence à categoria " << categoryName << "\n";
}

//Contrutor da Classe Base
Database::Database( Stock stk ){
  cout << "O estoque " << stk.getStockName() << " não será armazenado em nenhum banco de dados";
}

Database::Database( Store str, Stock stk){
  cout << "A lo"
}