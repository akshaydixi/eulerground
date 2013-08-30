//Largest prime factor of a number
#include <iostream>
#include <cmath>
#include <cstdio>
#include <cstdlib>
using namespace std;

int main(int argc,char ** argv)
{

    long long number;
    long long factor,lastFactor;
    if (argc < 2 )
        number = 600951475143;
    else if(argc == 2)
        number = atoi(argv[1]);
    else {
        cout << "Usage : ./a.out <number> "<<endl;
        exit(0);
        }
    cout << "Number : "<<number<<endl;
    if ( number%2 == 0)
        {number = number/2;
        while(number %2 == 0)
            number = number / 2;}
    else 
        lastFactor = 1;
    factor = 3;
    while (number > 1)
    {
        if(number % factor == 0)
            {number = number / factor;
             lastFactor = factor;
             while (number % factor == 0)
                number = number / factor;
            }
        factor = factor + 2;
    }
    cout << lastFactor;
    return 0;
}
    

    

