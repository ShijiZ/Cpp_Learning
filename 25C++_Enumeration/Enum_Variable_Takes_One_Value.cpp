//
//  Enum_Variable_Takes_One_Value.cpp
//  Cpp_Leaning
//
//  Created by shiji zhao on 1/14/20.
//  Copyright © 2020 shiji zhao. All rights reserved.
//

#include <iostream>
using namespace std;

enum suit{
    club = 0,
    diamonds = 10,
    hearts = 20,
    spades = 3
} card;

int main(){
    card = club;
    printf("Size of enum variable = %lu bytes\n", sizeof(card));
    return 0;
}
