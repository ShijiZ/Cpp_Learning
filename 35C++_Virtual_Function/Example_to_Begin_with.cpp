//
//  Example_to_Begin_with.cpp
//  Cpp_Leaning
//
//  Created by shiji zhao on 1/16/20.
//  Copyright © 2020 shiji zhao. All rights reserved.
//

#include <iostream>
using namespace std;

class Weapon{
public:
    void loadFeatures(){
        cout << "Loading weapon features.\n";
    }
};

class Bomb : public Weapon{
public:
    void loadFeatures(){
        cout << "Loading bomb features.\n";
    }
};

class Gun : public Weapon{
public:
    void loadFeatures(){
        cout << "Loading gun features.\n";
    }
};

int main(){
    Weapon *w = new Weapon;
    Bomb *b = new Bomb;
    Gun *g = new Gun;
    
    w -> loadFeatures();
    b -> loadFeatures();
    g -> loadFeatures();
    
    return 0;
}
