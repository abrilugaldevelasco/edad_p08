#include lista_ligada.h

bool lista_insertar_vacia(Dlista *l, void *imfo, size_t size){

}

bool lista_insertar_inicio(Dlista *l, void *imfo, size_t size){
    if(!l)return false;
    Nodo* nuevo = nodo_crear(info, size);
    nuevo->sig = l->head;
    l->head->ant = nuevo;
    l->head = nuevo;
    return true;

}

bool lista_insertar_fin(Dlista *l, void *imfo, size_t size){
    if(!l)return false;
    Nodo* nuevo = nodo_crear(info, size);
    nuevo->ant = l->tail;
    l->tail->sig = nuevo,
    l->tail = nuevo,
    return true;

}

bool lista_insertar_x_pos(Dlista *l, int pos, void *imfo, size_t size){

}