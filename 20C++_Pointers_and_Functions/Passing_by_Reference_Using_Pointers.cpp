//
//  Passing_by_Reference_Using_Pointers.cpp
//  Cpp_Leaning
//
//  Created by shiji zhao on 1/12/20.
//  Copyright © 2020 shiji zhao. All rights reserved.
//

#include <iostream>
using namespace std;

void swap(int*, int*);

int main(){
    int a = 1, b = 2;
    cout << "Before swapping" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
        
    cout << "\nDuring swapping" << endl;
    swap(&a, &b);
        
    cout << "\nAfter swapping" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
        
    return 0;
}

void swap(int* n1, int* n2){
    int temp;
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
    cout << "temp = " << temp << endl;
    cout << "n1 = " << n1 << endl;
    cout << "n2 = " << n2 << endl;
}
