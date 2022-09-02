#include "Node.h"
using namespace std;

Node* findIntersection(Node* head1, Node* head2) {
    if(head1 == NULL || head2 == NULL)
        return NULL;
        
    if(head1->data < head2->data)
        return findIntersection(head1->next,head2);
    
    if(head1->data > head2->data)
        return findIntersection(head1,head2->next);

    Node * temp = new Node(0);
    temp->data = head1->data;
    temp->next = findIntersection(head1->next,head2->next);
    
    return temp;
}

int main(void) {

	Node *first = NULL,*second = NULL;

	append(first,1);
	append(first,2);
	append(first,3);
	append(first,4);
	append(first,5);
	append(first,6);

	append(second,2);
	append(second,4);
	append(second,6);
	append(second,8);
	
	Print(findIntersection(first,second));
	return 0;
}
