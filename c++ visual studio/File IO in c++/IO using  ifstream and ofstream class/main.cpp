#include <iostream> //for standard input output stream
#include <fstream>  //for file input output stream.

int main()
{
    //opening a file and writing to it , one only one object  is sufficient to open several files, but should be done one by one.
    std::ofstream out("name.txt"); //passing name.txt file through constructor
    out << "nabajyoti modakkkkkkkkkk ";
    out << "is a good boy ";
    out.close();
    out.open("name2.txt"); //passing name2.txt through open() function.
    out << "who lives in agartala\n";
    out << "u r a jocker\n";
    out.close();

    std::ifstream in;
    in.open("name2.txt");
    std::string s;
    in >> s;
    std::cout << s;
    std::getline(in, s, '\n');
    std::cout << s << "\n";
    std::getline(in, s, '\n');
    std::cout << s << "\n";
    in.close();
    in.open("name.txt");
    in >> s;
    std::cout << s;
    std::getline(in, s);
    std::cout << s << "\n";
    in.close();
    in.open("name2.txt");
    while (in.eof() == 0)
    {
        in >> s;
        if (in.eof() != 0) //used because in.eof() "is not returning false soon enough." It will still be true after you have read the last item in the file. It only becomes false when you attempt to read one item past the end of the file.
            break;
        std::cout << s << " ";
    }
    std::cout << "\n";
    in.clear();  //If we previously get an end of file on the stream, seekg will not reset it but will return an error in many implementations. – use the clear() method to clear the end of file bit first. This is a relatively common mistake and if seekg() is not performing as expected.
    in.seekg(0); //sets pointer to position 0.
    std::getline(in, s);
    in.seekg(7); //sets pointer to position 0.
    std::getline(in, s);
    std::cout << s << "\n";
    in.seekg(2, std::ios::beg); //0 -> 'w' , 1 -> 'h' , 2 -> 'o'
    std::getline(in, s);
    std::cout << s << "\n";
    in.seekg(1, std::ios::beg);
    in >> s;
    std::cout << s << "\n";
    in.seekg(2, std::ios::cur);
    std::getline(in, s);
    std::cout << s << "\n";
    in.seekg(-3, std::ios::end); //-1 ->'\n' , -2 ->'r' , -3 ->'e'
    std::getline(in, s);
    std::cout << s << "\n";
    in.close();
    return 0;
}

//---------------------------------------------------------------------------------------------------------------------------------------------------------------
//std::istream cin(std::stdin); cin is object of class istream and the stream from which byte will be
//extracted is passed as argument.
//std::ostream cout(std::stdout); cout is object of class ostream and the stream to which byte will be
//inserted is passed as argument.
//----------------------------------------------------------------------------------------------------------------------------------------------------------------
//imagined prototype of class ofstream

// class ofstream
// {
//     public:
//         FILE *P;  //different pointer value will mean different file stream. so we can set different file stream by passing different argument in open() function for same object.
//     ofstream(FILE *POINTER)
//     {
//         P = POINTER;
//     }
//     open(FILE *POINTER)
//     {
//         P = POINTER;
//     }
//     close()
//     {
//         P = NULL;
//     }
// };
//oFstream out("name.txt");
//out.open("name2.txt"); //for same object out we pass different argument, thus setting pointer to different value that is different file stream.
//-----------------------------------------------------------------------------------------------------------------------------------------------------------------