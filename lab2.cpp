
#include <iostream>
int main () {
    using namespace std;
    setlocale(LC_CTYPE, "ukr");

   int a, b;
   cout << "Введiть два цiлих числа: ";
   cin >> a >> b;

   int gcd = 1;
   int lcm = 0;
   int c = 0;
   int d = 0;

        for (int i = 1; i <= a && i <= b; ++i) {
            if (a % i == 0 && b % i == 0) {
                gcd = i;
            }
        }

   lcm = (a * b) / gcd;
   c = lcm / a;
   d = lcm / b;

   cout << "НСК: " << lcm << endl;
   cout << "Числа c i d: " << c << ", " << d << endl;

        return 0;
    }
