//
//  C++_Pointers_to_Structure.cpp
//  Cpp_Leaning
//
//  Created by shiji zhao on 1/14/20.
//  Copyright © 2020 shiji zhao. All rights reserved.
//

#include <iostream>
using namespace std;

struct Distance{
    int feet;
    float inch;
};

int main(){
    Distance *ptr, d;
    
    ptr = &d;
    
    cout << "Enter feet: ";
    cin >> (*ptr).feet;
    cout << "Enter inch: ";
    cin >> (*ptr).inch;
    
    cout << "\nDisplaying information." << endl;
    cout << "Distance = " << (*ptr).feet << " feet " << (*ptr).inch << " inches\n";
    
    return 0;
}
