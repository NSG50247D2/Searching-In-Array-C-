/*
    ---------------------------------------Linear Search------------------------------------------------------
    Time Complexity:
    1. Best: O(1)
    2. Worst: O(n)
    3. Average: O(n)

    Space Complexity:
    1. O(1)
*/

#include<bits/stdc++.h>
#include <iostream>
using namespace std;

void linearSearchIterative(int arr[],int n,int key)
{
    int flag=0;
    for(int i=0;i<n;i++)
    {
        if(key==arr[i])
        {
            cout<<"Key is present in "<<i<<" index ";
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        cout<<"Element is not present.\n";
    }
}

void linearSearchRecursive(int arr[],int i,int n,int key)
{
    if(i==n)
    {
        printf("Key not found!");
        return;
    }
    else if(arr[i]==key)
    {
        cout<<"Key is present in "<<i<<" index "<<endl;
        return;
    }
    return linearSearchRecursive(arr,++i,n,key);
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
    linearSearchIterative(arr,n,key);
    linearSearchRecursive(arr,0,n,key);
    return 0;
}