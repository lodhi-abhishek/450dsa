#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
        int data;
        Node * next;
};

void append(Node * &head, int input) {
    Node * new_node = new Node();
    new_node -> data = input;
    new_node -> next = NULL;

    if(head == NULL) {
        head = new_node;
        return;
    }

    Node * temp = head;
    while(temp ->next != NULL) {
        temp = temp->next;
    }

    temp->next = new_node;
}

void PrintAllNode(Node * head) {
    Node * temp = head;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp  = temp->next;
    }
    cout << "\n";
}

Node* reverse(Node *head,int k) {

    Node * prev = NULL;
    Node * curr = head;
    Node * next = NULL;

    int count = 0;
    if(!head)
        return NULL;

    while(curr != NULL && count < k) {
        next = curr->next;
        curr->next = prev;

        prev = curr;
        curr = next;
        ++count;
    }

    if(next != NULL)
        head->next = reverse(head,k);

    return prev;
}

int main(void) {
    Node * head = NULL;

    append(head,1);
    append(head,2);
    append(head,3);
    append(head,4);
    append(head,5);
    append(head,6);
    append(head,7);
    append(head,8);
    append(head,9);
	
	Node * temp = reverse(head,3);
    PrintAllNode(temp);
    return 0;
}
