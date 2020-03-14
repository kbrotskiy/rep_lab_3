//
//  main.cpp
//  Lab_3
//
//  Created by Кирилл Броцкий on 07.03.2020.
//  Copyright © 2020 Кирилл Броцкий. All rights reserved.
//

#include <iostream>
#include <cmath>
 
using namespace std;
 
class vector_na_ploskosti
{
protected:
    int x, y;  //координата вектора x, y
public:
    vector_na_ploskosti()
    {
    }
    vector_na_ploskosti(int a, int b)  //конструктор для инициализации поля
    {
        x=a;
        y=b;
    }
    virtual double dlina_vect()
    {
        return pow(x*x+y*y,0.5);
    }
    virtual void print()
    {
        cout << "\nkoordinata vektora x= "<< x;
        cout <<"\nkoordinata vektora y= "<< y;
          cout << '\n' << "Dlina vektora na ploskosti: L=" << dlina_vect();
    }
};
 
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
