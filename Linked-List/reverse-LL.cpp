#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

class Node {
    public:
        int data;
        Node * next;
};

void insert(Node *&head,int input) {
    Node * new_node = new Node();
    new_node->data = input;

    if(head == NULL) {
        head = new_node;
        return;
    }
    Node * temp = head;

    while(temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = new_node;
}

/*
    Initialize three pointers prev as NULL, curr as head and next as NULL.

    Iterate through the linked list. In loop, do following. 
    // Before changing next of current, 
    // store next node 
    next = curr->next

    // Now change next of current 
    // This is where actual reversing happens 

    curr->next = prev 

    // Move prev and curr one step forward 

    prev = curr 
    curr = next
*/
Node * reverseList(Node* head) {

    Node * prev = NULL;
    Node * curr = head;

    while(curr != NULL) {
        Node *temp  = curr->next;

        curr->next = prev;

        prev = curr;
        curr = temp;
    }
    return prev;
}

void PrintAllNode(Node *head) {
    Node * temp = head;

    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << "\n";
}

int main() {

    Node * head = NULL;
    insert(head,3);
    insert(head,4);
    insert(head,5);

    PrintAllNode(head);
    Node * rev_head = reverseList(head);
    PrintAllNode(rev_head);
    return 0;
}