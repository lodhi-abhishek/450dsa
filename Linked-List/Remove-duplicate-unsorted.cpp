#include "Node.h"
#include <bits/stdc++.h>
using namespace std;

// void removeduplicate(Node *head) {
	
//     Node *ptr1, *ptr2, *dup;
//     ptr1 = head;
 
//     /* Pick elements one by one */
//     while (ptr1 != NULL && ptr1->next != NULL) {
//         ptr2 = ptr1;
 
//         /* Compare the picked element with rest
//            of the elements */
//         while (ptr2->next != NULL) {
//             /* If duplicate then delete it */
//             if (ptr1->data == ptr2->next->data) {
//                 /* sequence of steps is important here */
//                 dup = ptr2->next;
//                 ptr2->next = ptr2->next->next;
//                 delete (dup);
//             }
//             else /* This is tricky */
//                 ptr2 = ptr2->next;
//         }
//         ptr1 = ptr1->next;
//     }
// }

void removeduplicate(Node *head) {

	unordered_set<int> num;

	Node * curr = head;
	Node * prev = NULL;

	while(curr != NULL) {

		if(num.find(curr->data) != num.end()) {
			prev->next = curr->next;
			delete curr;
		}
		else {
			num.insert(curr->data);
			prev = curr;
		}
		curr = prev->next;
	}
}

int main() {

	Node * head = NULL;

	append(head,1);
	append(head,3);
	append(head,2);
	append(head,3);
	
	removeduplicate(head);
	Print(head);
	return 0;
}
