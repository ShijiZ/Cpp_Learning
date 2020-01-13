//
//  Three_Dimensional_Array.cpp
//  Cpp_Leaning
//
//  Created by shiji zhao on 1/12/20.
//  Copyright © 2020 shiji zhao. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    // This array can store upto 12 elements (2x3x2)
    int test[2][3][2];
    
    cout << "Enter 12 values: \n";
    
    // Insert the values into the array using 3 nested for loops
    for (int i=0; i<2; i++){
        for (int j=0; j<3; j++){
            for (int k=0; k<2; k++){
                cin >> test[i][j][k];
            }
        }
    }
    
    cout << "\nDisplaying Value stored: " << endl;
    
    // Displaying the values with proper index
    for (int i=0; i<2; i++){
        for (int j=0; j<3; j++){
            for (int k=0; k<2; k++){
                cout << "test[" << i << "][" << j << "][" << k << "] = " << test[i][j][k] << endl;
            }
        }
    }
    
    return 0;
}
