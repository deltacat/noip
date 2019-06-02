#include <iostream>
using namespace std;

int main()
{
  int a, b;
  const int price = 19;
  cin >> a >> b;
  int money = 10 * a + b;
  cout << money / price << endl;
}