#include <bits/stdc++.h>
using namespace std;

//https://codeforces.com/contest/263/problem/A

int main()
{
int a[5][5];
int h,k;
for(int i=0;i<5;i++)
{
	for(int j=0;j<5;j++)
	{
		cin>>a[i][j];
		if(a[i][j]==1)
        {
			h=i;
			k=j;
		}
	}
}
cout<<abs(h-2)+abs(k-2);






}