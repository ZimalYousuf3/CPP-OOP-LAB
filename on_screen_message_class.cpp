#include <iostream>
using namespace std;

class Message
{
public:
    Message()
    {
		cout << " Object created " << endl;
    }
};

int main()
{
	// Creating Objects of the class Message
    Message msg1;
	Message msg2;
	Message msg3;
    
    return 0;
}

