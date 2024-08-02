#include <iostream>
#include <vector>
#include <string>

#define PI 3.14

class Pizza
{
    double price;
    IShape* shape;

};

class IShape 
{
public:
    virtual double getArea()=0;
    virtual void afiseaza()=0;
};

class Circle : public IShape
{
    double radius;
public:
    Circle() = default;
    void getRadius(double r)
    {
        this->radius = r;
    }
    double setRadius()
    {
        return radius;
    }
    double getArea()
    {
        return PI * radius * radius;
    }
    void afiseaza() 
    {
        std::cout << "radius: "<< radius << std::endl;
    }
};

class Rectangle : public IShape
{
    double width;
    double height;
public:
    Rectangle() =  default;
    void getWidth(double w)
    {
        this->width = w;
    }
    double setWidth()
    {
        return width;
    }
    void getHeight(double h)
    {
        this->height = h;
    }
    double setHeight()
    {
        return height;
    }
    double getArea()
    {
        return width * height;
    }
    void afiseaza()
    {
        std::cout << "height: "<< height<<" width: "<< width << std::endl;
    }
  
};

int main()
{
    Circle c;
    c.getRadius(1.9);
    c.afiseaza();
    Rectangle r;
    r.getHeight(2);
    r.getWidth(3.1);
    r.afiseaza();
   
    std::cout << "Rectangle area: " << r.getArea() << std::endl;
    std::cout <<"Circle area: " << c.getArea() << std::endl;
}


