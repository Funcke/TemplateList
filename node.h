#ifndef _NODE_HH_
#define _NODE_HH_

namespace List {
    template<class T>
    class Node
    {
    public:
        T value;
        Node<T>* next;
        
        Node();
        Node(T val);
        Node(T val, Node<T>* next);
    };
}
#endif