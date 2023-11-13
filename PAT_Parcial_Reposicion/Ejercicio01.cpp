#include "Ejercicio01.h"
#include <list>
#include <iostream>

struct Node {
    int data;
    Node* next;

    Node(int val) : data(val), next(nullptr) {}
};

class Ejercicio01 {
public:
    Node* addTwoNumbers(Node* l1, int sizeL1, Node* l2, int sizeL2);
};

Node* Ejercicio01::addTwoNumbers(Node* l1, int sizeL1, Node* l2, int sizeL2) {
    std::list<int> Lista3;
    int aux = 0;

    while (l1 != nullptr && l2 != nullptr) {
        int suma = l1->data + l2->data + aux;
        aux = suma / 10;
        Lista3.push_back(suma % 10);

        l1 = l1->next;
        l2 = l2->next;
    }

    while (l1 != nullptr) {
        int suma = l1->data + aux;
        aux = suma / 10;
        Lista3.push_back(suma % 10);
        l1 = l1->next;
    }

    while (l2 != nullptr) {
        int suma = l2->data + aux;
        aux = suma / 10;
        Lista3.push_back(suma % 10);
        l2 = l2->next;
    }

    if (aux > 0) {
        Lista3.push_back(aux);
    }
    return nullptr;
}