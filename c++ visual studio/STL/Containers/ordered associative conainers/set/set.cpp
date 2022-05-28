#include <iostream>
#include <set>

using namespace std;
int main()
{
    set<int> s;
    s.insert(4);
    s.insert(6);
    s.insert(8);
    s.insert(6);
    s.insert(1);
    s.insert(1);
    for (auto i : s)
    {
        std::cout << i << endl;
    }
    set<int>::iterator it = s.begin();
    s.erase(++it);
    for (auto i : s)
    {
        std::cout << i << endl;
    }
    set<int>::iterator it2 = s.find(6);
    std::cout << s.count(6) << endl;
    for (set<int>::iterator it2 = s.find(6);
         it2 != s.end(); it2++)
    {
        // std::cout << it2.operator*() << endl;  OR
        std::cout << *it2 << endl;
    }
    std::cout << s.empty();

    std::cout << '\n';
    return 0;
}