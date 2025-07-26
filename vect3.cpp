// // BRUT FORCE TECHNIQUE

// #include <iostream>
// using namespace std;

// bool twoSum(int arr[], int size, int target) {
//     for (int i = 0; i < size; ++i) {
//         for (int j = i + 1; j < size; ++j) {
//             if (arr[i] + arr[j] == target) {
//                 return true;
//             }
//         }
//     }
//     return false;
// }

// int main() {
//     int arr[] = {0, -1, 2, -3, 1};
//     int size = sizeof(arr) / sizeof(arr[0]); 
//     int target = -2;

//     cout << (twoSum(arr, size, target) ? "true" : "false") << endl;
//     return 0;
// }





// // TWO POINTER TECHNIQUE 


#include <iostream>
using namespace std;

bool twoSum(int arr[], int n, int target) {
    sort(arr, arr + n);

    int left = 0; // starting point 
    int right = n - 1; // ending point 

    while (left < right) {
        int sum = arr[left] + arr[right];

        if (sum == target) {
            return true;
        } else if (sum < target) {
            left++;  // Need a larger sum
        } else {
            right--; // Need a smaller sum
        }
    }

    // Step 4: No pair found
    return false;
}

int main() {
    int arr[] = {0, -1, 2, -3, 1};
    int size = sizeof(arr) / sizeof(arr[0]); 
    int target = -2;

    cout << (twoSum(arr, size, target) ? "true" : "false") << endl;
    return 0;
}



