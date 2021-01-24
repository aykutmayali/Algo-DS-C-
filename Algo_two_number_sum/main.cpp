#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}

/**
#include <vector>
using namespace std;

vector<int> twoNumberSum(vector<int> array, int targetSum) {
  int temp = 0;
	int i =sizeof(array);
	int j;
	while(temp != targetSum){
		temp = array[i];
		for(j=0; j<sizeof(array); j++){
			temp += array[j];
		}
		i--;
	}

  return {i,j};
}
 *
 */

 #include <vector>
#include <unordered_set>
using namespace std;

vector<int> twoNumberSum(vector<int> array, int targetSum) {
 unordered_set<int> nums;
	for(int num : array){
		int potentialMatch = targetSum - num;
		if(nums.find(potentialMatch) != nums.end()){
			return vector<int>{potentialMatch, num};
		} else {
			nums.insert(num);
		}
	}
 return{};
}

