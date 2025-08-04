





// Kadane's Algorithm Implementation
#include <iostream>
#include <vector>
using namespace std;
int maxSubSum(vector<int> &arr) {
    int maxSum = arr[0];
    int currentSum = arr[0];

    for (int i = 1; i < arr.size(); i++) {
        currentSum = max(arr[i], currentSum + arr[i]);
        maxSum = max(maxSum, currentSum);
    }
    
    return maxSum;
}
int main() {
    vector<int> arr = {2, 3, -8, 7, -1, 2, 3};
    cout << maxSubSum(arr);
    return 0;
}