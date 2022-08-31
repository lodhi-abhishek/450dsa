#include "Node.h"
#include <bits/stdc++.h>
using namespace std;

void removeDuplicate(Node *head) {
    Node * first = head;
	Node * second = first->next;

	while(first->next != NULL) {
		if(first->data == second->data) {
			first->next = second->next;
			second = first->next;
		}
		else {
		first = first->next;
		second = first->next;
		}
	}
}

int main(void) {
	Node * head = NULL;

	append(head,2);
	append(head,2);
	append(head,2);
	append(head,4);
	append(head,5);

	removeDuplicate(head);
	Print(head);
	return 0;
}
