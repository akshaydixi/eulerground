//Smallest positive evenly divisible by all from 1 to 20
#include <iostream>
#include <cstdio>
using namespace std;

long long gcd(long long a,long long b)
{
    if(a<b){
        a=a+b;
        b=b-a;
        a=a-b;
        }
    if (a%b == 0)
        return b;
    else return a%b;
}

long long lcm (long long a, long long b)
{
    return (a*b)/gcd(a,b);

}
int main()
{
    long long res = 1;
    int n,i;
    cout <<"Upper limit: ";
    cin >> n;
    for(i=1;i<=n;i++)res=lcm(res,i);
    cout<<res;
    return 0;
}
