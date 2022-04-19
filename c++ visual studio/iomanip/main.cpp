#include <iostream>
#include <iomanip>
using namespace std;
//setw, setfill, setbase,hex, oct, dec,setprecision,fixed,scientific
int main()
{
    double x = 50.456;
    double z = 57.368;
    double l = 3.14;
    double k = 123.36453654635463463;
    int y = 877;

    //----------------------------------------------setw, setfill, setbase,hex, oct, dec--------------------------------------------------------

    // cout << setfill('x') << setw(10) << x << endl;

    // /*cout << setbase(16);
    // cout << x << endl;
    // There are no octal floating point numbers & no hexadecimal floating point numbers in C++*/

    // cout << setbase(16);
    // cout << y << endl;
    // cout << std::hex << y << endl;
    // cout << std::oct << y << endl;
    //----------------------------------------------setprecision,fixed,scientific--------------------------------------------------------

    // cout << setprecision(8) << k << endl;
    // cout << setprecision(9) << l << endl;

    //------------------------------------------------------
    /*

    The ios::fixed flag allows us to always print floating point numbers (float, double or long double) in fixed notation, i.e. with all its digits.

    Eg - cout.setf(ios::fixed); cout<<267.7488494;
    >> 267.7488494

    Its counterpart is the ios::scientific flag, which prints floating point numbers in standard notation (with a power of 10). 

    Eg - cout.setf(ios::scientific); cout<<267.4883;
    >> 2.674883e+2 //e represents 10, not the euler's number for this case.
    //-------------------------------------------------------

    //cout << fixed << setprecision(2) << x << endl;
    //cout << scientific << setprecision(8) << x << endl;
    //use setprecision and fixed/scientific as complementary.

    */

    //--------------------------------------------------showpoint,noshowpoint,setprecision---------------------------------------------------------------

    /*
    The ios::showpoint flag ensures that whenever a floating point number is printed, it is printed with a decimal point, even when it is an integer.

    Eg - cout.setf(ios::showpoint); cout<<float(23);
    >> 23.0

    Its counterpart is the ios::noshowpoint, which simply disables the ios::showpoint flag, if enabled.
    */
    //-------------------------------------------------------

    // cout << showpoint << setprecision(8) << x << endl; //When the showpoint format flag is set, the decimal point is always written for floating point values inserted into the stream (even for those whose decimal part is zero). Following the decimal point, as many digits as necessary are written to match the precision set for the stream (if any).
    // cout << noshowpoint << x << endl;                  //The showpoint flag can be unset with the noshowpoint manipulator. When not set, the decimal point is only written for numbers whose decimal part is not zero.
    // cout << x << endl;

    // cout << showpoint << setprecision(4) << z << endl; //when precision value is less than the number of digits, the original value inside the variable gets truncated.
    // cout << noshowpoint << z << endl;
    // cout << z << endl;

    std::cout << '\n';
    return 0;
}