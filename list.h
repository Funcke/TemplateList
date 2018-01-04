
#ifndef _List_HH_
#define _List_HH_

namespace List{
    template <class T>
    class List
    {
        private:
            Node<T>* first;
            Node<T>* current;
            Node<T>* last;
            int size;

        public:
            //constructor
            List();
            List(T val);
            List(List<T>* src);

            //methods
            void Add(T value);
            void Add(List<T>* source);
            T Remove();
            T Remove(int position);
            void Insert(int, T);
            void Insert(int position, List<T>* source);
            void Insert(T);
            void Insert(List<T>* source);
            T Show();
            void Move();
            void Move(int);
            Node* First();
            Node* Last();
            int Size();
            std::vector<T>* List<T>::ToVector()
    };
}
#endif
