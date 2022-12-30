#include <iostream> 
using namespace std;

void pointerInc(double* &p1, double* &p2)
{
  cout << "pointerInc starts" << endl;
  cout << "The address of p1 is " << &p1 << endl;
  cout << "The value of p1 is " << p1 << endl;
  cout << "The address of p2 is " << &p2 << endl;
  cout << "The value of p2 is " << p2 << endl;
  
  *p1 += 1;
  p1 = p2;
  *p1 += 2;
  cout << "The value of p1 is " << p1 << endl;
  cout << "The value of p2 is " << p2 << endl;
  cout << "pointerInc ends" << endl;
}

int main(void)
{
  double i, j;
  double *iptr {&i};
  double *jptr {&j};
  cin >> i >> j;
  cout << "The address of i is " << &i << endl;
  cout << "The value of i is " << i << endl;
  cout << "The address of j is " << &j << endl;
  cout << "The value of j is " << j << endl;
  cout << "The address of iptr is " << &iptr << endl;
  cout << "The value of iptr is " << iptr << endl;
  cout << "The address of jptr is " << &jptr << endl;
  cout << "The value of jptr is " << jptr << endl;

  pointerInc(iptr, jptr);  
  cout << "after pointerInc " << endl;
  cout << "The value of i is " << i << endl;
  cout << "The value of j is " << j << endl;

  *iptr += 5;
  cout << "after *iptr += 5" << endl;
  cout << "The value of iptr is " << iptr << endl;
  cout << "The value of jptr is " << jptr << endl;
  cout << "The value of i is " << i << endl;
  cout << "The value of j is " << j << endl;
  return 0;
}
