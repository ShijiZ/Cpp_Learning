//
//  C++_Pointers_and_Arrays3.cpp
//  Cpp_Leaning
//
//  Created by shiji zhao on 1/12/20.
//  Copyright © 2020 shiji zhao. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    float arr[5];
    
    // Inserting data using pointer natation
    cout << "Enter 5 numbers: ";
    for (int i = 0; i < 5; i++){
        cin >> *(arr + i);
    }
    
    // Displaying data using pointer notation
    cout << "Displaying data: " << endl;
    for (int i=0; i<5; i++){
        cout << *(arr + i) << endl;
    }
    return 0;
}
