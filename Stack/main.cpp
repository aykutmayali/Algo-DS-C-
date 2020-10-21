#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int Stack[100],indice;

void push(int x){
++indice;
Stack[indice]=x;
}
bool isEmpty(){
if(indice>=1) return false;
    else return true;
}
void pop(){
Stack[indice]=0;
--indice;
}
int top(){
return Stack[indice];
}

int main()
{
    indice=0;
    push(2);
    push(2);
    push(5);
    push(5);
    push(8);
    push(7);
    pop();
    if(! isEmpty()) cout<<top();

    return 0;
}
