/* Implementação da classe Time */
#include <iostream>  // Para usar a função std::cout.

// Avoid this error:
// /usr/include/pthread.h:241:34: error: ‘clockid_t’ has not been declared
//https://stackoverflow.com/questions/43813563/clock-t-and-clock-in-does-not-declared-in-this-scope-in-qt#43814051
#include "tempo.h"    // Para visualizar a classe Time.


using namespace std; // Para escrever cout ao invés de
		     // std::cout.

/* 
   Getters
 */
int Tempo::getHour() const {
  return hour;
}

int Tempo::getMinute() const {
  return minute;
}

int Tempo::getSecond() const {
  return second;
}

/*
  Nos métodos "set", a classe está recebendo como parâmetro uma
  variável com o mesmo nome do atributo. Esse fato faz com que o
  atributo seja "escondido". Por exemplo, no método setHour abaixo,
  quando usarmos a variável "hour", estaremos nos referindo ao
  parâmetro e não ao atributo da classe.

  Para contornar esse problema, usamos a palavra reservada
  "this". Assim:

  this->hour, this->minute e this->second se referem aos atributos.

  hour, minute e second se referem aos parâmetros dos métodos abaixo.
 */

/*
  Setters
 */
void Tempo::setHour(int hour) {
  this->hour = hour;
}

void Tempo::setMinute(int minute) {
  this->minute = minute;
}

void Tempo::setSecond(int second){
  this->second = second;
}

void Tempo::print() const {
  cout << hour << ":" << minute << ":" << second << endl;     
}

void Tempo::nextSecond() {
  second += 1;
  if (second >= 60) {
    second = 0;
    minute += 1;
  }
  if (minute >= 60) {
    minute = 0;
    hour += 1;
  }
  if (hour >= 24) {
    hour = 0;
  }
}

/*
  Deixei o construtor para o fim para você conhecer uma sintaxe
  alternativa para inicialização de atributos. Colocamos uma lista de
  inicialização após a declaração dos parâmetros. Para separar os
  parâmetros da lista de inicialização, usamos ":". A lista possui a
  sintaxe:

  atributo1(parâmetroA), atributo2(parâmetroB), ..., atributoN(parâmetroM).
 */

Tempo::Tempo(int h, int m, int s) : hour(h), minute(m), second(s) {
  /*
    O corpo do método executa após as inicializações. Neste caso, ele
    está vazio porque as inicialiações eram tudo o que queríamos
    fazer.
   */
}
