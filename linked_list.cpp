//  sort linked_ist using merge sort
#include <iostream>
#include <vector>
using namespace std;
int suffixSum(vector<int> & arr){
    int size = arr.size();
    // Adjust the loop to prevent out-of-bounds access
    for(int i = size - 1; i >= 0; i--){
        if (i + 1 < size) {
            arr[i] += arr[i + 1];
        }
    }

    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
int main(){
    vector<int> arr = {15, 10, 25, 5, 10, 20};
    suffixSum(arr);
    return 0;
}

 