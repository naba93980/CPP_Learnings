#include <iostream>
#include <array>
using namespace std;
int main()
{
    int basic[3] = {1, 2, 3};

    std::array<int, 5> a = {1, 2, 3, 4, 5};
    for (size_t i = 0; i < a.size(); i++)
    {
        std::cout << a[i] << std::endl;
    }
    // All below at O(1)
    std::cout << "element at position 4 : " << a.at(3) << endl;
    std::cout << "empty or not : " << a.empty() << endl;
    std::cout << "element at front:" << a.front() << endl;
    std::cout << "element at end:" << a.back() << endl;
    std::cout << '\n';
    return 0;
}