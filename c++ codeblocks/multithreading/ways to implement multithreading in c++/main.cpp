#include <iostream>
#include <thread>

using namespace std;

//--------------------------1. USING FUNCTION POINTERS-----------------------------------

/*void print()
{
    cout<<"my name is nabajyoti\n";
}
int main()
{
    thread t1(print);
    t1.join();
    return 0;
}*/

//---------------------2. USING LAMBDA FUNCTION------------------------------------------
/*int main()
{
    thread t1([](int x)->void{cout<<"from lambda function "<<x;},10);
    t1.join();
    return 0;
}*/

//---------------------3. USING FUNCTOR(FUNCTION OBJECT)---------------------------------

//---------------------4. USING NON STATIC MEMBER FUNCTION-------------------------------

/*class Base
{
public:
    void printt(int x)
    {
       cout<<"value of x = "<<x<<endl;
    }
}obj;
int main()
{
    thread t1(Base::printt,&obj,100); //as it is a non static member function, so it is binded to an object(obj) whose address must be passed as argument.
    t1.join();
    return 0;
}*/

//--------------------5. USING STATIC MEMBER FUNCTION----------------------------------

/*class Base
{
public:
    static void printt(int x)
    {
       cout<<"value of x = "<<x<<endl;
    }
};
int main()
{
    thread t1(Base::printt,10); //as it is a static member function, so it is not binded to an object.
