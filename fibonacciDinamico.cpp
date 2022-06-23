#include <vector>
#include <iostream>

using namespace std;

int FibonacciDP(vector<int> &v, int n)
{

    if(n==0 || n==1)
    {
        return n;
    }
    if(v[n - 1] >= -1)
    {
             v[n-1] = FibonacciDP(v, n-1) + FibonacciDP(v, n-2);
    }
    return v[n - 1];

}


int main()
{

int n = 33;
vector < int > v(n,-1);

cout << FibonacciDP(v, n) << "\n";

}

