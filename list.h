
#ifndef _List_HH_
#define _List_HH_

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

    template <class T>
    class List
    {
        private:
            Node<T>* first;
            Node<T>* next;
            Node<T>* last;
            int size;

        public:
            //constructor
            List();
            List(T val);
            List(Node<T>* init);

            //methods
            void Add(T value);
            void Add(Node<T>* target);
            T Remove();
            T Remove(int position);
            void Insert(int, T);
            void Insert(int, Node<T>*);
            void Insert(T);
            void Insert(Node<T>*);
            T Show();
            void Move();
            void Move(int);
    };

    /*
    template<class T>
    class Node
    {
        public:
            T value;
            Node<T>* next;
            
            Node();
            Node(T val);
            Node(T val, Node<t>* next);
    };
    */
#endif