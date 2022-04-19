#include <iostream>
class A
{
    int book_id[5];
    int book_number_perid[5];

public:
    int counter = 0;
    void get_book_id()
    {
        std::cout << "Enter the id of book\n";
        std::cin >> book_id[counter];
        std::cout << "Enter the book_number of id " << book_id[counter] << std::endl;
        std::cin >> book_number_perid[counter];
        counter++;
    }
    void display()
    {
        for (size_t i = 0; i < counter; i++)
        {
            std::cout << "Number of books for id " << book_id[i] << " " << book_number_perid[i] << std::endl;
        }
    }
};
int main()
{
    class A shop1;
    shop1.get_book_id();
    shop1.get_book_id();
    shop1.get_book_id();
    shop1.display();
    std::cout << sizeof(shop1);
    std::cout << '\n';
    return 0;
}