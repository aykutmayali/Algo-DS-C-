#include <iostream>
#include <vector>

using namespace std;
 class Base {
 public:
 virtual void show() { cout<<" In Base \n"; }
 };
 class Derived: public Base {
 public:
 void show() { cout<<"In Derived \n"; }
 };

 int main(void) {
 Base *bp = new Derived;
 bp->show(); // <- Runtime Polymorphism in Action

  int x = 10;
  // ref is a reference to x.
  int& ref = x;
  // Value of x is now changed to 20
  ref = 20;
  cout << "x = " << x << endl ;
  // Value of x is now changed to 30
  x = 30;
  cout << "ref = " << ref << endl ;

  int i = 5;
  int j = i++;

  cout << "i : "<< i << "  j : "<< j << "\n";

  vector<int> vec;
/* ... .. ... */
    cout << " i++ for"<< "\n";
    for (int itr = vec.begin(); itr < vec.end(); itr++) {
       cout << "itr "<< itr << "\n";
    }
    cout << " ++i for"<< "\n";
    for (int itr = vec.begin(); itr < vec.end(); ++itr) {
        cout <<"itr "<< itr << "\n";
    }

    // constructors used in the same order as described above:
  std::vector<int> first;                                // empty vector of ints
   for (std::vector<int>::iterator it = first.begin(); it != first.end(); ++it)
    std::cout <<"first : " <<' ' << *it;
  std::cout << '\n';
  std::vector<int> second (4,100);                       // four ints with value 100
   for (std::vector<int>::iterator it = second.begin(); it != second.end(); ++it)
    std::cout <<"second : " <<' ' << *it;
  std::vector<int> third (second.begin(),second.end());  // iterating through second
   for (std::vector<int>::iterator it = third.begin(); it != third.end(); ++it)
    std::cout <<"third : " <<' ' << *it;
  std::vector<int> fourth (third);                       // a copy of third
   for (std::vector<int>::iterator it = fourth.begin(); it != fourth.end(); ++it)
    std::cout <<"fourth : " <<' ' << *it;


  // the iterator constructor can also be used to construct from arrays:
  int myints[] = {16,2,77,29};
  cout << "sizeof(myints)" << sizeof(myints) << "\n";
   cout << "sizeof(int)" << sizeof(int) << "\n";
  std::vector<int> fifth (myints, myints + sizeof(myints) / sizeof(int) );

  std::cout << "The contents of fifth are:";
  for (std::vector<int>::iterator it = fifth.begin(); it != fifth.end(); ++it)
    std::cout << ' ' << *it;
  std::cout << '\n';


 return 0;

}
