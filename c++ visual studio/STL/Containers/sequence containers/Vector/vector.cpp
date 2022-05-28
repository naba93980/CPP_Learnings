#include <iostream>
#include <vector>
using namespace std;
// vectors are basically dynamic arrays whose size can increase or decrease at run time
int main()
{
    vector<int> v;
    vector<int> v2(5, 1);
    std::cout << "capacity -> " << v.capacity() << endl;
    std::cout << "size -> " << v.size() << endl;
    v.push_back(3);
    std::cout << "capacity -> " << v.capacity() << endl;
    std::cout << "size -> " << v.size() << endl;
    v.push_back(6);
    std::cout << "capacity -> " << v.capacity() << endl;
    std::cout << "size -> " << v.size() << endl;
    v.push_back(9);
    std::cout << v.capacity() << endl;
    std::cout << "size -> " << v.size() << endl;
    v.push_back(12);
    std::cout << "capacity -> " << v.capacity() << endl;
    std::cout << "size -> " << v.size() << endl;
    v.push_back(15);
    std::cout << "capacity -> " << v.capacity() << endl;
    std::cout << "size -> " << v.size() << endl;
    // capacity ->total how much it can hold
    // size->how much it occupied currently
    v.pop_back();
    std::cout << "capacity -> " << v.capacity() << endl;
    std::cout << "size -> " << v.size() << endl; // capacity not reduced
    std::cout << "element at position 4 : " << v.at(3) << endl;
    std::cout << "empty or not : " << v.empty() << endl;
    std::cout << "element at front:" << v.front() << endl;
    std::cout << "element at end:" << v.back() << endl;
    std::cout << "---------v---------\n";
    for (auto i : v)
    {
        std::cout << i << endl;
    }
    std::cout << v[0] << endl;
    std::cout << v.at(1) << endl;
    std::cout << "size -> " << v.size() << endl; // capacity not reduced
    std::cout << "capacity -> " << v.capacity() << endl;
    v.clear();
    std::cout << "size -> " << v.size() << endl; // capacity not reduced
    std::cout << "capacity -> " << v.capacity() << endl;
    vector<int> v3(v2);
    std::cout << "---------v2---------\n";
    for (auto i : v2)
    {
        std::cout << i;
    }
    std::cout << "\n---------v3---------\n";
    for (auto i : v3)
    {
        std::cout << i;
    }
    std::cout << '\n';
    return 0;
}