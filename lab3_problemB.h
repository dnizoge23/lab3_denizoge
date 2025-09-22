#ifndef LAB3_PROBLEMB_H
#define LAB3_PROBLEMB_H

struct Node {
    int value;
    Node* next;
};

/**
 * Calculate the length of a given linked list
 *
 * For example:
 *   1 -> NULL
 *   The length is 1.
 *
 *   1 -> 2 -> 3 -> NULL
 *   The length is 3.
 *
 * @param head pointer to the head of the linked list
 * @return the length of the given linked list
 */
int length(Node* head);

#endif // LAB3_PROBLEMB_H
