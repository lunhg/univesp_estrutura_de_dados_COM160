#include <iostream>
#include "tempo.h"    

using namespace std;

int main() {
  /*
    Neste primeiro objeto, passamos todos os parâmetros. Em outras
    palavras, nenhum valor padrão foi usado.
   */
 
  Tempo t1(23, 59, 59);   
  t1.print();       // 23:59:59
  t1.setHour(12);
  t1.setMinute(30);
  t1.setSecond(15);
  
  t1.print();       // 12:30:15
  cout << "Hour:    " << t1.getHour()   << endl;
  cout << "Minute:  " << t1.getMinute() << endl;
  cout << "Second:  " << t1.getSecond() << endl;

  /*
    Nesta segunda instância, usamos o padrão apenas para minutos e
    segundos.
   */
  Tempo t2(12); 
  t2.print();  // 12:00:00

  Tempo t3(23, 59, 58);
  t3.print();  // 23:59:58
  t3.nextSecond();
  t3.print();  // 23:59:59
  t3.nextSecond();
  t3.print();  // 00:00:00
}
