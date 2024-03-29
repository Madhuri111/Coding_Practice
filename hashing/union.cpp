// C++ program to find union and intersection of
// two unsorted linked lists in O(m+n) time.
#include <bits/stdc++.h>
using namespace std;

/* Link list node */
struct Node {
	int data;
	struct Node* next;
};

/* A utility function to insert a node at the
beginning of a linked list*/
void push(struct Node** head_ref, int new_data)
{
	/* allocate node */
	struct Node* new_node = (struct Node*)malloc(
		sizeof(struct Node));

	/* put in the data */
	new_node->data = new_data;

	/* link the old list off the new node */
	new_node->next = (*head_ref);

	/* move the head to point to the new node */
	(*head_ref) = new_node;
}

/* Utility function to store the
elements of both list */
void storeEle(struct Node* head1, struct Node* head2,
			unordered_map<int, int>& eleOcc)
{
	struct Node* ptr1 = head1;
	struct Node* ptr2 = head2;

	// Traverse both lists
	while (ptr1 != NULL || ptr2 != NULL) {
		// store element in the map
		if (ptr1 != NULL) {
			eleOcc[ptr1->data]++;
			ptr1 = ptr1->next;
		}

		// store element in the map
		if (ptr2 != NULL) {
			eleOcc[ptr2->data]++;
			ptr2 = ptr2->next;
		}
	}
}

/* Function to get the union of two
linked lists head1 and head2 */
struct Node* getUnion(
	unordered_map<int, int> eleOcc)
{
	struct Node* result = NULL;

	// Push all the elements into
	// the resultant list
	for (auto it = eleOcc.begin(); it != eleOcc.end(); it++)
		push(&result, it->first);

	return result;
}

/* Function to get the intersection of
two linked lists head1 and head2 */
struct Node* getIntersection(
	unordered_map<int, int> eleOcc)
{
	struct Node* result = NULL;

	// Push a node with an element
	// having occurrence of 2 as that
	// means the current element is
	// present in both the lists
	for (auto it = eleOcc.begin();
		it != eleOcc.end(); it++)
		if (it->second == 2)
			push(&result, it->first);

	// return resultant list
	return result;
}

/* A utility function to print a linked list*/
void printList(struct Node* node)
{
	while (node != NULL) {
		printf("%d ", node->data);
		node = node->next;
	}
}

// Prints union and intersection of
// lists with head1 and head2.
void printUnionIntersection(Node* head1,
							Node* head2)
{
	// Store all the elements of
	// both lists in the map
	unordered_map<int, int> eleOcc;
	storeEle(head1, head2, eleOcc);

	Node* intersection_list = getIntersection(eleOcc);
	Node* union_list = getUnion(eleOcc);

	printf("\nIntersection list is \n");
	printList(intersection_list);

	printf("\nUnion list is \n");
	printList(union_list);
}

/* Driver program to test above function*/
int main()
{
	/* Start with the empty list */
	struct Node* head1 = NULL;
	struct Node* head2 = NULL;

	/* create a linked list 11->10->15->4->20 */
	push(&head1, 1);
	push(&head1, 2);
	push(&head1, 3);
	push(&head1, 4);
	push(&head1, 5);

	/* create a linked list 8->4->2->10 */
	push(&head2, 1);
	push(&head2, 3);
	push(&head2, 5);
	push(&head2, 6);

	printf("First list is \n");
	printList(head1);

	printf("\nSecond list is \n");
	printList(head2);

	printUnionIntersection(head1, head2);

	return 0;
}

