#include <iostream>
#include <string>

int main()
{
    std::string s = "naba modak"; //s is object of string class which is further an instance of basic_string template class.
    std::cout << s << std::endl;  //string output in c++.
    std::string input;
    std::cout << "enter input string" << std::endl;
    std::getline(std::cin, input, 'k'); //string input in c++ using getline function.
    std::string value;
    std::cout << "enter the value\n"
              << std::endl;
    getline(std::cin, value, '0');
     std::cout << input << std::endl;
    std::cout << s.find('a'); // find is a method of class string, gives index of the character.
    s.pop_back();             //removes last character
    s.push_back('l');         //adds as last character
    std::cout << s << std::endl;
    std::cout << s.length() << std::endl;             //length of string
    std::cout << s.front() << std::endl;              //first char of string
    std::cout << s.back() << std::endl;               //last char of string
    std::cout << s.append("hutiya hai") << std::endl; //appending at last of string.
    std::cout << '\n';
    //visit https: //www.cplusplus.com/reference/string/string/ for more such methods & functions.
    return 0;
}
