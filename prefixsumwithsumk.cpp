#include <iostream>
using namespace std;

int main() 
{
    int n;//1<=n<=10^6
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int prefix[n+1]={0};
    int q;//1<=q<=10^6
    cin>>q;
    while(q--)
    {
        int l,r,k;//0<=l<=r<=10^6
        cin>>l>>r>>k;
        prefix[l]+=k;
        prefix[r+1]+=-k;
    }
    for(int i=1;i<=n;i++)
    {
        prefix[i]=prefix[i]+prefix[i-1];
        a[i-1]=a[i-1]+prefix[i-1];
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
	return 0;
}
