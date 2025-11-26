//
// Created by Tetiana Perederii on 26.11.2025.
//

#ifndef P43_STACK_MYSTACK_H
#define P43_STACK_MYSTACK_H
#include <iostream>
using std::cout;
using std::endl;

namespace myStack {
    template <typename T>
    class Node {
    public:
        T info;
        Node* next;
        Node* prev;

        Node(T value) { info = value; next = prev = nullptr; }
    };


    template <typename U>
    class Stack {  // LIFO = Last in,  First out
        Node<U>* head;
        Node<U>* current;
    public:
        Stack() { head = current = nullptr;	}
        ~Stack() { 	}

        bool isEmpty()const {
            return head == nullptr || current == nullptr;
        }
        U top()const {
            if (isEmpty()) throw "Stack is empty";
            return current->info;
        }
        void push_back(U value) {
            Node<U> * item = new Node<U>(value);

            if (isEmpty())  head  = current = item;
            else {
                current->next = item;
                item->prev = current;
                current = item;
            }
        }
        void pop_back() {
            if (isEmpty()) throw "Stack is empty!";

            if (head != current) {
                current = current->prev;
                delete current->next;
                current->next = nullptr;
            }
            else {
                delete current;
                head = current = nullptr;
            }
        }
        void showStack()const{ ...	}
    };
}


#endif //P43_STACK_MYSTACK_H