// implemented using static arrays and pointers which keeps track of data present in the arrays and dynamic in nature
#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> d;
    d.push_back(1);
    d.push_front(2);
    for (auto i : d)
    {
        std::cout << i << endl;
    }
    std::cout << d[0] << "---" << endl;
    std::cout << d.at(1) << endl;
    std::cout << d.front() << endl;
    std::cout << d.back() << endl;
    std::cout << d.max_size() << endl;
    std::cout << d.size() << endl;
    d.erase(d.begin(), d.end()); // o(n)
    std::cout << d.size() << endl;
    std::cout << '\n';
    return 0;
}