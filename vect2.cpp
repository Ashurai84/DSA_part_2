#include <iostream>
#include <vector>
using namespace std;

int main () {
vector<string> cars = {"volvo", "bmw " , "ford", "supra", "Mazda"};
// // change the value of the first element 
// cars[0]="opel";
// cout<<cars[0];

// // Another way to change the first elemnt 
// cars.at(0)="Honda";
// cout<<cars[0];


//  Push_Back() operation
cars.push_back("cars");
// Pop_back() operation 
cars.pop_back();



// Add in the first 
cars.insert(cars.begin(), "honda");

// Add in the last  
cars.insert(cars.end(), "honda");



  for (string car : cars) {
        cout << car << " ";
    }


return 0 ; 

}