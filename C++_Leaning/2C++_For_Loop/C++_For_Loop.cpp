//
//  C++_For_Loop.cpp
//  C++_Leaning
//
//  Created by shiji zhao on 1/10/20.
//  Copyright © 2020 shiji zhao. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    int i, n, factorial = 1;
    cout << "Enter a postive interger: ";
    cin >> n;
    
    for (i = 0; i <= n; i++){
        factorial *= i;
    }
    
    cout << "Factorial of " << n << " = " << factorial << endl;
    return 0;
}
