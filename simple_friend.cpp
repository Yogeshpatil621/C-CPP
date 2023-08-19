#include <iostream>
using namespace std;
class y;
class x
{
    int data;
    friend void sum(x, y);

public:
    void setdata(int value)
    {
        data = value;
    }
};
class y
{
    int name;
    friend void sum(x, y);

public:
    void setdata(int value)
    {
        name = value;
    }
};
void sum(x o1, y o2)
{
    cout << "The addition of " << (o1.data + o2.name) << endl;
}
int main()
{
    x a;
    a.setdata(3);
    y b;
    b.setdata(5);
    int add;
    sum(a, b);

    return 0;
}