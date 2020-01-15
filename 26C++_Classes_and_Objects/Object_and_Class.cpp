//
//  Object_and_Class.cpp
//  Cpp_Leaning
//
//  Created by shiji zhao on 1/14/20.
//  Copyright © 2020 shiji zhao. All rights reserved.
//

#include <iostream>
using namespace std;

class Test{
private:
    int data1;
    float data2;

public:
    void insertIntegerData(int d){
        data1 = d;
        cout << "Number: " << data1;
    }
    
    float insertFloatData(){
        cout << "\nEnter data: ";
        cin >> data2;
        return data2;
    }
};

int main(){
    Test o1, o2;
    float secondDataOfObject2;
    
    o1.insertIntegerData(12);
    secondDataOfObject2 = o2.insertFloatData();
    
    cout << "You Entered " << secondDataOfObject2 << endl;
    return 0;
}
