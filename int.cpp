#include <iostream>
using namespace std;

using namespace std;

int main()
{
  int numb (-2);
  unsigned int count (4);
  auto name {"Tom"};
//cout << "numb:" << numb;
//  cout << "\ncount:" << count;
//  cout << "\nname:" << name;

  int a,b,c;
  a=2;
  b=7;
  //c = (a>b) ? a : b;

  //cout << '\n' << c;
  string username;
  cin >> username;
  if(username==name){
    cout << "welcome admin";
  }
  else {
    cout << "welcome " << username;
  }
ofstream MyExcelFile;
MyExcelFile.open("database.xlsx");

MyExcelFile << "First Name, Last Name, Middle Initial" << endl;
MyExcelFile << "Michael, Jackson, B." << endl;
MyExcelFile.close();
return 0;
}
