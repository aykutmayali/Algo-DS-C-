#include <iostream>
#include <vector>
#include <math.h>
#include <cmath>
using namespace std;

int solution(vector<int> &A){
    int size = A.size();
    if(size == 1){
        return 1;
    }

    int maxV = -1;
    for(int i=0; i< size; i++){
        maxV = max(maxV, A[i]);
    }
    cout<<" maxV : "<< maxV<< "\n";

    vector<int> flags(maxV+1, 0);
    for(int i=0; i < size; i++){
        flags[A[i]]++;
        cout << "flags A[i] :"<<A[i]<< "\n" ;
    }

    for(int i = 0; i <= maxV; i++){
        if(flags[i] % 2 == 1){
                cout<< " flags[i] :"<< "\n";
            return i;
        }
    }

}

int main()
{
    cout << "Hello world!" << endl;
    vector<int> A={1,2,4,5,4,1,2,7,8,8};
    cout <<solution(A)<< endl;

    return 0;
}
