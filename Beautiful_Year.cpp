#include <bits/stdc++.h>
using namespace std;

//https://codeforces.com/problemset/problem/271/A

bool year(int n)
{   
    int hash[10]={0};
    while(n!=0)
    {   int x=n%10;
        hash[x]++;
        n=n/10;
    }
for(int i=0;i<10;i++)
{
    if(hash[i]>1)
    return false;
}
return true;
}

int main()
{

int n;
cin>>n;
while(!year(n+1))
{
   n++; 
}
cout<<n+1;



}