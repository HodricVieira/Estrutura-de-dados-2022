#include <iostream>
#include "listaEncadeada.h"
using namespace std;


int main() {
  listaEncad l1;
  l1.insereposicao(10, 1);
  l1.insereposicao(20, 2);
  l1.insereposicao(30, 3);  
  l1.insereposicao(15, 2);
  l1.infolista();
  l1.setconteudo(50, 2);
  l1.getconteudo(2);
  l1.removeNo(4);
  l1.infolista();
}