class Vect2D
{
protected:
    int x, y;
public:
    Vect2D()
    {
    }
    Vect2D(int a, int b)  //конструктор для инициализации поля
    {
        x=a;
        y=b;
    }
    virtual double Vdlina()
    {
        return pow(x*x+y*y,0.5);
    }
    virtual void print()
    {
        cout << "koordinata vektora x= "<< x;
        cout <<"\nkoordinata vektora y= "<< y;
        cout << endl << "Dlina vektora 2D: L = " << Vdlina()<<endl;
    }
};

class Vect3D: public Vect2D
{
    int z;
public:
    Vect3D()
    {
    }
    Vect3D(int x, int y, int z):Vect2D(x ,y)
    {
        this->z=z;
    }
    double Vdlina()
    {
        return pow(x*x+y*y+z*z,0.5);
    }
    void print()
    {
        cout<<"koordinata vektora x="<< x;
        cout<<endl<<"koordinata vektora y="<< y;
        cout<<endl<<"koordinata vektora z="<< z<<endl;
        cout <<  "Dlina vektora 3D: L = " << Vdlina()<<endl;
    }
};
