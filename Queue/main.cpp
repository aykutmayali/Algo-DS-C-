#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int Queue1[1000],backInd,frontInd;

void Push(int x){
++backInd;
Queue1[backInd]=x;
}

void Pop(){
Queue1[frontInd]=0;
++frontInd;
}

bool isEmpty(){
if(backInd<frontInd)return true;
                else return false;
}

int Front(){
return Queue1[frontInd];
}

int main()
{
    backInd =-1;
    frontInd= 0;

    Push(5);
    Push(6);
    Push(7);

    cout<<Front();

    Pop();

    cout<<Front();

    return 0;
}
