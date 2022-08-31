#include <bits/stdc++.h>
#include "Node.h"
using namespace std;

int getMiddle(Node *head) {
        // Your code here
        if(head == NULL)
            return head->data;
        
        Node * slow_node = head;
        Node * fast_node = head;
        
        // For even length the middle can be 2 numbers
        // I order to get right the code is same
        // But for left middle fast_node = head->next;
        
        while(fast_node != NULL && fast_node->next != NULL) {
            slow_node = slow_node->next;
            
            fast_node = fast_node->next->next;
        }
        
        return slow_node->data;
}

int main() {
    Node * head = NULL;

    append(head,1);
    append(head,2);
    append(head,3);
    append(head,4);
    append(head,5);

    cout << getMiddle(head);
    return 0;
}