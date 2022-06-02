#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void print_leaders(int arr[])
{
    int n = 6;
    int max = INT_MIN;
    for(int i = n-1;i>=0;i--)
    {
        if(arr[i] > max)
        {
            cout<<arr[i]<<" ";
            max = arr[i];
        }
    }
}

int main()
{
    int arr[] = {16, 17, 4, 3, 5, 2};
    print_leaders(arr);
    return 0;
}