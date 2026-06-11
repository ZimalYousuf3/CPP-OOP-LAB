#include <iostream>
using namespace std;

class Capital
{
private:
    static int count;

public:
    Capital()
    {
        count++;
        cout << " Object created.\n";
    }

    void show()
    {
        cout << " Total objects created: " << count << endl;
    }
};

int Capital::count = 0;

int main()
{
    Capital c1;
    c1.show();

    Capital c2;
    c2.show();

    Capital c3;
    c3.show();

    return 0;
}