#include <iostream>
#include <cmath>    // for std::sin() and std::cos()
using namespace std;

void addOne(int &ref){
    ref = ref+1;
}
void getSinCos(double degrees, double &sinOut, double &cosOut)
{
    // sin() and cos() take radians, not degrees, so we need to convert
    static constexpr double pi { 3.14159265358979323846 }; // the value of pi
    double radians = degrees * pi / 180.0;
    // output arguments) with an “out” suffix (or prefix can help make it clear that the value might be modified.
    sinOut = std::sin(radians);
    cosOut = std::cos(radians);
}

void foox(const std::string &x) // x is a const reference
{
   // x = "hello";  // compile error: a const reference cannot have its value changed!
}

void foo(int *&ptr) // pass pointer by reference
{
	ptr = nullptr; // this changes the actual ptr argument passed in, not a copy
}

void swapnum(int &i, int &j) {
  int temp = i;
  i = j;
  j = temp;
}

void f(const int& x) {
  int& y = const_cast<int&>(x);
  ++y;
}

void passByReference_0(int *val){
    *val= 1000; // value inside the address
}
void passByReference_1(int &val){
    val = 2000;
}
void passByValue(int val){
    val= 1000;
}
int main()
{
    int x= 63;
    passByValue(x);
    cout << "pass by value x = " << x<< "\n";
    passByReference_0(&x);// send the address of the value
    cout << "pass by reference_0 x = " << x<< "\n";
    passByReference_1(x);
     cout << "pass by reference_1 x = " << x<< "\n";
    int a = 10;
    int b = 20;

    swapnum(a, b);
    printf("A is %d and B is %d\n", a, b);
    f(a);
    cout << a << endl;

    int val= 5;
    cout << "Hello world! Pass value by reference" << endl;
    cout << "Previously on lost,  val "<< val<< "\n";
    addOne(val);
    cout << "now,  val "<< val<< "\n";

    double sin(0.0);
    double cos(0.0);

    // getSinCos will return the sin and cos in variables sin and cos
    getSinCos(30.0, sin, cos);

    std::cout << "The sin is " << sin << '\n';
    std::cout << "The cos is " << cos << '\n';

    int *ptr = &val;
    cout << "ptr is: " << (ptr ? "non-null" : "null") << '\n'; // prints non-null
    int *numPtr = ptr;
    int addrPtr = *ptr;
    cout << "val is "<< val<< "\n";
    cout << "ptr is "<< ptr << "\n";
    cout << " num val in ptr is "<< numPtr << " addr val of ptr is value shows ptr is "<< addrPtr<< "\n";
	foo(ptr);
	cout << "After foo val is "<< val<< "\n";
    cout << "ptr is "<< ptr << "\n";
	numPtr = ptr;
	addrPtr = *ptr;
	cout << "ptr is: " << (ptr ? "non-null" : "null") << '\n'; // prints null
	cout << "After foo"<<"\n num val in ptr is "<< numPtr << " addr val of ptr is "<< addrPtr<< "\n";

    return 0;
}
