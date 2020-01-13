//
//  Passing_One_Dimensional_Array_to_a_Function.cpp
//  Cpp_Leaning
//
//  Created by shiji zhao on 1/12/20.
//  Copyright © 2020 shiji zhao. All rights reserved.
//

#include <iostream>
using namespace std;

void display(int marks[5]);

int main(){
    int marks[5] = {88, 76, 90, 61, 69};
    display(marks);
    return 0;
}

void display(int m[5]){
    cout << "Displaying marks: " << endl;
    
    for (int i=0; i<5; i++){
        cout << "Student " << i+1 << ": " << m[i] << endl;
    }
}
