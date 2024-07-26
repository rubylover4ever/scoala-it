#include <string>
#include <iostream>
#include <vector>

class Shape
{

public:
    virtual void draw()
    {
        std::cout << "Your sape is undefined";
    }
};

class Circle : public Shape
{
public:
    void draw() override
    {
        std::cout << "     *  *    " << std::endl;
        std::cout << "   *      *  " << std::endl;
        std::cout << "  *        * " << std::endl;
        std::cout << "   *      *  " << std::endl;
        std::cout << "     *  *    " << std::endl;
    }
};

class Rectangle : public Shape
{
public:
    void draw() override
    {
        std::cout << "     --------------    " << std::endl;
        std::cout << "   |                |  " << std::endl;
        std::cout << "   |                |  " << std::endl;
        std::cout << "   |                |  " << std::endl;
        std::cout << "     --------------    " << std::endl;
    }
};

class AbstractBase
{
public:
    virtual void pureFunction() = 0;
    
};

class Concrete : public AbstractBase
{
public:
    void pureFunction() override
    {
        std::cout << "this call is from the pureFunction.\n";
    }
};

class Printable
{
public:
    virtual void print() = 0;
};

class Document : public Printable
{
public:
    void print(std::string doc) 
    {
        std::cout << "Document: " << doc << "\n";
    }
};

class Image : public Printable
{
public:
    void print() override
    {
        std::cout << "this is your image: \n";
        std::cout << "     *  *    " << std::endl;
        std::cout << "   *      *  " << std::endl;
        std::cout << "  *   =)   * " << std::endl;
        std::cout << "   *      *  " << std::endl;
        std::cout << "     *  *    " << std::endl;
    }
};
int main()
{
    Rectangle r;
    Shape* s = new Circle();
    r.draw();
    s->draw();

    AbstractBase* a = new Concrete();
    a->pureFunction();

    Printable* p = new Image();
    p->print();

}
