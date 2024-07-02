#include<bits/stdc++.h>
using namespace std;

int Fibonacci(int a)// with recursion
{
    if(a==0)
        return 0;
    else if(a==1)
        return 1;
    else 
        return Fibonacci(a-1)+Fibonacci(a-2);
}

int fibonacci(int a)
{
    vector<int>dp(a+1,-1);
    if(a<=1)
        return a;
    else if(dp[a]!=-1)
        return dp[a];
    else 
        return dp[a]=fibonacci(a-1)+fibonacci(a-2);
}

int main()
{
    int n;
    cin>>n;
    cout<<fibonacci(n)<<endl;
    cout<<Fibonacci(n)<<endl;
}