#include "nodo.h"

Nodo *nodo_crear(void *info, size_t size){
    Nodo *nuevo = (Nodo*)malloc(sizeof(Nodo));
    if(nodo! = NULL)
    


}
void nodo_eliminar(Nodo *nodo){
    if(nodo! = NULL){
        if(!nodo->sig &&!nodo->ant){
            free(nodo->info);
            free(nodo);

        }
    }else{
        printf("El nodo no puede liberarse\n");
    }
}

bool nodo_actualizar(Nodo *nodo, void *info, size_t size){
    nodo->info = realloc(nodo->info, size);
    if(nodo->info) return false;
    memcpy(nodo->info, info, size);
}

