#include <iostream>
using namespace std;

//super class//
class Shape{
    public:
        double dim1,dim2;

        Shape(double dim1,double dim2){
            this->dim1 = dim1;
            this->dim2 = dim2;
        }
        virtual double area(){
            return 0;
        }
};

//child class//
class Triangle : public Shape{
    public:
        //double dim1,dim2;
        Triangle(double dim1,double dim2)
        :Shape(dim1,dim2){
            //init//
        }

        double area(){
            return 0.5*dim1*dim2;
        }
};

class Rectangle : public Shape{
    public:
        Rectangle(double dim1,double dim2)
        :Shape(dim1,dim2){
            //init//
        }

        double area(){
            return dim1*dim2;
        }
};

int main()
{
    Shape *s;
    Triangle t(10,20);
    Rectangle r(10,20);

    s = &t;
    cout << "Triangle area : " << s -> area() << endl;

    s = &r;
    cout << "Rectangle area : " << s -> area() << endl;
    return 0;
}
