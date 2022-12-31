// Author Sapnil Patel
// Date:-15/10/22
#include <iostream>
using namespace std;
int main()
{
    int n, r, sum = 0, temp;
    cin >> n;
    temp = n;
    while (n > 0)
    {
        r = n % 10;
        sum += (r*r*r);
        n = n / 10;
    }
    if (temp == sum)
        cout << "Special Number";
    else
        cout << "Not Special Number";
    return 0;
}