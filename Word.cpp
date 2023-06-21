#include <bits/stdc++.h>
using namespace std;

//https://codeforces.com/problemset/problem/59/A

int main()
{
string x;
cin>>x;
int lower=0,upper=0;
for(int i=0;i<x.length();i++)
{
if(x[i]<91)
upper++;
else
lower++;
}
if(upper>lower)
{
  for(int i=0;i<x.length();i++)
  {
    if(x[i]>91)
    x[i]=x[i]-32;
  }
}
else if(lower>upper)
{
  for(int i=0;i<x.length();i++)
  {
    if(x[i]<91)
    x[i]=x[i]+32;
  }
}
else
{
   for(int i=0;i<x.length();i++)
  {
    if(x[i]<91)
    x[i]=x[i]+32;
  }
}
cout<<x<<endl;
}