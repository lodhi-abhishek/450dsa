#include "Node.h"
#include <bits/stdc++.h>

using namespace std;

Node * addone(Node *&head) {
    Node * ln = head;

    if(head->next == NULL) {
        head->data += 1;
        return head;
    }

    Node * temp = head;
    int prev;

    while(temp->next) {

        // Get the first 9 from the last node
        if(temp->data != 9) {
            ln = temp;
        }
        temp = temp->next;
    }

    if(temp->data == 9 && ln != NULL) {
        if(ln->data == 9 && ln == NULL) {
            // if the Node is the only node and has 9 value
            // The a new node has to be added for the carry 
            Node *Temp = new Node(1);
            Temp->next = head;
            
            head = Temp;
            Temp = ln;
        }
    else {
            temp = ln;
            temp->data += 1;
            temp = temp->next;
    }
    while(temp) {
            temp->data = 0;
            temp = temp->next;
        }
    }
    else {
        temp->data += 1;
    }
    return head;
}

int main() {
    Node * head = NULL;

    append(head,9);
    append(head,9);

    Print(addone(head));
}