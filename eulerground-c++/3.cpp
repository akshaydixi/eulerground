//find difference between the sum of the squares of the first one hundred
//natural numbers and the square of the sum
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long sum1 = 0;
    long sum2 = 0;
    sum1 = (100) * (101) * (201) / 6; // ((n * n+1 * 2n+1) / 6) 
    sum2 = pow((100) * (101) / 2,2);  // ((n * n+1 ) / 2)
    cout << sum2 - sum1;

    return 0;
}
