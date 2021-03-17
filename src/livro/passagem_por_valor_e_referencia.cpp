#include "passagem_por_valor_e_referencia.h"

int PassagemValRef::squareByValue(int x) {
    return x * x;
}

void PassagemValRef::squareByReference(int &x) {
    x *= x;
}
