#include <iostream>

using namespace std;
/*
int g (int x, int y) {
  switch(x - y) {
  case 0:
    return x;
  case 4:
    y = y + 1;
    break;
  case 7:
    x = x - 1;
  case 9:
    return x*y;
  case 3:
    y = x + 9;
  default:
    return y - x;
  }
return y;
}

int f (int x, int y) {
  if (x + 2 < y) {
    x = x + 3;
    return y * x;
  }
  else {
    return x + y + 2;
  }
}

int myFunction(int n) {
  int x = n * 2;
  int y = (x + 1) % 3;
  return y - x;
}

int gh (int x, int y) {
  x = x + y;
  int z = 2 * x - y;
  return z;
}

void fh (int x, int y) {
  while (x < y) {
    printf("%d ", y - x);
    x = x + 1;
    y = y - 1;
  }
}

int fhz (int n) {
  int ans = 0;
  for (int i = 1; i < n; i++) {
    if (i < n/2) {
      ans -= i;
    }
    else {
      ans += i;
    }
  }
  return ans;
}

int ghzl (int x, int n) {
  for (int i = 0; i < n; i++) {
    if (i % 2 == 0) {
      x *= i + 1;
      continue;
    }
    x--;
    if (x == 0) {
      break;
    }
  }
  return x;
}

int main()
{
    cout << "Hello world!" << endl;
    int x = -36 ;
    int y = 6 ;
    for(int i=1; i <((3*y)+1); i++){
        x = x +((2*i)-1) ;
        cout << x << "\n" << endl;
    }
    int z = g(9, 5);
    cout << " g : "<< z << "\n" <<endl;

    int q = f(5, 7);
    cout << " f : "<< q << "\n" <<endl;

    int v = myFunction(4);
    cout << " v : "<< v << "\n" <<endl;

    int ghz = gh(-2, 5);
    cout << " gh : "<< ghz << "\n" <<endl;

    fh(-1, 4);
    cout << "Hello world!" << endl;

    int fhy = fhz(5);
    cout << " fhz : "<< fhy << "\n" <<endl;

    int ghy = ghzl(2, 3);
    cout << " fhz : "<< ghy << "\n" <<endl;

    return 0;
}
*/
/*
int main (void) {
  int a = 2;
  int b = 6;
  while (a <= b) {
    if (a % 2 == 1) {
      printf("a is %d\n", a);
    }
    else {
      printf("b is %d\n", b);
      for (int i = 0; i < b - a ; i++) {
        printf("a * i + b = %d\n", a * i + b);
      }
    }
    a++;
    b--;
  }
  return 0;
}
*/
int anotherFunction(int a, int b) {
  int answer = 42;
  int x = 0;
  printf("In anotherFunction(%d,%d)\n",a,b);
  while (b > a) {
    printf("a is %d, b is %d\n", a, b);
    answer = answer + (b - a);
    b -= x;
    a += x / 2;
    x++;
  }
  return answer;
}

int someFunction(int x, int y) {
  int a = x + y;
  if (x < y) {
    for (int i = 0; i < x; i++) {
      printf("In the loop with i = %d, a = %d\n", i, a);
      a = a + x;
    }
  }
  else {
    y = anotherFunction(y,a+4);
  }
  return a * y;
}

int main(void) {
  int x = 2;
  int a = someFunction(x,3);
  printf("a = %d\n", a);
  printf("x = %d\n", x);
  return 0;
}
