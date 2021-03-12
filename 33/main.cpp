#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    std::vector<int> ivec{0, 5, 8, 3, 6, 0};
    auto it = std::find(ivec.rbegin(), ivec.rend(), 0);
    if(it == ivec.rend()) {
         ivec.erase(it);
     }
}
