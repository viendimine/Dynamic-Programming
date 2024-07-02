#include<bits/stdc++.h>
using namespace std;

int f(int a,vector<int>heights ,vector<int>dp)
{
    if(a==0)return 0;
    if(dp[a]!=-1)return dp[a];
    int left = f(a-1 , heights ,dp) + abs(heights[a]-heights[a-1]);
    int right = INT_MAX;
    if(a>1)
    {
        right = f(a-2 , heights ,dp) + abs(heights[a-2]-heights[a]);
        return dp[a]=min(left,right);
    }
}

int Frog_Jump(int a, vector<int>heights)
{
    vector<int>dp(a+1,-1);
    return f(a-1 , heights ,dp);
}

int main()
{
   int a;
   cin>>a;
   vector<int>heights(a);
   for(int i=0;i<=a;i++)
   {
     cin>>heights[i];
   }
   cout<<Frog_Jump(a,heights)<<endl;
}