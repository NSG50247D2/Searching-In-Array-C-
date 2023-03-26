/*
    ---------------------------------------Binary Search------------------------------------------------------
    Time Complexity:
    1. Best: O(1)
    2. Worst: O(log n)
    3. Average: O(log n)

    Space Complexity:
    1. O(1) -- iterative
    2. O(log n) -- recursive
*/

#include<bits/stdc++.h>
using namespace std;
 
void binarySearchIterative(int arr[], int n, int key)
{
    int l=0,flag=0,c=1;
    while(l<=n)
    {
        ++c;
        int m=(l+n)/2;
        if(key<arr[m])
        {
            
            n=m-1;
        }
        else if(key>arr[m])
        {
            
            l=m+1;
        }
        else
        {
            
            cout<<"Key is present in "<<m<<" index ";
            flag=1;
            break;
        }
        
    }
    cout<<endl;
    if(flag==0)
    {
        cout<<"Element is not present "<<c<<endl;
    }
}
 
void binarySearchRecursive(int arr[], int l, int n, int key)
{
    while(l<=n)
    {
    int m=(l+n)/2;
        if(key<arr[m])
        {
            return binarySearchRecursive(arr,l,m-1,key);
        }
        else if(key>arr[m])
        {
            return binarySearchRecursive(arr,m+1,n,key);
        }
        else
        {
            cout<<"Elment is present"<<endl;
        }
    }
    if(n<l)
    {
        cout<<"Element not present"<<endl;
        return;
    }
}

int main()
{
    int n,key;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter "<<(i+1)<<" element of integer array: ";
        cin>>arr[i];
    }
    cout<<"Enter key to search for: ";
    cin>>key;
    binarySearchIterative(arr,n,key);
    binarySearchRecursive(arr,0,n,key);
    return 0;
}

