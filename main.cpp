#include "stock.cpp"
#include "stock.h"
#include "person.cpp"
#include "person.h"
#include "store.cpp"
#include "store.h"
#include "date.cpp"
#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {

  string item1 = "";
  string item2 = "";
  string item3 = "";
  string item4 = "";
  string item5 = "";
  string item6 = "";

  string person1Name = "";
  cout << "Qual o nome do dono desse estoque?" << "\n";
  cin >> person1Name;

  Stock Stock1(person1Name);

  int A1ContentNameSize = 13;
  int A1listNameSize = 4;

  string stock1Category = "";
  cout << "A qual categoria esse estoque pertence? ";
  cin >> stock1Category;

  Stock1 = stock1Category;
  cout << "\n";

  Stock1.setContentNameSize( A1ContentNameSize );
  Stock1.setListSize(A1listNameSize);

  cout << "Qual o primeiro item do estoque? ";
  cin >> item1;
  cout << "Qual o segundo item do estoque? ";
  cin >> item2;
  cout << "Qual o terceiro item do estoque? ";
  cin >> item3;
  cout << "Qual o quarto item do estoque? ";
  cin >> item4;
  cout << "Qual o quinto item do estoque? ";
  cin >> item5;

  Stock1 << item1;
  Stock1 << item2;
  Stock1 << item3;
  Stock1 << item4;
  Stock1.printContentList();

  cout << "\n";
  Store store1;
  cout << "\n";

  item1 = "";
  item2 = "";
  item3 = "";
  item4 = "";
  item5 = "";
  item6 = "";

  string person2Name = "";
  int person2Age = 0;
  cout << "Quem é o dono do próximo estoque? ";
  cin >> person2Name;
  cout << "\n";
  cout << "Qual a idade dessa pessoa? ";
  cin >> person2Age;

  Stock Stock2(person2Name,person2Age);
  int S2ContentNameSize = 6;
  int S2listNameSize = 6;
  
  cout << "Qual o primeiro item do estoque? ";
  cin >> item1;
  cout << "Qual o segundo item do estoque? ";
  cin >> item2;
  cout << "Qual o terceiro item do estoque? ";
  cin >> item3;
  cout << "Qual o quarto item do estoque? ";
  cin >> item4;
  cout << "Qual o quinto item do estoque? ";
  cin >> item5;
  cout << "Qual o sexto item do estoque? ";
  cin >> item6;
  cout << "\n";

  Stock2.setContentNameSize( S2ContentNameSize );
  Stock2.setListSize( S2listNameSize );
  Stock2 << item1;
  Stock2 << item2;
  Stock2 << item3;
  Stock2 << item4;
  Stock2 << item5;
  Stock2 << item6;

  string stock2Category = "";
  cout << "A qual categoria esse estoque pertence? ";
  cin >> stock2Category;
  Stock2 = stock2Category;

  Stock2.printContentList();

  string store2Name = "";
  cout << "Qual loja requisitou esse estoque? ";
  cin >> store2Name;

  cout << "\n";
  Store store2(store2Name, stock2Category);
  cout << "\n";

  int stock2qunt = 0;
  cout << "Qual a quantidade requisitada pela loja? ";
  cin >> stock2qunt;

  store2 != stock2qunt;

  int dia1;
  int mes1;

  cout << "Digite o dia e o mês atuais: ";
  cin >> dia1;
  cin >> mes1;

  Date data(dia1,mes1);

  int dataArrive[3];
  cout << "Para qual dia e mês você precisará do estoque? ";
  cin >> dataArrive[0];
  cin >> dataArrive[1];

  data /= dataArrive;

  Stock Stock3(Stock2);
  int S3ContentNameSize = 6;
  int S3listNameSize = 5;
  item1 = "";
  item2 = "";
  item3 = "";
  item4 = "";
  item5 = "";
  item6 = "";
  
  cout << "Qual o primeiro item do estoque? ";
  cin >> item1;
  cout << "Qual o segundo item do estoque? ";
  cin >> item2;
  cout << "Qual o terceiro item do estoque? ";
  cin >> item3;
  cout << "Qual o quarto item do estoque? ";
  cin >> item4;
  cout << "Qual o quinto item do estoque? ";
  cin >> item5;
  cout << "Qual o sexto item do estoque? ";
  cin >> item6;
  cout << "\n";

  Stock3.setContentNameSize( S3ContentNameSize );
  Stock3.setListSize( S3listNameSize );
  Stock3 << item1;
  Stock3 << item2;
  Stock3 << item3;
  Stock3 << item4;
  Stock3 << item5;
  Stock3 << item6;

  string stock3Category = "";
  cout << "A qual categoria esse estoque pertence? ";
  cin >> stock3Category;
  Stock3 = stock3Category;

  Stock3.printContentList();

  Store store3(store2);



  return 0;
}