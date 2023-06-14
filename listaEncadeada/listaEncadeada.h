#ifndef listaEncadeada
#define listaEncadeada

class No {
  int conteudo;
  No* proximo;
public:
  No(int cont = 0);
  int getconteudo();
  void setconteudo(int novocont);
  No* getproximo();
  void setproximo(No* p);
  ~No();
};

class listaEncad {
  No* cabeca;
  No* cauda;
  int tamanho;
public:
  listaEncad();
  listaEncad(int cont);
  bool verVazia();
  void insereinicio(int n);
  void inserefinal(int n);
  void insereposicao(int cont, int pos);
  int getconteudo(int pos);
  void setconteudo(int cont,int pos);
  void removeNo(int pos);
  void infolista();
  ~listaEncad();
};

#endif