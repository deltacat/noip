/* P1425 小鱼的游泳时间 */

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
  int a, b, c, d;
  std::cin >> a >> b >> c >> d;
  int diffHour = c - a - 1;
  int diffMins = 60 - b + d;
  diffHour += diffMins / 60;
  diffMins = diffMins % 60;
  printf("%d %d", diffHour, diffMins);
}