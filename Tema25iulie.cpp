#include <iostream>
#include <string>
#include <vector>

/*

class Shape
{
    virtual double area() const
    {
        return 0;
    }
public:
    
    friend void printTotalArea();
};

class Circle :public Shape
{
    float r = 5;//raza cercului, hardcodata la 5
    float  pi = 3.14; //apple pie 
    float Area = pi * (r * r);
public:
    float area() 
    {
        return Area;
    } 
};

class Rectangle : public Shape
{ 
    float w = 10;//lungimea sau width
    float h = 4.5;//latimea sau height
    float Area = w * h;
public:
    float area() 
    {
        return Area;
    }
};

//Incercare esuata 
void printTotalArea()
{
    Rectangle r;
    Circle c;
    std::cout << "The total area is: " << c.area() + r.area() << std::endl;
}


int main()
{
    Circle c;
    Rectangle r;
    std::cout << c.area() << std::endl;
    std::cout << r.area() << std::endl;
     
    //Nu am intele cum sa 'calculez aria totala a unui vector de pointeri la obiecte de tip Shape'
    printTotalArea();
}

*/

class Avion
{
    std::string producator;
    std::string model;
public:
    Avion() {};
    Avion(std::string p, std::string m): model(m), producator(p){}
    virtual void display()
    {
        std::cout << "Avion: model - " << model << " producator - " << producator << std::endl;
    }
};

class AvionMilitar : public Avion
{
    std::string producator;
    std::string model;
    std::string unitateMilitara;
public:
    AvionMilitar() {};
    AvionMilitar(std::string p, std::string m,std::string uM) : model(m), producator(p),unitateMilitara(uM) {}
    void display()
    {
        std::cout << "Avion militar: model - " << model << " producator - " << producator << std::endl;
        std::cout << "Unitate militara: " << unitateMilitara << std::endl;
    }
};



class AvionLupta : public AvionMilitar
{
    std::string producator;
    std::string model;
    std::string numarRachere;
public:
    AvionLupta() {};
    AvionLupta(std::string p, std::string m,std::string nR) : model(m), producator(p),numarRachere(nR) {}
    void display() override
    {
        std::cout << "Avion militar de lupta: model - " << model << " producator - " << producator << std::endl;
        std::cout << "Numar de rachete: " << numarRachere << std::endl;
    }
};



class AvionVanatoare : public AvionLupta
{
    std::string producator;
    std::string model;
    std::string vitezaMaxima;
public:
    AvionVanatoare() {};
    AvionVanatoare(std::string p, std::string m,std::string vM) : model(m), producator(p),vitezaMaxima(vM) {}
    void display()
    {
        std::cout << "Avion militar de lupta pentru vanatoare: model - " << model << " producator - " << producator << std::endl;
        std::cout << "Viteza maxima: " << vitezaMaxima << std::endl;
    }
};



class Bombardier : public AvionLupta
{
    std::string producator;
    std::string model;
    std::string capBombe;
public:
    Bombardier() {};
    Bombardier(std::string p, std::string m,std::string cB) : model(m), producator(p),capBombe(cB) {}
    void display()
    {
        std::cout << "Avion militar de lupta pentru bombardament: model - " << model << " producator - " << producator << std::endl;
        std::cout << "Capacitate bombe: " << capBombe << std::endl;
    }
};


class AvionTransport : public AvionMilitar
{
    std::string producator;
    std::string model;
    std::string capTransport;
public:
    AvionTransport() {};
    AvionTransport(std::string p, std::string m,std::string cT) : model(m), producator(p), capTransport(cT) {}
    void display()
    {
        std::cout << "Avion militar pentru transport: model - " << model << " producator - " << producator << std::endl;
        std::cout << "Capacitate de transportare: " << capTransport << std::endl;
    }
};


int main()
{
    AvionTransport t("USA", "1", "10");
    t.display();
}
