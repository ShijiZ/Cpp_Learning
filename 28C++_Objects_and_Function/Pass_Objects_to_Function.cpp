//
//  Pass_Objects_to_Function.cpp
//  Cpp_Leaning
//
//  Created by shiji zhao on 1/14/20.
//  Copyright © 2020 shiji zhao. All rights reserved.
//

#include <iostream>
using namespace std;

class Complex{
private:
    int real;
    int imag;
    
public:
    Complex(): real(0), imag(0){}
    
    void readData(){
        cout << "Enter real and imaginary number respectively:" << endl;
        cin >> real >> imag;
    }
    
    void addComplexNumbers(Complex comp1, Complex comp2){
        // real represents the real data of object c3 because this function
        // is called using code c3.add(c1, c2)
        real = comp1.real + comp2.real;
        
        // imag represents the imag data of object c3 because this function
        // is called using code c3.add(c1, c2)
        imag = comp1.imag + comp2.imag;
    }
    
    void displaySum(){
        cout << "Sum = " << real << "+" << imag << "i" << endl;
    }
};

int main(){
    Complex c1, c2, c3;
    
    c1.readData();
    c2.readData();
    
    c3.addComplexNumbers(c1, c2);
    c3.displaySum();
    
    return 0;
}
