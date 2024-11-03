#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

struct frases{

string frase1;

};

void pur(){

  cout<<"Programa que cuenta vocales"<<endl;


}

bool check (const int argc, char* argv [], const int KCorrectNumber){

  if (argc!=KCorrectNumber){

  cout<<"Argumentos inválidos"<<endl;

  return false;

  }

  return true;

}

frases input (){

  frases fr;

  cout<<"Escriba una frase: ";

  string frase;

  getline (cin, frase);

  fr.frase1=frase;

  return fr;

}

void contador (string frase){

  istringstream stream(frase);

  string palabras;

  vector<char> vocales={'a','e','i','o','u','A','E','I','O','U'};

  int contador{0};

  while (stream>>palabras){

    for (char letras:palabras){

      if (find(vocales.begin() , vocales.end(), letras)!=vocales.end()){


        contador++;
      }}
  }
      cout << "Hay " << contador << " vocales." << endl;


}

int main (int argc,char* argv []){

  pur();

  if (!check(argc,argv,1)){

    return 345;
}

  frases fr = input();
  contador(fr.frase1);

}
