#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using std::vector;
using std::find;
/*
I want to delete the last element of the vector with reverse_iterator. Explain and implement the correct one or type "correct" if it is? #include <iostream> #include <vector> #include <algorithm> int main() { std::vector<int> ivec{0, 5, 8, 3, 6, 0}; auto it = std::find(ivec.rbegin(), ivec.rend(), 0); if(it != ivec.rend()) { ivec.erase(it); } }
*/
int main() {
    vector<int> ivec{0, 5, 8, 3, 6, 0};
    auto it = find(ivec.rbegin(), ivec.rend(), 0);
    cout<< it[0]<< "\n"; //0
    cout<< it[1]<< "\n"; //6
    cout<< it[2]<< "\n"; //3
    cout<< it[3]<< "\n"; //8
    cout<< it[4]<< "\n"; //5
    cout<< it[5]<< "\n"; //0

    cout<< *ivec.rend()<< "\n";
    cout<< *ivec.rbegin()<< "\n";

    if(it[5] != *ivec.rend()) {
         *ivec.erase(it.base()-1);
     }

    cout<< it[0]<< "\n"; //0
    cout<< it[1]<< "\n"; //6
    cout<< it[2]<< "\n"; //3
    cout<< it[3]<< "\n"; //8
    cout<< it[4]<< "\n"; //5

}









 /*    for (auto it = v.rbegin(); it != v.rend(); it++)
        cout << *it << " ";
    return 0; */
