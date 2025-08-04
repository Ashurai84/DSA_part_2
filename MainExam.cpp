// // Prefix Sum Implemnetion 

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {10, 20, 30, 40, 30};
    
    // Loop to compute prefix sums
    for (int i = 1; i < arr.size(); i++) {
        arr[i] = arr[i] + arr[i - 1];
    }

    // Print the prefix sum array
    for (int num : arr) {
        cout << num << " ";
    }

    return 0;
}




// 