
#ifndef _List_HH_
#define _List_HH_

#include <mutex>
#include "node.h"

namespace List{
    using namespace std;
    template <class T>
    class List
    {
        private:
            Node<T>* first;
            Node<T>* current;
            Node<T>* last;
            int size;
            std::mutex lock;

        public:
            //constructor
            List();
            List(T val);
            List(List<T>* src);

            //methods
            bool Add(T value);
            bool Add(List<T>* source);
            T Remove();
            T Remove(int position);
            void Insert(int, T);
            //void Insert(int position, List<T>* source);
            void Insert(T);
            void Insert(List<T>* source);
            T Show();
            T Show(int position);
            void Move();
            void Move(int);
            const Node<T>* First();
            const Node<T>* Last();
            int Size();
            //std::vector<T>* List<T>::ToVector()
    };
}
#endif
