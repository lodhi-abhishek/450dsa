#include <bits/stdc++.h>
#include "Node.h"

using namespace std;

bool LoopDetect(Node * head) {

	unordered_set<Node *> s;

	while( head != NULL) {

		if(s.find(head) != s.end()) { // Find return iterator of that variable else return end iteartor
			// This condition check in head is already in the set or not
			return true;
		}
		s.insert(head);
		head = head->next;
	}
	return false;
}

// Another Approach  Floyd’s Cycle-Finding Algorithm 
/*
    Traverse linked list using two pointers.
    Move one pointer(slow_p) by one and another pointer(fast_p) by two.
    If these pointers meet at the same node then there is a loop. 
    If pointers do not meet then linked list doesn’t have a loop.
*/

bool detect(Node * list) {

    Node *slow_p = list, *fast_p = list;

    while(slow_p && fast_p && fast_p->next) {
        slow_p = slow_p->next;
        fast_p = fast_p->next;

        if(slow_p == fast_p) {
            return true;
        }
    }
    return false;
}

int main() {
	Node * head = NULL;

	append(head,2);
	append(head,3);
	append(head,4);
	append(head,5);
	
	head->next->next->next->next = head;
	cout << LoopDetect(head) << "\n";
	return 0;
}