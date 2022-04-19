#include <iostream>
int main()
{
    int n;
    std::cout << "Enter your age\n";
    std::cin >> n;
    switch (n)
    {
    case 18:
        std::cout << "you can vote afterfew days";
        break;
    case 25:
        std::cout << "you can vote";
        break;
    case 15:
        std::cout << "you cannot vote";
        break;

    default:
        std::cout << "you are not even born";
        break;
    }
    return 0;
}