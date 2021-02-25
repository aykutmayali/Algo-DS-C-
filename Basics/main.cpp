#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstdlib>  // required to use the built-in abs() function
using namespace std;

using namespace std;

int main() {
    int a;
    int b;
    int c;
    cin >> a >> b >> c;

    cout << a + b + c << endl;
//---------------------------------//
    int i;
    long l;
    char c;
    float f;
    double d;
    scanf("%d %ld %c %f %lf" , &i, &l, &c, &f, &d);
    // cin >> a >> b >> c >> d >> e;
    printf("%d\n%ld\n%c\n%.3f\n%.9lf\n", i,l,c,f,d);
    // cout << std::fixed << std::setprecision(3) << d << '\n';
    // cout << std::fixed << std::setprecision(9) << e << '\n';
    printf("%.3f", e); //It prints the floating point accurately up to 3 decimal places.

//---------------------------------//

    int n;
    string represent[10] = {"Greater than 9", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    cin >> n;

    if(n > 9) {
        cout << represent[0];
    }
    else {
        cout << represent[n];
    }
//---------------------------------//
    string represent[10] = {"zero", "one", "two", "three", "four",\
    	"five", "six", "seven", "eight", "nine"};
    cin >> a >> b;
    for(int i = a; i <= b; i++) {

        if(i > 9) {
            if(i % 2 == 0)
                cout << "even\n";
            else cout << "odd\n";
        }
        else {
            cout << represent[i]<<endl;
        }
    }
//---------------------------------//
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
//---------------------------------//
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b); // a sum, b absolute diff

//--------------------------------//
    int z;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>z;
        arr[i]=z;
    }
    for(int i=n;i>0;i--){
        cout<<arr[i-1]<<" ";
    }

//--------------------------------//

    int q,n,k,i,j;  // q=query , n =num of array, k = length of array, i&j for for
    cin>>q>>n;      // q=2 n=2
    vector<vector<int>> arr(n);
    for(i=0; i<n; i++){          // n times for
        cin>>k;                  // k=3
        arr[i].resize(k);        // array length= 3
        for(j=0; j<k; j++){
            cin>>arr[i][j];      // 1 5 4
        }
    }

    for(int m; m<q; m++){
        cin>>i>>j;
        cout<<arr[i][j]<< endl;
    }
//--------------------------------//
    int n;
    int q;
    cin >> n >> q;

    // Create an array of pointers to integer arrays
    // (i.e., an array of variable-length arrays)
    int** outer = new int*[n];

    // Fill each index of 'outer' with a variable-length array
    for(int i = 0; i < n; i++) {
        int k;
        cin >> k;
        // Create an array of length 'k' at index 'i'
        outer[i] = new int[k];

        // Fill each cell in the 'inner' variable-length array
        for(int j = 0; j < k; j++) {
            cin >> outer[i][j];
        }
    }

    // Perform queries:
    while(q-- > 0) {
        int outer_index;
        int inner_index;
        cin >> outer_index >> inner_index;

        // Find the variable-length array located at outer_index
        // and print the value of the element at inner_index.
        cout << outer[outer_index][inner_index] << endl;
    }


    return 0;
}

int max_of_four(int a, int b, int c, int d) {
    return max(max(a,b),max(c,d));
}

void update(int *a,int *b) {
    int temp = *a;
    *a = *a + *b;
    *b = abs(temp - *b);

}
