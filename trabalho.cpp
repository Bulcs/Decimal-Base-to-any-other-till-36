/*
  @Brief: -Programa capaz de transformar um número na base decimal para qualquer outra base entre 2 e 36 
**/
#include <iostream>
#include <vector>
#include <string>

using std::string;
using namespace std;
using std::vector;
using std::to_string;

int main() {
  int num;
  int base;
  vector<int> bin;
  vector<string> big_base;

  int cont;
    cout << "Digite o Numero no qual deseja passar pra binario: \n";
  	cin >> num;
    cout << "Agora digite a base b: \n";
    cin >> base;

    if(base<10 && base >0){
      while(num>0){
	    cont = num%base;
	    bin.push_back(cont);
	    num /= base;
	  }
      for (int i=bin.size()-1; i>=0; i--){
            cout << bin[i];
      }
    }

    if(base>10 && base <= 36){
      while(num>0){
        cont = num%base;
        num /= base;
        if(cont>9){
        switch(cont){
          case 10:
            big_base.push_back("A");break;
          case 11:
            big_base.push_back("B");break;
          case 12:
            big_base.push_back("C");break;
          case 13:
           big_base.push_back("D");break;
          case 14:
            big_base.push_back("E");break;
          case 15:
            big_base.push_back("F");break;
          case 16:
            big_base.push_back("G");break;
          case 17:
            big_base.push_back("H");break;
          case 18:
            big_base.push_back("I");break;
          case 19:
            big_base.push_back("J");break;
          case 20:
            big_base.push_back("K");break;
          case 21:
            big_base.push_back("L");break;
          case 22:
            big_base.push_back("M");break;
          case 23:
            big_base.push_back("N");break;
          case 24:
            big_base.push_back("O");break;
          case 25:
            big_base.push_back("P");break;
          case 26:
            big_base.push_back("Q");break;
          case 27:
            big_base.push_back("R");break;
          case 28:
            big_base.push_back("S");break;
          case 29:
            big_base.push_back("T");break;
          case 30:
            big_base.push_back("U");break;
          case 31:
            big_base.push_back("V");break;
          case 32:
            big_base.push_back("W");break;
          case 33:
            big_base.push_back("X");break;
          case 34:
            big_base.push_back("Y");break;
          case 35:
            big_base.push_back("Z");break;
        }
        }else
          big_base.push_back(to_string(cont));
      }
      for (int i=big_base.size()-1; i>=0; i--){
            cout << big_base[i];
      }
    }
    if(base == 10){
      cout << "A base é o próprio número na base 10: " << num;
    }

	return 0;
}
