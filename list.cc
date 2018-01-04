#include <cstddef>
#include <vector>
#include "list.h"
#include "node.h"


namespace List{
    template <class T>
    List<T>::List()
    {
        this->first = new Node<T>();
        this->current = this->first->next;
        this->last = this->current;
        this->size = 1;
    }

    template <class T>
    List<T>::List(T val)
    {
        this->first = new Node<T>(val);
        this->current = this->first->next;
        this->last = this->current;
        this->size = 1;
    }

    template <class T>
    List<T>::List(List<T>* source) {
        this->first = source->First();
        this->current = this->first;
        this->last = source->Last();
        this->size = spurce->Size();
    }

    template <class T>
    void List<T>::Add(T value)
    {
        Node<T>* helper = new Node<T>(value);
        this->last->next = helper;
        this->last = this->last->next;
        this->size += 1;
    }

    /*
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
    */

    template <class T>


    template <class T>
    T List<T>::Remove()
    {
        Node<T>* helper = this->first;
        T returnValue;
        if( this->first == this->current )
        {
            if( this->current->next == nullptr)
            {
                returnValue = this->first->value;
                this->first = new Node<T>();
                this->current = this->first;
                this->last = this->first;
                return returnValue;
            }
            else
            {
                returnValue = this->first->value;
                this->first = this->first->next;
                this->current = this->first;
            }
        }
        else
        {
            helper = this->first;
            while( helper->next != this->current )
            {
                helper = helper->next;
            }

            returnValue = helper->next->value;
            helper->next = this->current->next;
            this->current = helper;
        }

        return returnValue;
    }

    template <class T>
    T List::Remove(int location)
    {
        T returnValue; 
        
        if( location > this->size )
        {
            this->current = this->first;
            while( this->current->next != this->last )
            {
                this->current = this->current->next;
            }
            
            returnValue = this->last->value;
            
            this->current->next = nullptr;
            this->last = this->current;
        }
        else if( loaction == 0 || location == 1 )
        {
            returnValue = this->first->value;
            
            this->first = this->first->next;
            this->current = this->first;
        }
        else
        {
            int count = 1;
            this->current = this->first;
            while( count != (position - 1) )
            {
                this->current = this->current->next;
                count++;
            }
            
            returnValue = this->current->next->value;
            this->current = this->current->next->next;
        }
        
        return returnValue;

    }

    template <class T>
    void List::Insert(int position, T value)
    {
        if( position >= this->size )
        {
            this->last->next = new Node(value);
            this->last = this->last->next;
        }
        else if( position == 0 || position == 1 )
        {
            Node* helper = new Node(value);
            helper->next = this->first;
            this->first = helper;
        }
        else
        {
            this->current = this->first;
            int count = 0;
            
            while( count + 1 != position )
            {
                Node* helper = new Node(value);
                helper->next = this->current->next;
                this->current->next = helper;
            }
        }
    }

    /*
    template <class T>
    void List::Insert(int position, Node<T>* target)
    {
        if( target != nullptr )
        {
            if( position == 0 || position == 1)
            {
                target->next = first;
                first = target;
            }
            else if ( position > this->size )
            {
                this->last->next =  target;
                this->last  = target;
            }
            else
            {
                this->next = this->first;
                int count = 1;
                while(count + 1 == position){
                    this->next = this->next->next;
                    count++;
                }
                target->next = this->next->next;
                this->next->next = target;
            }
        }
    }
    */

    template <class T>
    void List::Insert(T value)
    {
        this->last->next = new Node<T>(value);
        this->last = this->last->next;
    } 

    /*
    template <class T>
    void List::Insert(Node<T>* target)
    {
        if( target != nullptr )
        {
            this->last->next = target;
            this->last =  this->last->next;
        }
    }
    */

    template <class T>
    T List::Show()
    {
        return this->current->value;
    }
    
        template <class T>
    T List::Show(int position)
    {
        if( position == this->size )
        {
            this->current = this->first;
            count = 1;
            while( count != position )
            {
                this->current = this->current->next;
            }
    
            return this->current->value;
        }
        else
        {
            return default(T);
        }
    }
    
    template <class T>
    void List::Move()
    {
        if( this->current->next != nullptr )
        {
            this->current = this->current->next;
        }
    }
    
    template <class T>
    void List::Move(int position)
    {
        this->current = this->first;
        if( position > this->size )
        {
            this->current = this->last;
        }
        else  if( position < 1 )
        {
            this->current = this->first;
        }
        else
        {
            int count = 1;
            while ( count != position )
            {
                this->current  = this->current->next;
            }
        }
    }

    const Node* List<T>::First() {
        return this->first;
    }

    const Node* List<T>::Last() {
        return this->last;
    }

    int List<T>::Size() {
        return this->size;
    }

    std::vector<T>* List<T>::ToVector() {
        std::vector<T> vec;
        this->current = this->first;

        do{
            vec.push_back(this->current->value);
            this->current = this->current->next;
        }while(this->current != this->last);

        return &vec;
    }
}
