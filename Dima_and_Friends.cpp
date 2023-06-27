#include <bits/stdc++.h>
using namespace std;

//https://codeforces.com/problemset/problem/272/A

int main()
{
int n;
cin>>n;
int a[n],s=0;
for(int i=0;i<n;i++)
{cin>>a[i];
s+=a[i];
}
int k=s+5,f=1,cnt=0,x=1;
while(f)
{
  if(x>s&&x<=k)
  cnt++;
  x+=n+1;
  if(x>k)
  f=0;
}
cout<<5-cnt;


 
}