#include "Ejercicio02.h"

Node<char>* reverseKGroup(Node<char>* head, int k) {
    Node<char>* current = head;
    Node<char>* next = nullptr;
    Node<char>* prev = nullptr;
    int count = 0;

    while (current != nullptr && count < k) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
        count++;
    }

    if (next != nullptr) {
        head->next = reverseKGroup(next, k);
    }

    return prev;
}
