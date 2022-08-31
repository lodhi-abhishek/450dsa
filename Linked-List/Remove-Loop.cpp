#include "Node.h"
#include <bits/stdc++.h>

using namespace std;
// https://www.youtube.com/watch?v=jcZtMh_jov0 <-Watch this 

Node * Detect(Node * head ) {

    Node * fast = head;
    Node * slow = head;

    while(fast && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;

        if(slow == fast)
            return slow;

    }
    return NULL;
}

Node* detectfirstNode(Node * head) {
    Node * meet = Detect(head);
    Node * start = head;

    while(start != meet) {
        start = start->next;
        meet = meet->next;
    }
    return start;

}
void removeLoop(Node* head) {
        if(head == NULL)
            return;
        
        Node *slow = head;
        Node *fast = head;
        Node *prev = NULL;        

        while(fast!= NULL && fast->next != NULL) {
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        
            if(slow == fast)
             break;
        }

        // If break statement was never invoked
        // below statment is for that
        
        if(slow != fast) return;
        
        Node *start = head;
        while(start != slow) {
            prev = slow;
            start = start->next;
            slow = slow->next;
        }
        prev->next = NULL;
}

int main(void) {

    Node * head = NULL;

    append(head,1);
    append(head,2);
    append(head,3);
    append(head,4);
    append(head,5);
}