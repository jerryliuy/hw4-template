#include <vector>
#include "Node.h"

#pragma once


using namespace std;

template<class ItemType>
class SortedDoublyLinkedList {
    //DO NOT MODIFY THIS CLASS DECLARATION. FIND T-O-D-O-S to work on.
private:
    Node<ItemType> *head;
    Node<ItemType> *tail;
    int size;
public:

    SortedDoublyLinkedList();

    SortedDoublyLinkedList(Node<ItemType> *head, Node<ItemType> *tail, int size);

    SortedDoublyLinkedList(const SortedDoublyLinkedList<ItemType> &list);    // Copy constructor

    Node<ItemType> *getPointerTo(const ItemType &target) const;

    virtual ~ SortedDoublyLinkedList();    // Destructor should be virtual

    int getCurrentSize() const;

    bool isEmpty() const;

    bool add(const ItemType &newEntry);

    bool remove(const ItemType &anEntry);

    bool contains(const ItemType &anEntry) const;

    int getFrequencyOf(const ItemType &anEntry) const;

    vector<ItemType> toVector() const;

};

template<class ItemType>
SortedDoublyLinkedList<ItemType>::SortedDoublyLinkedList() : head(nullptr), tail(nullptr),
                                                             size(0) { }

template<class ItemType>
SortedDoublyLinkedList<ItemType>::SortedDoublyLinkedList(Node<ItemType> *head, Node<ItemType> *tail, int size) :
        head(head), tail(tail), size(size) { }

template<class ItemType>
SortedDoublyLinkedList<ItemType>::SortedDoublyLinkedList(const SortedDoublyLinkedList<ItemType> &list) {
    //TODO - Implement the copy constructor

}

template<class ItemType>
Node<ItemType> *SortedDoublyLinkedList<ItemType>::getPointerTo(const ItemType &target) const {
    //TODO - Return the Node pointer that contains the target(return nullptr if not found)

    return nullptr;
}

template<class ItemType>
SortedDoublyLinkedList<ItemType>::~SortedDoublyLinkedList() {
    //TODO - Implement the destructor

}

template<class ItemType>
int SortedDoublyLinkedList<ItemType>::getCurrentSize() const {
    //TODO - Return the current size

    return 0;
}

template<class ItemType>
bool SortedDoublyLinkedList<ItemType>::isEmpty() const {
    //TODO - Return True if the list is empty

    return true;
}

template<class ItemType>
bool SortedDoublyLinkedList<ItemType>::add(const ItemType &newEntry) {
    //TODO - Add an item to the sorted Doubly Linked list

    return false;
}

template<class ItemType>
bool SortedDoublyLinkedList<ItemType>::remove(const ItemType &anEntry) {
    //TODO - Remove the Item(anEntry) from the list - Return true if successful

    return false;
}

template<class ItemType>
bool SortedDoublyLinkedList<ItemType>::contains(const ItemType &anEntry) const {
    //TODO - Check if the List contains the Item(anEntry)- Return true if successful

    return false;
}

template<class ItemType>
int SortedDoublyLinkedList<ItemType>::getFrequencyOf(const ItemType &anEntry) const {
    //TODO - Return the frequency of the Item(anEntry) in the list

    return 0;
}

template<class ItemType>
vector<ItemType> SortedDoublyLinkedList<ItemType>::toVector() const {
    // DO NOT MODIFY THIS FUNCTION
    vector <ItemType> myVector;
    Node<ItemType> *cur;
    cur = this->head;
    while (cur != nullptr) {
        myVector.push_back(cur->getItem());
        cur = cur->getNext();
    }
    return myVector;
}

