#include <iostream>
#include <string>
#include <fstream>
#include <vector>

class ResourceHandler
{
public:
    ResourceHandler()
    {
        size = 100;
        data = new int(size);
        this->name = name;
        file.open(name);
        if (!file.is_open())
        {
            std::cout << "Error while opening the file\n";
        }
    }
    ResourceHandler(const std::string& name, int size)
    {
        this->name = name;
        file.open(name);
        if (!file.is_open())
        {
            std::cout << "Error while opening the file\n";
        } 

        this->size = size;
        this->data = new int(size);
    }
    ~ResourceHandler()
    {
        data = nullptr;
        std::cout << "data' was erased\n";

        if (file.is_open())
        {
            file.close();
            std::cout << "File was closed\n";
        }
        else
            std::cout << "file was not opened\n";
    }

    void writeLine(std::string l)
    {
        if (file.is_open())
        {
            file << l << std::endl;
        }
    }

    void setValue(int x, int index)
    {
        if (index >= 0 && index < size)
        {
            data[index] = x;
        }
        else
        {
            std::cout << "Error while setting the value\n";
        }
    }

    int getValue(int index) const
    {
        if (index >= 0 && index < size)
        {
            return data[index];
        }
    }

    void display() const
    {
        for (int i = 0; i < size; i++)
        {
            if (data[i])
            {
                std::cout << data[i] << " ";
            }
        }
        std::cout << std::endl;
    }

private:
    std::string name;
    std::ofstream file;
    int* data;
    int size;
};

class MagicCreature
{
public:
    MagicCreature()
    {
        this->name = "Unnamed";
        this->type = "Unknown";
        this->age = 0;
        this->magicLevel = 0;
        std::cout << "Implicit constructor called.";

    }
    MagicCreature(std::string n, std::string t, int a, int ml)
    {
        this->name = n;
        this->type = t;
        this->age = a;
        this->magicLevel = ml;
        std::cout << "Parameterized constructor called.\n";

    }
    MagicCreature(MagicCreature& copy)
    {
        name = copy.name;
        type = copy.type;
        age = copy.age;
        magicLevel = copy.magicLevel;
        std::cout << "Copy constructor conjured.";
    }
    void setName(std::string name)
    {
        this->name = name;
    }
    void setType(std::string type)
    {
        this->type = type;
    }
    void setAge(int age)
    {
        this->age = age;
    }
    void setMagicLevel(int ml)
    {
        this->magicLevel = ml;
    }
    std::string getName() const
    {
        return this->name;
    }
    std::string getType()const
    {
        return this->type;
    }
    int getAge()const
    {
        return this->age;
    }
    int getMagicLevel()const
    {
        return this->magicLevel;
    }

    void display()const
    {
        std::cout << "Your magic creature name is " << name << std::endl;
        std::cout << "Your " << name << " is a/an " << type << " type.\n";
        std::cout << name << " has an age of " << age << " and a magic level of " << magicLevel << std::endl;
    }
    void display(std::string name, std::string type, int age, int ml)
    {
        std::cout << "Your magic creature name is " << name << std::endl;
        std::cout << "Your " << name << " is a/an " << type << " type.\n";
        std::cout << name << " has an age of " << age << " and a magic level of " << ml << std::endl;
    }


private:
    std::string name, type;
    int age, magicLevel;
};


int main()
{
    //Tema resourceHandler
    
    std::string line = "This is a line.";
  
  //---- componentele programului versatil esuat
   // int p, n, k;
   // std::cout << "Please choose the size of the array: ";
   // std::cin >> k;
 // ----
  
    ResourceHandler arr("file.txt",5);

    arr.setValue(8, 0);
    arr.setValue(9, 1);
    arr.setValue(1, 2);
    arr.setValue(5, 3);
    arr.setValue(7, 4);

    //incercare esuata a programului versatil =/
   /* for(p = k; p >= 0;--p)
    {
        std::cout << "What number do you want at index " << p << " : ";
        std::cin >> n;
        arr.setValue(n, p);
    }*/

   std::cout << "What do you want to write in 'file.txt': ";
   std::getline(std::cin, line);
   arr.writeLine(line);
   //arr.display();

   std::cout<<std::endl;

   //Tema MagicCreature
  /* MagicCreature c1;
   c1.display();*/
   MagicCreature c2( "Bulbosaur", "Water", 7, 15);
   c2.display();
}
