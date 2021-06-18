#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void SelectionSort(int n,int a[])
{
    int temp,min;
    for(int i=0;i<n;i++)
    {
        min=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
            {
                min=j;
            }
        }
        temp=a[i];
        a[i]=a[min];
        a[min]=temp;
    }
}
int main() 
{
    int n;
    cin>>n;
    int a[n];
    cout<<"enter elements into array:";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<endl;
    cout<<"Before Sorting:";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    SelectionSort(n,a);
    cout<<endl;
    cout<<"After Sorting:";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
	return 0;
}
