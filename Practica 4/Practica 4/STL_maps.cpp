#include <iostream>
#include <cstring>
#include <map>

using namespace std;


//Mapas

int main(){
  char key[20];
  map<string,unsigned> map_mes_idx; // defino la variable maps
  map_mes_idx["enero"] = 1;
  map_mes_idx["febrero"] = 2;

  
  
  while (true){
    cout << "Ingresa mes, a consultar (SALIR, para terminar): ";
    cin >> key;
    
    if (strcmp(key,"SALIR")==0)
      {break;}
    else
      cout << key << "-->" << map_mes_idx[key] << endl;
    
  }
  cout << "----------------\n";
  map_mes_idx["enero"] = 0; // reasignar valores
  map_mes_idx["febrero"] = 1;
  map_mes_idx["agosto"]= 7;

  // Para recorrerlo en un loop
  map<string,unsigned>::const_iterator
  mit (map_mes_idx.begin()),
  mend(map_mes_idx.end());

  for(;mit!=mend;++mit) cout << mit->first << '\t' << mit->second << endl;
  return 0;
}


