#include <iostream>
#include <string>
//nested member functions in c++
class binary
{
    std::string s;

public:
    void input()
    {
        std::cout << "Enter the string : \n";
        getline(std::cin, s, '\n');
    }
    void check()
    {
        input();
        for (int i = 0; i < s.length(); i++)
        {
            if (s.at(i) != '0' && s.at(i) != '1')
            {
                std::cout << "Invalid re baba\n";
                break;
            }
            else
            {
                if (s.at(i) == '0')
                    s.at(i) = '1';
                else
                    s.at(i) = '0';
            }
        }
    }
    void display()
    {
        std::cout << s;
    }
};

int main()
{
    class binary naba;
    naba.check();
    naba.display();
    std::cout << '\n';
    return 0;
}