#include <bits/stdc++.h>
using namespace std;

//https://codeforces.com/problemset/problem/266/A

int main()
{
  int n;
  cin>>n;
  string x;
  cin>>x;
  int cnt=0;
  for(int i=0;i<n;i++)
  {
    if(x[i]==x[i+1])
    cnt++;
  }
  cout<<cnt<<endl;
}