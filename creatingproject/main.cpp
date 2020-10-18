#include <iostream>
#include <bits/stdc++.h>  //standard template library
#include <Row.h>
using namespace std;

ifstream f("data.in");
ofstream g("data.out");

class Row {
    int A[3][5],i;
    public:
    void printingRow(int row){
        for(i=0; i<5; ++i){
            cout<<A[row][i]<<" " ;
        }
        cout<<"\n";
    }
};

int main()
{
    int a,b,sum,maximum,number,i;
    double cubicRoot;
    cout << "Hello world!" << endl;

    f>>a>>b;
    cout<<"a :"<<a<< endl;
    cout<<"b : "<<b<< endl;
    sum=a+b;
    cout<<"sum : "<<sum<< endl;
    g<<sum;

    maximum = max(a,b);
    number=2;
    cout<<"max of a and b is = "<< maximum<< endl;

    cubicRoot=pow((double)number,1.0/3);
    cout<<fixed<<setprecision(10)<<cubicRoot<<"\n";
    cout<<fixed<<setprecision(3)<<cubicRoot<<"\n";

    cout<<"\n";
    cout<<"\n";

    Row row1;

    for(i=0 ; i<3; ++i){
        row1.printingRow(i);
        cout<<"\n";
    }


    return 0;
}
