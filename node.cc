#include <cstddef>
#include "node.h"

namespace List {
    template <class T>
    Node<T>::Node()
    {
        this->next = nullptr;
    }

    template <class T>
    Node<T>::Node(T val)
    {
        this->value = val;
        this->next = nullptr;
    }

    template <class T>
    Node<T>::Node(T val, Node<T>* next)
    {
        this->value = val;
        this->next = next;
    }
}