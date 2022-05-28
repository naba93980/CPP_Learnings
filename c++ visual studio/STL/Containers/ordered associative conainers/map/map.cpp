#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, string> m;
    m[1] = "naba";
    m[13] = "age";
    m[13] = "height";
    m[4] = "modak";
    m.insert({5, "hehe"});
    for (pair<int, string> i : m)
    {
        std::cout << i.first << " : " << i.second << endl;
    }
    std::cout << m.count(13) << endl;
    m.erase(4);
    for (pair<int, string> i : m)
    {
        std::cout << i.first << " : " << i.second << endl;
    }
    std::cout << (*(m.find(4))).second;
    std::cout << '\n';
    return 0;
}
