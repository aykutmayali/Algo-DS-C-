#include <iostream>
#include <bits/stdc++.h>

using namespace std;

ifstream f("data.in");
ofstream g("data.out");

int A[1000], numberElements;
int BinarySearch(int X){
    int Left=1,Right=numberElements,mid;

    while(Left <= Right){
        mid=(Left + Right)/2;

        if(X==A[mid]) return mid;
        else if(x<A[mid]) Right= mid-1;
                      else Left= mid+1;
    }
    return -1;
}

int main()
{
    f>> numberElements;
    for(int i=1; i<=numberElements; ++1)
        f>>A[i];
    cout<<BinarySearch(21);

    return 0;
}
