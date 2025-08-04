//  Naive approach
#include <iostream>
#include <vector>
using namespace std;

int suffixSum(vector<int> & arr){
    int size=arr.size();
    for(int i=size;i>=0;i--){
        arr[i]=arr[i+1]+arr[i];
    }

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}


int main(){
    vector<int> arr={15,10,25,5,10,20};
    suffixSum(arr);
    return 0;
}






//  Maximum Subarray Sum using Naive Approach
#include <iostream>
#include <vector>

using namespace std;

int maxSubSum(vector<int> &arr) {
    // instial max sum 
    int  smal = arr[0];
  

  	for(int i = 0; i < arr.size(); i++) {
    	int Sum = 0;
      

        for(int j = i; j < arr.size(); j++) {
        	Sum = Sum + arr[j];
          

            smal = max(smal, Sum);
        }
    }
    return smal;
}

int main() {
    vector<int> arr = {2, 3, -8, 7, -1, 2, 3};
    cout << maxSubSum(arr);
    return 0;
}




