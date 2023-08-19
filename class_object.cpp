#include <iostream>
#include <string.h>
using namespace std;
class binary
{
    char s;

public:
    void sum(void);
    void read(void);
};
void binary::sum(void)
{
    cout << "enter the number:";
    cin >> s;
}
void binary::read()
{
    for (int i = 1; i <= 10; i++)
    {
        cout << (i * s) << endl;
    }
}
int main()
{
    binary bin;

    bin.sum();
    bin.read();
    return 0;
}