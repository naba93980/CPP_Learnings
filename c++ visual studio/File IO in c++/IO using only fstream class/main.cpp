#include <iostream>
#include <fstream>

int main()
{
    int x;
    std::fstream dhuka("name.txt");
    std::string st;
    std::cin >> st; //cin object extracts bytes from standard input stream(keyboard) and puts in st.
    dhuka << st;    //dhuka object takes bytes from st and inserts in file output stream.
    std::string st2;

    ////---------------------------------------------------------------------------///////////
    dhuka.clear();
    //if reached(and attempted to read past) the end of the file, the eof and fail flags will be set.
    //You need to clear them using fstream_object.clear()
    dhuka.seekg(0);
    ////--------------------------------------------------------------------------///////////

    dhuka >> st2;     //dhuka object extracts bytes from file input stream and puts in st2.
    std::cout << st2; //cout object takes bytes from st2 and inserts in standard output stream (screen).
    std::cout << '\n';
    return 0;
}