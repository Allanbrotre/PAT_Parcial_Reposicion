#include "Ejercicio03.h"


Node<int>* detectCycle(Node<int>* head) {
    Node<int>* lento = head;
    Node<int>* rapido = head;

    while (rapido != nullptr && rapido->next != nullptr) {
        lento = lento->next;
        rapido = rapido->next->next;
        if (lento == rapido) {
            break;
        }
    }


    if (rapido == nullptr || rapido->next == nullptr) {
        return nullptr;
    }

    lento = head;
    while (lento != rapido) {
        lento = lento->next;
        rapido = rapido->next;
    }

    return lento;
}
