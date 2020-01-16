//
//  Addition_of_Members_of_Two_Classes.cpp
//  Cpp_Leaning
//
//  Created by shiji zhao on 1/16/20.
//  Copyright © 2020 shiji zhao. All rights reserved.
//

#include <iostream>
using namespace std;

// forward declaration
class B;
class A{
private:
    int numA;
    
public:
    A(): numA(12){}
    
    // friend function declaration
    friend int add(A, B);
};

class B{
private:
    int numB;
    
public:
    B(): numB(1){}
    
    // friend function declaration
    friend int add(A, B);
};

// Function add() is the friend function of classes A and B
// that accesses the member variables numA and numB
int add(A objA, B objB){
    return (objA.numA + objB.numB);
}

int main(){
    A objA;
    B objB;
    cout << "Sum: " << add(objA, objB) << endl;
    return 0;
}
