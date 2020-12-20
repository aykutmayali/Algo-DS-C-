#include <iostream>

using namespace std;

int *iptr(void){ //int pointer func
   static int a=59;
   return (&a);
}

int main()
{
    cout << "Hello world!" << endl;
    int *x;
    void *chunk;

    x=iptr();
    if(x==NULL){
        fprintf(stderr, "Memory error\n");
        exit(1);
    }

    printf("The address returned is %p\n", x);
    printf("The value returned is %d\n", *x);

    chunk= malloc(1024);
    if(chunk == NULL){
        puts("Memory allocation failed");
    }
    else {
        printf("1024 bytes allocated at %p\n",chunk);
        free(chunk);
    }

    return 0;
}
