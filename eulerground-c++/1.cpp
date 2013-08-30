//find sum of multiples of 3 and 5 less than 1000
#include <iostream>
using namespace std;
int main()
{
    int i,N = 1000,ans=0;
    for (i = 0; i < N; i++ )
        if( i % 3 == 0 || i % 5 == 0)
            ans += i;
    cout << ans;
    return 0;
}

