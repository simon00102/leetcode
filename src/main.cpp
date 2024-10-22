#include "problems/p88/p88.cpp"
#include <stdio.h>
#include <vector>

int main(void)
{
    printf("Hello, World!\n");
    P88::Solution solution;
    std::vector<int> arr1 = {1, 2, 3, 0, 0, 0};
    std::vector<int> arr2 = {2, 5, 6};
    solution.merge(arr1, 3, arr2, 3);
    return 0;
}