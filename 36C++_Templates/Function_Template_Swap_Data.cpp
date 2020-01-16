//
//  Function_Templates_Swap_Data.cpp
//  Cpp_Leaning
//
//  Created by shiji zhao on 1/16/20.
//  Copyright © 2020 shiji zhao. All rights reserved.
//

#include <iostream>
using namespace std;

template <typename T>
void Swap(T &n1, T &n2){
    T temp;
    temp = n1;
    n1 = n2;
    n2 = temp;
}

int main(){
    int i1 = 1, i2 = 2;
    float f1 = 1.1, f2 = 2.2;
    char c1 = 'a', c2 = 'b';
    
    cout << "Before passing data to function template.\n";
    cout << "i1 = " << i1 << "\ni2 = " << i2;
    cout << "\nf1 = " << f1 << "\nf2 = " << f2;
    cout << "\nc1 = " << c1 << "\nc2 = " << c2 << endl;
    
    Swap(i1, i2);
    Swap(f1, f2);
    Swap(c1, c2);
    
    cout << "\nAfter passing data to function template.\n";
    cout << "i1 = " << i1 << "\ni2 = " << i2;
    cout << "\nf1 = " << f1 << "\nf2 = " << f2;
    cout << "\nc1 = " << c1 << "\nc2 = " << c2 << endl;
    
    return 0;
}
