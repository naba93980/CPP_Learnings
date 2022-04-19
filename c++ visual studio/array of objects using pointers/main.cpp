#include <iostream>
class shop
{
public:
    int id;
    float price;
    void setdata(int p, float q)
    {
        id = p;
        price = q;
    }
    void getdata()
    {
        std::cout << id << "\n"
                  << price << "\n";
    }
};
int main()
{
    shop *ptr = new (std::nothrow) shop[3];
    shop *p = ptr;
    int id;
    float price;
    for (int i = 0; i < 3; i++)
    {
        std::cout << "enter the id and price for shop " << i + 1 << "\n";
        std::cin >> id >> price;
        ptr->setdata(id, price);
        ptr++;
    }
    for (int i = 0; i < 3; i++)
    {
        std::cout << " the id and price for shop " << i + 1 << "\n";
        p->getdata();
        p++;
    }
    std::cout << '\n';
    return 0;
}
