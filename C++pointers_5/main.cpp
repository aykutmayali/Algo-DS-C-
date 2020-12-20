#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;

    int a[5] = {11,22,33,44,55};
    int x,*p;

    p =a;
    for(x=0; x<5; x++){
        printf("%p\n",p[x]);
        printf("%d\n",*p);
        p++;
    }

    return 0;
}
/*
array a[]
pointer *p
assign p to the base of array: p=a
assign p to the array element n: p=&a[n]
access element n 's address : p+n
access element n's value : *(p+n)

*/
