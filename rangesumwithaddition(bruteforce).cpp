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
    int q;//1<=q<=10^6
    cin>>q;
    while(q--)
    {
        int l,r,k;//0<=l<=r<=10^6
        cin>>l>>r>>k;
        for(int i=l;i<=r;i++)
        {
            a[i]=a[i]+k;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
	return 0;
}
