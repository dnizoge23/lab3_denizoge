#ifndef LAB3_PROBLEMC_H
#define LAB3_PROBLEMC_H

struct Node {
    int value;
    Node* next;
};

/**
 * Determine whether a linked list contains a cycle.
 *
 * A cycle means that by continuously following "next" pointers,
 * you will eventually revisit a node instead of reaching NULL.
 *
 * For example:
 *   1 -> 2 -> 3 -> 4 -> 2 (back to node with value 2)
 *   This list has a cycle.
 *
 *   1 -> 2 -> 3 -> NULL
 *   This list has no cycle.
 *
 * You should implement an algorithm with O(n) time complexity
 *
 * @param head pointer to the head of the linked list
 * @return true if the list contains a cycle, false otherwise
 */
bool hasCycle(Node* head);

#endif // LAB3_PROBLEMC_H
