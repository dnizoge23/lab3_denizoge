#include <iostream>
#include "lab3_problemA.h"
blah
int main() {
    int arr1[] = {1, 2, 2, 3, 4};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    std::cout << "Test 1: "
              << longestIncreasingSubarray(arr1, size1) << " (expected 3)\n";

    int arr2[] = {5, 6, 7, 8, 9};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    std::cout << "Test 2: "
              << longestIncreasingSubarray(arr2, size2) << " (expected 5)\n";

    int arr3[] = {10, 9, 8, 7};
    int size3 = sizeof(arr3) / sizeof(arr3[0]);
    std::cout << "Test 3: "
              << longestIncreasingSubarray(arr3, size3) << " (expected 1)\n";

    return 0;
}
