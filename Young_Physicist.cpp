#include <bits/stdc++.h>
using namespace std;

//https://codeforces.com/problemset/problem/69/A

int main()
{

int n;
cin>>n;
int a[n][3];
for(int i=0;i<n;i++)
{
  for(int j=0;j<3;j++)
  cin>>a[i][j];
}
int x=0,y=0,z=0;
for(int i=0;i<n;i++)
{
  for(int j=0;j<3;j++)
  {
    if(j==0)
    x+=a[i][0];
    if(j==1)
    y+=a[i][0];
    if(j==2)
    z+=a[i][0];
  } 
}

if(x==0&&y==0&&z==0)
cout<<"YES";
else
cout<<"NO";



  return 0;
}