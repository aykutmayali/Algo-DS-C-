#include <iostream>
#include <cmath>
using namespace std;

int solution(int N){
    int numBits = floor(std::log2(N))+1;
    int maxGap = 0;
    int possGap = 0;
    bool foundOne = 0;
    for(int i; i<numBits; i++){
        if(foundOne && !(N & (1<<i))){
            possGap++;
        } else if(N & (1<<i)){
            if(foundOne){
                if(possGap > maxGap){
                    maxGap = possGap;
                }
                possGap = 0;
            }
            foundOne = true;
        }
    }

    return maxGap;
}

int main()
{
    cout << "Hello world!" << endl;
    cout<<solution(100)<< endl;
    return 0;
}
