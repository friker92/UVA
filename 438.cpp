#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
  double PI = 3.14159265358979323846;
  double x1, y1, x2, y2, x3, y3;

  while (cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3) {
    double a = sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
    double b = sqrt((x1-x3)*(x1-x3) + (y1-y3)*(y1-y3));
    double c = sqrt((x2-x3)*(x2-x3) + (y2-y3)*(y2-y3));
  
    double s = (a + b + c) / 2;
    double L = sqrt(s * (s-a) * (s-b) * (s-c));
    double r = (a * b * c)/(4 * L);

    cout << setprecision(2) << fixed << 2*PI*r << endl;
  }

  return 0;
}