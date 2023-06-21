#include <bits/stdc++.h>
using namespace std;

//https://codeforces.com/problemset/problem/275/A

int main()
{
int a[5][5]={0};
for(int i=1;i<4;i++)
{
    for(int j=1;j<4;j++)
    cin>>a[i][j];
}
int b[5][5],x;
for(int i=1;i<4;i++)
{
    for(int j=1;j<4;j++)
    {   x=a[i][j]+a[i-1][j]+a[i+1][j]+a[i][j-1]+a[i][j+1];
        if(x%2!=0)
        b[i][j]=0;
        else  
        b[i][j]=1;
    }

}
for(int i=1;i<4;i++)
{
    for(int j=1;j<4;j++)
    cout<<b[i][j];
    cout<<"\n";
}



    return 0;
}