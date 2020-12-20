#include <iostream>

using namespace std;

int main()
{
    //cout << "Hello world!" << endl;
    // char *ptr;
    // ptr refers an address
    // *ptr refers to the value stored in that address

    char a;
    char n;
    char *ptr;
    char *ptr_n;
    /* initialize variables */
    a = 'A';
    n = 'N';
    printf("Value of variable 'a': %c\n",a);
    printf("Value of variable 'n': %c\n",n);

    /* assign ptr to a's address == &a  */
    ptr = &a;
    ptr_n = &n;
    printf("Address of variable(which is address of a) 'ptr': %p\n",ptr);
    printf("Address of variable(which is address of a) 'ptr': %p\n",&a);
    printf("Size of variable(which is address of a) 'sizeof(a)': %lu\n",sizeof(a));
    printf("Value of pointer (which is a value in ptr's address) : *ptr : %p\n", *ptr);
    printf("Address of variable(which is address of n) 'ptr': %p\n",ptr_n);
    printf("Value of pointer (which is n value in ptr_n's address) : *ptr_n : %p\n", *ptr_n);

    /* unary *(pointer) = * asterix opr.             */
    /*       &(address of variable in memory) = & ampersant opr. */
    /* sizeof number of bytes occupay in storage*/
    /* NULL , a pointer not assigned to an address*/
    /* number of bytes in a buffer*/

    int age;
    printf("Your age : ");
    scanf("%d", &age); /* memory location , address of variable 'age'  */
    printf("you claim to be %d years old\n",age);

    int age2;
    int *aptr;

    /* must always initialize a pointer*/
    aptr = &age2;
    printf("Your age2: ");
    /* as an address, the pointer is passed directly */
    scanf("%d",aptr);
    /* the asterisk opr. is used to obtain the value referenced by the pointer,
    the value of variable age2 */
    printf("you claim to be %d years old\n",*aptr);

    int age3;
    int *aptr3;

    aptr3 = &age3;
    printf("Your age3: ");
    /* as an address, the pointer is passed directly */
    scanf("%d",&age3);
    /* the asterisk opr. is used to obtain the value referenced by the pointer,
    the value of variable age2 */
    printf("you claim to be %d years old\n",*aptr3);
    printf("you claim to be %d years old\n",age3);

    return 0;
}
