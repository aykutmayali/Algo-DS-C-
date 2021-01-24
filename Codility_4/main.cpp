#include <iostream>
#include <vector>

using namespace std;

int solution(vector<int> &A){
    int res = 0, size = (int)A.size();
    for(int i=0; i<size; i++){
        res ^= A[i];
    }
    return res;
}

int main()
{
    cout << "Hello world!" << endl;
    vector<int> A = {1,2,2,1,5,7,7,9};
    cout<<" sol A : " <<solution(A)<<"\n";

    return 0;
}
