#include <iostream>
#include <map>
#include <string>

class Fivegleton
{
    int m_id;
    static std::map<int, Fivegleton*> m_instances;
    Fivegleton(int id): m_id(id){}
public:
    Fivegleton(const Fivegleton& m) = delete;
    Fivegleton(const Fivegleton&& m) = delete;
    Fivegleton& operator= (const Fivegleton& m) = delete;
    ~Fivegleton()
    {
        for (auto& el : m_instances)
        {
            delete el.second;
        }
        m_instances.clear();
    }

    static Fivegleton* getInstance(int id)
    {
        if (m_instances.find(id) != m_instances.end())
        {
            return m_instances[id];
        }
        else
        {
            if (m_instances.size() < 5)
            {
                m_instances[id] = new Fivegleton(id);
                return m_instances[id];
            }
            else
            {
                std::cout << "Nu se mai pot crea noi instante\n";
                return nullptr;
            }
        }
    }

    int getId() const
    {
        return m_id;
    }
};

std::map<int, Fivegleton*> Fivegleton::m_instances;

int main()
{
    Fivegleton* instance_1 = Fivegleton::getInstance(1);
    std::cout << "element id= " << instance_1->getId() << std::endl;
    Fivegleton* instance_2 = Fivegleton::getInstance(2);
    std::cout << "element id= " << instance_2->getId() << std::endl;
}
