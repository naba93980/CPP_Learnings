#include <iostream>
struct carr
{
    int number;
    char a;
} hondaa;
union car
{
    int number;
    char a;
} honda;
enum day //enum used to assign names to numbers;
{
    sun,
    mon,
    tues,
};
int main()
{
    enum day one = sun;
    std::cout << mon << std::endl
              << one << "\n";
    std::cout << sizeof(hondaa) << std::endl;
    std::cout << sizeof(honda) << std::endl;

    return 0;
}