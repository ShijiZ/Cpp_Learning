//
//  Working_of_Friend_Function.cpp
//  Cpp_Leaning
//
//  Created by shiji zhao on 1/15/20.
//  Copyright © 2020 shiji zhao. All rights reserved.
//

#include <iostream>
using namespace std;

class Distance{
private:
    int meter;
    
public:
    Distance(): meter(0){}
    
    friend int addFive(Distance);
};

// firnd function definition
int addFive(Distance d){
    // accessing private data from non-member function
    d.meter += 5;
    return d.meter;
}

int main(){
    Distance D;
    cout << "Distance: " << addFive(D) << endl;
    return 0;
}
