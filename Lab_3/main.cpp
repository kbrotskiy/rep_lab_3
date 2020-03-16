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
    int x1, y1, z1 = 0, c;
    cout<<"Vvedite tsifry prostranstvo dvuxmernoe ili trexmernoe (2/3) ->";
    cin>>c;
    cout << "Vvedite koordinatu X: x="; cin >> x1; cout << endl;
    cout << "Vvedite koordinatu Y: y="; cin >> y1; cout << endl;
    if (c==3) { cout << "Vvedite koordinatu Z: z="; cin >> z1; cout << endl; }
    Vect2D A(x1,y1);
    Vect3D B(x1,y1,z1);
    Vect2D *pA;
    if(c==2)
        pA=&A;
    else
        pA=&B;
    pA->print();
    return 0;
}
