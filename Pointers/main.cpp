#include <iostream>
#include <vector>
using std::cout;
using std::vector;

void AddOne(int* j)
{
    // Dereference the pointer and increment the int being pointed to.
    (*j)++;
}

int* AddOne(int& j)
{
    // Increment the referenced int and return the
    // address of j.
    j++;
    return &j;
}

int main() {
    int i = 5; // not int& => reference
    int j = 6;

    // Print the memory addresses of i and j
    cout << "The address of i is: " << &i << "\n"; //&i address
    cout << "The address of j is: " << &j << "\n";


    // A pointer pointer_to_i is declared and initialized to the address of i.
    int* pointer_to_i = &i; // int* => pointer , shows the address of .. == &i

    // Print the memory addresses of i and j
    cout << "The address of i is:          " << &i << "\n";
    cout << "The variable pointer_to_i is: " << pointer_to_i << "\n";
    cout << "The value of the variable pointed to by pointer_to_i is: " << *pointer_to_i << "\n";
    // int* x== &y , *(&y) == y

    // The value of i is changed.
    i = 7;
    cout << "The new value of the variable i is                     : " << i << "\n";
    cout << "The value of the variable pointed to by pointer_to_i is: " << *pointer_to_i << "\n";
    cout << "The variable pointer_to_i is: " << pointer_to_i << "\n";

    //
    // Vector v is declared and initialized to {1, 2, 3}
    vector<int> v {1, 2, 3};

    // Declare and initialize a pointer to the address of v here:
    vector<int> *pointer_to_v = &v;

    // The following loops over each int a in the vector v and prints.
    // Note that this uses a "range-based" for loop: https://www.geeksforgeeks.org/range-based-loop-c/
    for (int a: v) {
        cout << a << "\n";
    }
    // Dereference your pointer to v and print the int at index 0 here (note: you should print 1):
    cout << "The first element of v is: " << (*pointer_to_v)[0] << "\n";
    cout<< " adress of v : "<< &v<< "\n";
    cout<< " val of pointer : "<< pointer_to_v << "\n";

    //
    //Passing Pointers to a Function

    cout << "The value of i is: " << i << "\n";

    // Declare a pointer to i:
    int* pi = &i;
    AddOne(pi);
    cout << "The value of i is now: " << i << "\n";
    //
    // Returning a Pointer from a Function
     i = 1;
    cout << "The value of i is: " << i << "\n";

    // Declare a pointer and initialize to the value
    // returned by AddOne:
    int* my_pointer = AddOne(i);
    cout << "The value of i is now: " << i << "\n";
    cout << "The value of the int pointed to by my_pointer is: " << *my_pointer << "\n";


    return 0;
}


