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

    template <class T>
    T List::Remove(int location)
    {
        T returnValue; 
        
        if( location > this->size )
        {
            this->next = this->first;
            while( this->next->next != this->last )
            {
                this->next = this->next->next;
            }
            
            returnValue = this->last->content;
            
            this->next->next = nullptr;
            this->last = this->next;
        }
        else if( loaction == 0 || location == 1 )
        {
            returnValue = this->first->content;
            
            this->first = this->first->next;
            this->next = this->first;
        }
        else
        {
            int count = 1;
            this->next = this->first;
            while( count != (position - 1) )
            {
                this->next = this->next->next;
                count++;
            }
            
            returnValue = this->next->next->content;
            this->next = this->next->next->next;
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
