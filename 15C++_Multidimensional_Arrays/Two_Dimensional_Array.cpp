//
//  Two_Dimensional_Array.cpp
//  Cpp_Leaning
//
//  Created by shiji zhao on 1/12/20.
//  Copyright © 2020 shiji zhao. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    int test[3][2] = {{2, -5}, {4, 0}, {9, 1}};
    
    // Access 2-d array using nexted for loops
    for (int i=0; i<3; i++){
        for (int j=0; j<2; j++){
            cout << "test[" << i << "][" << j << "] = " << test[i][j] <<endl;
        }
    }
    
    return 0;
}
