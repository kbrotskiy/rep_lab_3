//
//  main.cpp
//  Lab_3
//
//  Created by Кирилл Броцкий on 07.03.2020.
//  Copyright © 2020 Кирилл Броцкий. All rights reserved.
//

#include <iostream>
#include <cmath>
#include "Class.h"
 
using namespace std;
 
int main()
{
    int x1, y1;
    cout << "Vvedite koordinatu X: x="; cin >> x1;
    cout << "Vvedite koordinatu Y: y="; cin >> y1;
    vector_na_ploskosti A(x1,y1);
    vector_na_ploskosti *pA;
    pA=&A;
    pA->print();
    cout<<endl;
    return 0;
}
