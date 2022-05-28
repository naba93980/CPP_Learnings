// list is implemented using doubly linked list
// direct access at o(1) is not possible, we hv to traverse
#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> l;
    l.push_back(1);
    l.push_front(2);
    for (auto i : l)
    {
        std::cout << i << endl;
    }
    l.erase(l.begin()); // o(n)
    for (auto i : l)
    {
        std::cout << i << endl;
    }
    std::cout << l.size() << endl;
    list<int> l2(l);
    list<int> l3(5, 100);
    for (auto i : l2)
    {
        std::cout << i << endl;
    }
    for (auto i : l3)
    {
        std::cout << i << endl;
    }
    std::cout << '\n';
    return 0;
}