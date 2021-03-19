#include <iostream>
#include "UNIVESP_COM_160.h"

using namespace std;

void modifica_vetor_sintaxe_1(int b[], int num_elem){
  for (int i = 0; i < num_elem; i++){
    b[i] = b[i] * 2;
  }
}

void modifica_vetor_sintaxe_2(int* b, int num_elem)
{
  for (int i = 0; i < num_elem; i++){
    b[i] = b[i] * 2;
  }
}

void vetor_const_sintaxe_1(const int* b, int num_elem) 
{
  // Corpo sem alterar os elementos do vetor
}

void vetor_const_sintaxe_2(const int b[], int num_elem) 
{
  // Corpo sem alterar os elementos do vetor
}


const int NUM_ELEM = 10;
int main(){
    
    cout << "===========================" << endl;
    cout << "Vetores como parametros v" << UNIVESP_COM_160_VERSION_MAJOR << "." << UNIVESP_COM_160_VERSION_MINOR << endl; 
    cout << "===========================" << endl;
    // Alocação Estática
  int c[NUM_ELEM] = {1,2,3,4,5,6,7,8,9,10};

  // Alocação Dinâmica
  int *d = new int[NUM_ELEM];
  for (int i = 0; i < NUM_ELEM; i++){
    d[i] = i + 1;
  }
  
  modifica_vetor_sintaxe_1(c, NUM_ELEM);
  modifica_vetor_sintaxe_2(c, NUM_ELEM);

  modifica_vetor_sintaxe_1(d, NUM_ELEM);
  modifica_vetor_sintaxe_2(d, NUM_ELEM);

  for (int i = 0; i < NUM_ELEM; i++){
    cout << "c[" << i << "] = " << c[i] << "; d[" << i << "] = " << d[i] << endl;
  }
  return 0;
}
