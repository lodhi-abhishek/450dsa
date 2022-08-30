#include <bits/stdc++.h>
#include "Node.h"
using namespace std;

/*
Class is declared in Node.h file
and functions like Print and append are also in it.
*/


Node * reverse(Node * head, int k) {

    if(!head)
        return NULL;
    Node * prev_node = NULL;
    Node * curr_node = head;
    Node * next_node = NULL;

    int count = 0;
    while(curr_node != NULL && count < k) {
        next_node = curr_node->next;
        curr_node->next = prev_node;

        prev_node = curr_node;
        curr_node = next_node; 
        ++count;
    }

    if(next_node != NULL)
        head->next = reverse(next_node,k);

    return prev_node;
}

int main() {
    Node *head = NULL;

    append(head,1);
    append(head,2);
    append(head,3);
    append(head,4);
    append(head,5);
    append(head,6);
    append(head,7);
    append(head,8);
    append(head,9);

    Print(reverse(head,3));
    return 0;
}