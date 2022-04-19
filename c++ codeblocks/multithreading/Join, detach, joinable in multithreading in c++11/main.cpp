#include <iostream>
#include <thread>
#include <chrono>

using namespace std;
void print()
{
cout<<"namaste";
this_thread::sleep_for(chrono::seconds(2));
cout<<"namaskar"<<endl;
}

//------------------------JOIN() & JOINABLE()--------------------------------------

/*int main()
{
    std::thread t(print);
    t.join();
    cout<<"nomoshkar";
    //t.join(); repeated ..so throws error and crashes.
    if(t.joinable())
        t.join();
    return 0;
}*/


//------------------------DETACH() & JOINABLE()------------------------------------
int main()
{
    std::thread t(print);
   // t.detach();
    this_thread::sleep_for(chrono::seconds(1));
    cout<<"nomoshkar";
    if(t.joinable())
        t.detach();
    //this_thread::sleep_for(chrono::seconds(3));
    return 0; //once main() is returned, created thread is suspended even if it doesnot complete execution.
}
