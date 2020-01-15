//
//  Operator_Overloading.cpp
//  Cpp_Leaning
//
//  Created by shiji zhao on 1/15/20.
//  Copyright © 2020 shiji zhao. All rights reserved.
//

#include <iostream>
using namespace std;

class Test{
private:
    int count;
    
public:
    Test(): count(5){}
    
    void operator ++(){
        count = count + 1;
    }
    
    void Display(){
        cout << "Count: " << count << endl;
    }
};

int main(){
    Test t;
    
    // This calls "void operator ++()" function
    ++t;
    t.Display();
    return 0;
}
