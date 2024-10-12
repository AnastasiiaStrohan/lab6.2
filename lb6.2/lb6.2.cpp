#include <iostream>
#include <vector>
#include <iomanip> 

void printArrayRecursive(const std::vector<int>& arr, int index) {
    if (index == arr.size()) {
        std::cout << std::endl;
        return;
    }
    std::cout << std::setw(4) << arr[index];
    printArrayRecursive(arr, index + 1);
}


int findMinEvenRecursive(const std::vector<int>& arr, int index, int minEven) {
   
    if (index == arr.size()) {
        return minEven;
    }

    
    if (arr[index] % 2 == 0 && (minEven == -1 || arr[index] < minEven)) {
        minEven = arr[index];
    }

    
    return findMinEvenRecursive(arr, index + 1, minEven);
}


int main() {
    
    std::vector<int> arr = { 17, 12, 3, 6, 5, 10, 8 };

    
    std::cout << "" << std::endl;
    printArrayRecursive(arr, 0);

    int minEven = findMinEvenRecursive(arr, 0, -1);

    
    if (minEven != -1) {
        std::cout << "min " << minEven << std::endl;
    }
   

    return 0;
}
