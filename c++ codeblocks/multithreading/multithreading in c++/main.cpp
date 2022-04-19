#include<iostream>
#include<thread>
using namespace std;
void add(int x, int y)
{
    std::cout << x + y<<"\n";
}
void sub(int x, int y)
{
    std::cout << x - y<<"\n";
}
int main()
{
    int x=5, y=10;
    thread t1(&add, x, y);
    thread t2(&sub, x, y);
    t1.join();
    t2.join();
    std::cout<<'\n';
    return 0;
}
