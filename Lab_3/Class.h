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
