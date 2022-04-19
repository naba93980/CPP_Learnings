#include <iostream>
#include <string>
class id
{
protected:
    int roll;
    std::string name;
};
class setroll : public id
{
public:
    void set_roll(int r)
    {
        roll = r;
        std::cout << "roll = " << roll << std::endl;
    }
};
class setname : public id
{
public:
    void set_name(std::string n)
    {
        name = n;
        std::cout << "name = " << name << std::endl;
    }
};
int main()
{
    setroll stud1;
    stud1.set_roll(7);
    setname stud2;
    stud2.set_name("nabajyoti modak");
    std::cout << '\n';
    return 0;
}