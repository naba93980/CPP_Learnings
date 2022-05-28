#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<string> s;
    s.push("naba");
    s.push("modak");
    s.push("agartala");
    s.push("northeast");
    s.push("india");
    std::cout << s.top();
    s.pop();
    std::cout << s.top();
    cout << s.empty();
    std::cout << s.size();
    std::cout << '\n';
    
    return 0;
}