//
//  Pass_and_Return_Object_from_the_Function.cpp
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
    
    Complex addComplexNumbers(Complex comp2){
        Complex temp;
        temp.real = real + comp2.real;
        temp.imag = imag + comp2.imag;
        
        return temp;
    }
    
    void displayData(){
        cout << "Sum = " << real << "+" << imag << "i" << endl;
    }
};

int main(){
    Complex c1, c2, c3;
    
    c1.readData();
    c2.readData();
    
    c3 = c1.addComplexNumbers(c2);
    
    c3.displayData();
    
    return 0;
}
