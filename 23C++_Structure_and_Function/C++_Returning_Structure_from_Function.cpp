//
//  C++_Returning_Structure_from_Function.cpp
//  Cpp_Leaning
//
//  Created by shiji zhao on 1/14/20.
//  Copyright © 2020 shiji zhao. All rights reserved.
//

#include <iostream>
using namespace std;

struct Person{
    char name[50];
    int age;
    float salary;
};

Person getData(Person);
void displayData(Person);

int main(){
    Person p;
    
    p = getData(p);
    displayData(p);
    
    return 0;
}

Person getData(Person p){
    cout << "Enter full name: ";
    cin.get(p.name, 50);
    cout << "Enter age: ";
    cin >> p.age;
    cout << "Enter salary: ";
    cin >> p.salary;
    
    return p;
}

void displayData(Person p){
    cout << "\nDisplaying Information." << endl;
    cout << "Name: " << p.name << endl;
    cout <<"Age: " << p.age << endl;
    cout << "Salary: " << p.salary << endl;
}
