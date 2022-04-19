#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

void print()
{
    cout<<"\nmy name is abcd\n";
    thread::id number=this_thread::get_id(); //id is member type of class named thread, this_thread namespace has group of functions used to access information of the thread in which they are called.
    cout<<"\nthis"<<number<<"\n";
}
int main()
{
    thread::id n=this_thread::get_id();
    cout<<n<<"\n";
    this_thread::sleep_for(chrono::seconds(4));//this_thread namespace has group of functions used to access information of the thread in which they are called.
    thread t(print);
    thread::id no=t.get_id();

    cout<<no;
    t.join();
    return 0;
}
