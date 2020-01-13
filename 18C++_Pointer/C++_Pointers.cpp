//
//  C++_Pointers.cpp
//  Cpp_Leaning
//
//  Created by shiji zhao on 1/12/20.
//  Copyright © 2020 shiji zhao. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    int *pc, c;
    
    c = 5;
    cout << "Address of c (&c): " << &c << endl;
    cout << "Value of c (c): " << c << endl << endl;
    
    pc = &c;  // Pointer pc holds the memory address of variable c
    cout << "Address that pointer pc holds (pc): " << pc << endl;
    cout << "Contents of pointer pc holds (*pc): " << *pc << endl << endl;
    
    c = 11;   // The content inside memory address &c is changed from 5 to 11.
    cout << "Address that pointer pc holds (pc): " << pc << endl;
    cout << "Contents of pointer pc holds (*pc): " << *pc << endl << endl;
    
    *pc = 2;
    cout << "Address of c (&c): " << &c << endl;
    cout << "Value of c (c): " << c << endl << endl;
    
    return 0;
}
