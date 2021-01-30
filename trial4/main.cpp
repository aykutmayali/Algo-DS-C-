#include <iostream> // change to C++ io
#include<vector>    // change array to vector<>

using namespace std; // comes with c++
const int N =40;  // change defines of constants to const

template <typename T>  // generic template definition
inline int sum(T val){ // adding inline for short function
    int p =0;
    for(int i=0; i<val.size(); ++i){ // i value used locally
        p += val[i]; // p always added with new element of val vector
    }
    return p; // return sum of all elements in vector
}

int main()
{
    vector<int> v; // vector declaration
    for(int i=0; i<N; ++i){
        v.push_back(i); // new elements added to vector with for loop until 40
    }
    cout<< "sum is "<< sum(v)<< "\n"<< endl; // print of the sum
    return 0;
}

/*
#include <iterator>
#include <algorithm>
#include <numeric>

constexpr int N = 40 ;

int main()
{
    std::vector<int> data(N); // vector of N integers

    std::iota( std::begin(data), std::end(data), 0 ) ; // fill up with 0, 1, 2 ... N-1

    std::cout << "sum is " // sum of the integers in data
               << std::accumulate( std::begin(data), std::end(data), 0 ) << '\n' ;
}
*/
/*
using namespace std;

const int N = 40;

void sum(int& p, int n, const vector<int> d) {
  p = 0;
  for(int i = 0; i < n; ++i)
    p += d[i];
}

int main()

{
   int i;
   int accum = 0;
   vector<int> data;

   for(i = 0; i < N; ++i)
      data.push_back(i);

    sum(accum, N, data);

    cout << "sum is: " << accum << "\n";

    return 0;

}
*/
/*

#include <iostream>
#include <cstdio>  // Is the equivalent of #include <stdio.h>

// Avoids writting std::
using namespace std;
// Avoids overwritting in some scopes in case the variable N is used for something else
const int N = 40;

/*
    Below we use inline because the function only depends on declared variables
    (not on a library like iostream for instance). This also improves the optimization
*/
/*
//  The below function stores the sum of the n first elements of array d in pointer p. It returns nothing
inline void sum(int* p, int n, int d[])
{
    // int i;  This line disappears because i can be defined within the loop
    *p = 0;
    for(int i = 0; i < n; ++i)
    {
          *p += d[i];
    }
    // NB: Since n = N = 40 is of type int, returning ((N-1) * N)/2 would do the same and save time
}

int main()
{
    // int i;  Same comment as before
    int accum = 0;
    int data[N];

    for(int i=0; i<N; ++i)
    {
        data[i] = i;
    }

    sum(&accum, N, data);
    // Since accum is called by reference, its value permanently changes as sum is executed
    cout << "sum is " << accum << endl;
    return 0;
}

*/
