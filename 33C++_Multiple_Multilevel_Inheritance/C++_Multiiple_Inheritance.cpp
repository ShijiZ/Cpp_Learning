//
//  C++_Multiiple_Inheritance.cpp
//  Cpp_Leaning
//
//  Created by shiji zhao on 1/15/20.
//  Copyright © 2020 shiji zhao. All rights reserved.
//

#include <iostream>
using namespace std;

class Mammal{
public:
    Mammal(){
        cout << "Mammals can give direct birth." << endl;
    }
};

class WingedAnimal{
public:
    WingedAnimal(){
        cout << "Winged animal can flap." << endl;
    }
};

class Bat: public Mammal, public WingedAnimal{
    
};

int main(){
    Bat b1;
    return 0;
}
