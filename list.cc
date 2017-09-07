#include <cstddef>
#include "list.h"

    template <class T>
    List<T>::List()
    {
        this->first = new Node<T>();
        this->next = this->first->next;
        this->last = this->next;
        this->size = 1;
    }

    template <class T>
    List<T>::List(T val)
    {
        this->first = new Node<T>(val);
        this->next = this->first->next;
        this->last = this->next;
        this->size = 1;
    }

    template <class T>
    List<T>::List(Node<T>* init)
    {
        if( init != nullptr )
        {
            this->first = init;
            if( init->next != nullptr ){
                this->next = init->next;
                while( init->next != nullptr ){
                    init = init->next;
                }
                this->last =  init;
            }
            else
            {
                this->next = this->first->next;
                this->last = this->next;
            }
        }
        else
        {
            this->first = new Node<T>();
            this->next = this->first->next;
            this->last = this->next;
        }
        this->size = 1;
    }

    template <class T>
    void List<T>::Add(T value)
    {
        Node<T>* helper = new Node<T>(value);
        this->last->next = helper;
        this->last = this->last->next;
        this->size += 1;
    }

    template <class T>
    void List<T>::Add(Node<T>* target)
    {
        if( target != nullptr )
        {
            this->last->next = target;
            this->last = this->last->next;
            this->size += 1;
        }
    }

    template <class T>
    T List<T>::Remove()
    {
        Node<T>* helper = this->first;
        T returnValue;
        if( this->first == this->next )
        {
            if( this->next->next == nullptr)
            {
                returnValue = this->first->value;
                this->first = new Node<T>();
                this->next = this->first;
                this->last = this->first;
                return returnValue;
            }
            else
            {
                returnValue = this->first->value;
                this->first = this->first->next;
                this->next = this->first;
            }
        }
        else
        {
            helper = this->first;
            while( helper->next != this->next )
            {
                helper = helper->next;
            }

            returnValue = helper->next->value;
            helper->next = this->next->next;
            this->next = helper;
        }

        return returnValue;
    }

    template <class  T>
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