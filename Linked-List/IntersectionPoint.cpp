#include "Node.h"
using namespace std;

/*
 * Get the count of the nodes in the first list, let the count be c1.
 * Get the count of the nodes in the second list, let the count be c2.
 * Get the difference of counts d = abs(c1 – c2)
 * Now traverse the bigger list from the first node to d nodes so that from here onwards both 
 * the lists have an equal no of nodes
 * Then we can traverse both lists in parallel till we come across a common node.
 * */
int getCount(Node *head) {
	Node * temp = head;
	int count = 0;

	while(temp != NULL) { 
		count++;
		temp = temp->next;
	}
	return count;
}

int Solve(Node *first, Node * second) {
	
	int c1 = getCount(first),d;
	int c2 = getCount(second);

	if(c1 > c2) {
		d = c1 - c2;
		return getIntersection(first,second,d);
	}
	else {
		d = c2 - c1;
		return getIntersection(second,first,d);
	}
}

int getIntersection(Node *first,Node *second,int index) {
	Node *curr1 = first;
	Node *curr2 = second;
	
	int count = 0;
	while(curr1!=NULL && count != index) {
		curr1 = curr1->next;
		++count;
	}

	while(curr1!=NULL && curr2!=NULL) {
		if(curr1 == curr2)
			return curr1->data;

		curr1 = curr1->next;
		curr2 = curr2->next;
	}
	return -1;


}
int main(void) {
	Node * first = NULL;
	Node * second = NULL;

}
