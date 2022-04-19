#include <iostream>
#include <string>
class Baby
{

    static int total_no_of_babies;
    int no_of_babies;
    std::string name[10];
    static void welcoming()
    {
        std::cout << "hello\n";
    }

public:
    const static int k = 13132;
    void baby_count()
    {
        welcoming();
        std::cout << "Enter number of babies\n";
        std::cin >> no_of_babies;
    }
    void babies()
    {
        baby_count();
        for (int i = 0; i < no_of_babies; i++)
        {
            std::cout << "Enter the name of baby " << i << std::endl;
            std::cin.sync();
            std::getline(std::cin, name[i], '\n');
            total_no_of_babies++;
        }
    }
    static void display()
    {
        welcoming();
        std::cout << "Total number of babies : " << total_no_of_babies;
    }
};
int Baby::total_no_of_babies;

int main()
{
    class Baby Dad_1, Dad_2;
    Dad_1.babies();
    Dad_2.babies();
    Baby::display();
    std::cout << "\n------------------\n";
    Dad_1.display();
    std::cout << "\n"
              << Dad_1.k << "\n";
    std::cout << Baby::k;

    std::cout << '\n';
    return 0;
}