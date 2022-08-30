#include <iostream>

class Node {
    public:
        int data;
        Node * next;

    Node(int input) {
        data = input;
        next = NULL;
    }
};


void append(Node *&head, int input) {
    Node * new_node = new Node(input);

    if(head == NULL) {
        head = new_node;
    }
    else {
        Node * temp = head;
        while(temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = new_node;
    }
}

void Print(Node *head) {
    Node * temp = head;

    while(temp != NULL) {
        std::cout << temp->data << " ";
        temp = temp->next;
    }
    std::cout << "\n";
}