#include <iostream>


int main()
{
    //tema 1. 
    int number;
    std::cout << "Introduceti un an aleatoriu: ";
    std::cin >> number;
    if ( number % 4 == 0)
    {
        std::cout << "Anul " << number << " este bisect.\n";
    }
    else
        std::cout << "Anul " << number << " nu este bisect. \n";

    std::cout << "--Apasati ENTER pentru a continua--";
    while (std::cin.get() != '\n');
  
    // tema 2.  

    int factorial;
    factorial = 5 * 4 * 3 * 2 * 1;
    std::cout << "5! este egal cu: " << factorial << "\n";

    std::cout << "--Apasati ENTER pentru a continua--";
    while (std::cin.get() != '\n');

    //tema 3 si 4.
    long ForT;
    std::cout << "Avem urmatoare afirmatie: (5! + 5) = (5 * 25) & (5! - 100) = (120 / 10), daca ambele afirmatii sunt adevarate sunt adevarate atunci vom scrie '1' daca nu, '0' \n";
    ForT = (5 * 25) == (factorial += 5) && (factorial-=100) == (200/10 );

    std::cout << "--Pentru a afisa raspunsul apasati ENTER--";
    while (std::cin.get() != '\n');
    std::cout << "raspunsunl este: "<< ForT <<"\n";

