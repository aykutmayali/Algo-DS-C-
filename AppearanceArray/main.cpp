#include <iostream>
#include <bits/stdc++.h>


using namespace std;
ifstream f("data.in");
ofstream g("data.out");
int A[100],n;

int main()
{
    f>>n;

    for(int i=1; i<=n; ++i){
        int x;
        f>>x;
        ++A[x];
    }

    if(A[4]>0) g<<"yes it appears";
        else g<<"no not";

    return 0;
}
