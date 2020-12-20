#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    char a;
    int b;
    char *x;
    int *y;

    x = &a;
    y = &b;

    a = 'A';
    b = 19;

    printf("value of a with *x is : %c\n", *x);
    printf("address of a with x is also &a :%p\n ", &a);
    printf("address of a with x is also &a :%p\n ", x);

    printf("value of b with *y is : %p\n", *y);
    printf("address of b with y is also &b :%p\n ", &b);
    printf("address of b with y is also &b :%p\n ", y);

    return 0;
}
