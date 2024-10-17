#include<iostream>
using name space std;
int first(int arr[],int n)
{
    int s=0,e=n-1,mid,first=-1;
    while(s<=e)
    {
        mid(s+e)/2;
        if(arr[mid]==target)
        {
            first=mid;
            e=mid-1;
        }
        else if(target>arr[mid])
        {
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return first;
}
int last()
{
    int s=0,e=n-1,mid,last=-1;
    while(s<=e)
    {
        mid(s+e)/2;
        if(arr[mid]==target)
        {
            last=mid;
            s=mid+1;
        }
        else if(target>arr[mid])
        {
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return last;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int target;
    cin>>target;
    cout<<first(arr,n)<<endl;
    cout<<last(arr,n);

}