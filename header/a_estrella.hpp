#ifndef A_ESTRELLA_H
#define A_ESTRELLA_H

#include "common.hpp"
#include "map.hpp"
#include "node.hpp"
#include "iostream"
#include <vector>

class a_estrella {
private:
  celda pos_inicio;
  node *path;
  std::vector<node*> open;
  std::vector<node*> closed;
  map* mapa;
  celda pos_actual;
  celda pos_final;
  bool in_closed(node* aux);
  bool in_open(node* aux);
  int find_open(node* aux);
  int find_closed(node* aux);
  void insert_closed(node* aux);
  void insert_open(node* aux);

public:
  a_estrella (map *m);
  ~a_estrella ();
  bool camino (void);
  std::vector<node*> vecinos(node* vecino); //calcula los vecinos
  std::vector<celda> dibujar_camino(void);
};

#endif // A_ESTRELLA_H
