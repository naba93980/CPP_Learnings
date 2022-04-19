//The process of generating and signaling the error is referred to as throwing exception.

#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "enter the value of x";
    cin >> x;
    try
    {
        throw 'a'; //once throw is executed the block is done
        if (x < 0)
            throw x;
    }
    catch (int x)
    {
        cout << "error\n";
    }
    catch (...) //default exception cature.
    {
        cout << "error haire\n";
    }
    try //outer try block
    {
        try
        {
            if (x < 0)
                throw x;
        }
        catch (int x)
        {
            cout << "exceptio caught" << x << "\n";
            throw; //only 'throw' means rethrowing an exception....the rethrown exception will be caught by catch block of outer try catch block.
            //once a exception has been caught by a catch block, it can be rethrown to the outer scope catch block by using only 'throw' statement within the catch block.
        }
    }
    catch (...) //outer catch block
    {
        cout << "error to asilo\n";
    }
    try
    {
        throw; //terminate() called without an active exception....means their is no exception to be thrown despite this the 'throw' statment forces to throw some exception as the try block gets terminated without having any exception in it.
    }
    catch (...)
    {
        cout << "eeerrroorrrr\n";
    }
    std::cout << "\n.....";
    return 0;
}

/*
If you want to rethrow an exception from within an exception handler, you can do so by calling throw by itself, with no exception.

This causes the current exception to be passed on to an outer try/catch sequence.

An exception can be rethrown only from within a catch block or from any function called from within that block.

When you rethrow an exception, it will not be recaught by the same catch statement.

It will propagate to the immediately enclosing try/catch sequence.

The following program illustrates rethrowing an exception.

It rethrows a char * exception.

#include <iostream>
using namespace std;


void Xhandler()
{
   try {
     throw "hello"; // throw a char *
   }
   catch(char *) { // catch a char *
      cout << "Caught char * inside Xhandler\n";
      throw ; // rethrow char * out of function
   }
}
int main()
{
   cout << "start\n";

   try{
     Xhandler();
   }
   catch(char *) {
     cout << "Caught char * inside main\n";
   }

   cout << "end";

   return 0;
}
*/