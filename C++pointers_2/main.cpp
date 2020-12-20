#include <iostream>

using namespace std;

void set(int *x,int *y){
        *x = 100;
        *y = 200;
    }

int main()
{
    cout << "Hello world!" << endl;

        int a,b;
        int *x,*y;
        set(&a,&b);
        printf("A= %d and B= %d\n ",a,b);

        x=&a;
        y=&b;
        //*x=a; /* not work like this */
        //*y=b; /* not work like this */
        printf("A= %d and B= %d\n  ",*x,*y);

    return 0;
}
