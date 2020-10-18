#ifndef ROW_H
#define ROW_H
#include <iostream>
using namespace std;
class Row1
{
    int A[3][5],i;
    public:


     void printingRow(int row){
        for(i=0; i<5; ++i){
            cout<<A[row][i]<<" " ;
        }
        cout<<"\n";
    }


    protected:

    private:
};

#endif // ROW_H
