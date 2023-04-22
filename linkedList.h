#ifndef LINKEDLIST_LINKEDLIST_H
#define LINKEDLIST_LINKEDLIST_H

#include <iostream>
class List {
public:
    List();
    ~List();

    void push_back(int data);           // add element in the end
    void push_front(int data);          // add element in the beginning
    void insert(int data, int index);   // add element by index
    void removeAt(int index);           // remove element by index
    void remove(int data);              // remove element by its value
    int& operator[] (int index);        // find element by index
    int find(int data);                // find element by its value
    void printElements();               // console output


    int getSize() {return size;};
    void pop_front();
    void clear();



private:
    // class for elements of our linked list
    class Node{
    public:
        Node *ptrNext;  // pointer to the next element
        int data;       // value of the element

        // constructor of the class Node
        Node(int data = 0, Node *ptrNext = nullptr){
            this->data = data;
            this->ptrNext = ptrNext;
        }

    };

    Node *head;     // pointer to head of list
    int size;       // number of items in the list
};

#endif //LINKEDLIST_LINKEDLIST_H
