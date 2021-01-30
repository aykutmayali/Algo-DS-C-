#include <iostream>

using namespace std;
/*
int main()
{
    cout << "Hello world! \n" << endl;
    char c = 250;
    c += 8;
    cout << c << "\n" <<endl;

    short y = 30000;
    short x = y + 10000;
    cout << y <<  "\n"<< endl;
    cout << x << "\n"<< endl;
    double d = 4.669;
    printf("My number is %.2f.",d);

    int xy = 5;
double d1 = 11/xy;
double d2 = 11/(double)xy;
cout << " d1 - d2 \n"<< d1-d2 <<  "\n"<< endl;

    return 0;
}
*/
enum name_tag {
  BLUEBERRY,
  BANANA,
  PINEAPPLE,
  WATERMELON
};
typedef enum name_tag name_t;

struct fruit_tag {
  name_t name;
  double size;
};
typedef struct fruit_tag fruit_t;

fruit_t getBigger(fruit_t f, double d) {
  f.size += d;
  return f;
}

int main(void) {
  fruit_t myFruit;
  myFruit.name = BANANA;
  myFruit.size = 5.2;
  myFruit = getBigger(myFruit, 3.4);
  printf("This fruit is %.2f grams.\n", myFruit.size);
  return 0;
}
