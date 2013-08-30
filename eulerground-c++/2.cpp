//find sum of all even fibonacci terms below 4 million
//
//

#include <iostream>
#include <cmath>
using namespace std;

const double PHI = (( 1 + sqrt(5) ) / 2.0);
const double SHI = (( 1 - sqrt(5) ) / 2.0);

long long fib ( int i )
{
    return(pow(PHI,i) - pow(SHI,i)) / sqrt(5);
}

int main()
{
    int i;
    long long ans = 0,fibterm = 0;
    
    for ( i = 0; fibterm < 4000000; fibterm = fib(i),i+=3){
        ans+=fibterm;
        }
    cout << ans << endl;
    return 0;

}
