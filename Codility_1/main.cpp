//Write a function:
//class Solution { public int solution(int N); }
//that, given a positive integer N, returns the length of its longest binary gap.
//The function should return 0 if N doesn't contain a binary gap.
#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int solution(int N)
{
    int cnt = 0;
    int n = N;

    while(n/2 !=0)
    {
        n /= 2;
        cnt++;
    }
    cout<< "cnt : " << cnt<< "\n";

    vector<int> ones;
    while(cnt >= 0)
    {
        int tmp = pow(2,cnt);
        if(N-tmp >= 0)
        {
            N -= tmp;
            ones.push_back(cnt);
        }
        cnt--;
    }
    cout<< "size of ones vector " << ones.size()<< "\n";
    cout<< " ones[0] :"<< ones[0]<< "\n";
    cout<< " ones[1] :"<< ones[1]<< "\n";

    int res = 0;
    for(int i=1; i < (int)(ones.size()); i++)
    {
        res =max(res,ones[i-1]-ones[i]-1);
    }

    return res;
}

int main()
{
    cout << "Hello world!" << endl;
    cout << " sol(6) :" << solution(6)<<" "<< endl;
    return 0;
}


