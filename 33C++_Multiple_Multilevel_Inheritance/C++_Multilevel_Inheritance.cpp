//
//  C++_Multilevel_Inheritance.cpp
//  Cpp_Leaning
//
//  Created by shiji zhao on 1/15/20.
//  Copyright © 2020 shiji zhao. All rights reserved.
//

#include <iostream>
using namespace std;

class A{
public:
    void display(){
        cout << "Base class content." << endl;
    }
};

class B : public A{
    
};

class C : public B{
    
};

int main(){
    C obj;
    obj.display();
    return 0;
}
