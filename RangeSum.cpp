#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int RangeSum(int l,int r,int a[])
{
    int sum=0;
    for(int j=l;j<=r;j++)
    {
        sum=sum+a[j];
    }
    return sum;
}
int main() 
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
	    cin>>a[i];
	}
	int q;
	cin>>q;
	while(q--)
	{
	    int l,r;
	    cin>>l>>r;
	    cout<<RangeSum(l,r,a)<<endl;
	}
	
	return 0;
}
