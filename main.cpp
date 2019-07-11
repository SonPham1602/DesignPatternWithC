#include<iostream>
#include<string>
using namespace std;

class IAnimal
{
public:
    virtual int GetNumberOfLegs() = 0;
    virtual void Speak() = 0;
};
class Cat: public IAnimal
{
public:
    void Speak()
    {
        cout<<"MEO MEO";
    }
    int GetNumberOfLegs()
    {
        return 4;
    }
};
int main()
{
    Cat *Kitty = new Cat();
    Kitty->Speak();

    //cout<<"Hello World";
    return 0;

}
