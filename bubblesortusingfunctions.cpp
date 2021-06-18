#include<bits/stdc++.h>
using namespace std;
void BubbleSort(int n,int a[])
{
    int flag=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);
                flag++;
            }
        }
        if(flag==0)
        {
            break;
        }
    }
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
    cout<<"Before sorting:";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    BubbleSort(n,a);
    cout<<endl;
    cout<<"After Sorted data:";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
	return 0;
}
