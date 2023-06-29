#include <iostream>

using namespace std;

class Node{
public :
    int data;
    Node* next;

    Node(){data = 0, next=nullptr;}
    Node(int data){
        this->data = data;
        this->next = nullptr;
    }
};

class LinkedList {
    Node* head;
public:
    LinkedList() {head = nullptr;}
    void insertNode(int);
    void printNode();
    void deleteNode(int);

};

void LinkedList::insertNode(int data){
    Node* newNode = new Node(data);

    if(head == nullptr){
        head = newNode;
        return;
    }

    Node* tmp = head;
    while(tmp->next != nullptr){
        tmp = tmp->next;
    }
    tmp -> next = newNode;
}

void LinkedList::printNode(){
    Node* tmp = head;
    while(tmp->next != nullptr){
        cout << tmp->data << " ";
        tmp = tmp -> next;
    }
}



int main(){
    LinkedList myLL;

    myLL.insertNode(2);
    myLL.insertNode(232);
    myLL.insertNode(1);
    myLL.insertNode(434);

    myLL.printNode();
}