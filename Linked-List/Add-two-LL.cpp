#include "Node.h"
using namespace std;

Node * AddLL(Node *first, Node *second) {

	Node * dummy = new Node(0);
	Node * temp = dummy;
	int carry = 0;

	while(first != NULL || second != NULL || carry!=0) {

		int sum = 0;
		if(first != NULL) {
			sum += first->data;
			first = first->next;
		}

		if(second != NULL) {
			sum += second->data;
			second = second->next;
		}

		sum += carry;
		carry = sum/10;

		Node * node = new Node(sum % 10);
		temp->next = node;
		temp = temp->next;
	}
	return dummy->next;
}

int main(void) {
	Node * first = NULL;
	Node * second = NULL;

	append(first,1);
	append(first,2);
	append(first,3);

	append(second,1);
	append(second,2);
	append(second,3);

	Print(AddLL(first,second));
	return 0;
}
