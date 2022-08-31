/*
    1 -> 2 -> 3 -> 4 -> 5
    5 -> 1 -> 2 -> 3 -> 4
*/
#include "Node.h"
using namespace std;

void move(Node *&head) {

    if(head == NULL) return;

    Node* last = head;
    Node* sec_last = NULL;

    while(last->next != NULL) {
        sec_last = last;
        last = last->next;
    }

    // Got Second last and last node

    // Make second the last by making next pointer NULL
    // Make last node first by using head;

    sec_last->next = NULL;

    last->next = head;

    head = last;
}

int main() {
    Node * head = NULL;

    append(head,1);
    append(head,2);
    append(head,3);
    append(head,4);
    append(head,5);

    move(head);
    Print(head);
    return 0;
}