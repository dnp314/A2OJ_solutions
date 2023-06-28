#include <bits/stdc++.h>
using namespace std;

//https://codeforces.com/problemset/problem/450/A

int main()
{

int n;
cin>>n;
int k;
cin>>k;
int a[n];
for(int i=0;i<n;i++)
{cin>>a[i];
  if(a[i]%k==0)
  a[i]=a[i]/k;
  else 
  a[i]=a[i]/k+1;
}int max=a[0],h;
for(int i=0;i<n;i++)
{
  if(a[i]>=max)
  {max=a[i];
  h=i;
  }
}
cout<<h+1;



  
}