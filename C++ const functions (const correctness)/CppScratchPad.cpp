#include <iostream>
using std::cout;
using std::endl;

//------------------ C++ const functions (const correctness) --------------------------
//ref link:https://www.youtube.com/watch?v=ehJKvbbe9hk

//const int MY_INT = 5;

class Cow
{
	int mooCount;
public:
	Cow() { mooCount = 0; }
	void moo() { cout << mooCount++ << endl; }		//none-const func	, modifies int mooCount;
	void saySomething() { cout << "Hello" << endl; }	// none modify int mooCount;
};

void main()
{
	//Cow c;
	const Cow c;
	c.moo();
	c.moo();
	c.saySomething();
	c.moo();

	//cout << MY_INT << endl;
}