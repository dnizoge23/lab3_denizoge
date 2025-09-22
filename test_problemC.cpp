#include <iostream>
#include "lab3_problemC.h"

int main() {
    // Case 1: no cycle
    Node* a = new Node{1, nullptr};
    Node* b = new Node{2, nullptr};
    Node* c = new Node{3, nullptr};
    a->next = b;
    b->next = c;

    std::cout << "Test 1: "
              << (hasCycle(a) ? "true" : "false")
              << " (expected false)\n";

    // Case 2: cycle exists
    c->next = b; // create a cycle
    std::cout << "Test 2: "
              << (hasCycle(a) ? "true" : "false")
              << " (expected true)\n";

    return 0;
}
