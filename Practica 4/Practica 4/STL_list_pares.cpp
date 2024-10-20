#include <iostream>


// #include <vector>
#include <list>
// #include <map>


using namespace std;
/*
#include <stdlib.h>
#include <time.h>
*/


//Lista de pairs

int main(){

  //Creo los pair
  pair<int,string> p1 = make_pair(5,"pouet5");
  pair<int,string> p2 = make_pair(4,"pouet4");
  pair<int,string> p3 = make_pair(2,"pouet2");

  //creo la lista
  list<pair<int,string>> ma_lista;

  //agregar pair a lista
  ma_lista.push_back(p1);
  ma_lista.push_back(p2);
  ma_lista.push_back(p3);


  list<pair<int,string>>::const_iterator //iterador de la lista
    lit (ma_lista.begin()),
    lend(ma_lista.end());

  //imprimier elementos
  for(;lit!=lend;++lit) cout << lit->first << ' '<< lit->second<< ' ';
  cout << endl;
  return 0;
}