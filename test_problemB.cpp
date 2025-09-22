#include <iostream>
#include "lab3_problemB.h"

int main() {
    Node* a = new Node{1, nullptr};
    Node* b = new Node{2, nullptr};
    Node* c = new Node{3, nullptr};
    a->next = b;

    std::cout << "Test 1: "
              << length(a) 
              << " (expected 2)\n";

    b->next = c;
    std::cout << "Test 2: "
              << length(a)
              << " (expected 3)\n";

    return 0;
}
