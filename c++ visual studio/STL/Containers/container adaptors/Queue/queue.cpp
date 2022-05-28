#include <iostream>
#include <queue>

int main()
{
    std::queue<std::string> q;
    q.push("12");
    q.push("22");
    q.push("32");
    q.push("42");
    q.push("52");
    q.push("62");
    int size = q.size();
    for (int i = 0; i < size; i++)
    {
        std::cout << q.front() << std::endl;
        q.pop();
    }
    std::cout << q.size();
    std::cout << '\n';
    return 0;
}