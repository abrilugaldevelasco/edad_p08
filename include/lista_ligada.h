#ifndef __LISTA_LIGADA_H__
#define __LISTA_LIGADA_H__

#include "nodo.h"

typedef struct DLista DLista;

struct DLista{
    Nodo* head;
    Nodo* tail;
};

bool lista_insertar_vacia(Dlista *l, void *imfo, size_t size);
bool lista_insertar_inicio(Dlista *l, void *imfo, size_t size);
bool lista_insertar_fin(Dlista *l, void *imfo, size_t size);
bool lista_insertar_x_pos(Dlista *l, int pos, void *imfo, size_t size);


#endif