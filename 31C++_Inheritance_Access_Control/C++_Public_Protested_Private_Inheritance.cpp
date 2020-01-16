//
//  C++_Public_Protested_Private_Inheritance.cpp
//  Cpp_Leaning
//
//  Created by shiji zhao on 1/15/20.
//  Copyright © 2020 shiji zhao. All rights reserved.
//

#include <iostream>
using namespace std;

class base{
public:
    int x;
    
protected:
    int y;
    
private:
    int z;
};

class publicDerived: public base{
    // x is public
    // y is protected
    // z is not accessible
};

class protectedDerived: protected base{
    // x is protected
    // y is protected
    // z is not accessible
};

class privateDerived: private base{
    // x is private
    // y is private
    // z is not accessible
};

int main(){
    publicDerived pub;
    protectedDerived pro;
    privateDerived pri;
    
    cout << "Public class. x: " << pub.x << ", y: " << pub.y << endl;
    cout << "Protected class. x: " << pro.x << ", y: " << pro.y << endl;
    cout << "Private class. x: " << pri.x << ", y: " << pri.y << endl;
}
