//
//  Passing_Multidimensional_Array_to_a_Function.cpp
//  Cpp_Leaning
//
//  Created by shiji zhao on 1/12/20.
//  Copyright © 2020 shiji zhao. All rights reserved.
//

#include <iostream>
using namespace std;

void display(int n[3][2]);

int main(){
    int num[3][2] = {{3, 4}, {9, 5}, {7, 1}};
    display(num);
    
    return 0;
}

void display(int n[3][2]){
    cout << "Displaying Values: " << endl;
    for (int i = 0; i < 3; i++){
        for (int j=0; j < 2; j++){
            cout << n[i][j] << " ";
        }
    }
    cout << endl;
}
