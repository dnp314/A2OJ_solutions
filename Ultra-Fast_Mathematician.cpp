#include <bits/stdc++.h>
using namespace std;

//https://codeforces.com/problemset/problem/61/A

int main()
{
  string x,y;
  cin>>x>>y;
  for(int i=0;i<x.length();i++)
  {
    if(x[i]=='0'&&y[i]=='0')
    cout<<0;
    else if(x[i]=='1'&&y[i]=='0')
    cout<<1;
    else if(y[i]=='1'&&x[i]=='0')
    cout<<1;
    else 
    cout<<0;
  }



}