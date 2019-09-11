// Author: Mohammad Faisal
// Email: mohammad.faisal78612@gmail.com
#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;
int solve(int* arr, int n)
{
    int count=0;
    int left=0, right=n-1;
    while(left<=right)
    {
        if(arr[left]==arr[right])
        {left++;right--;}
        else if(arr[left]<arr[right])
        {
            left++;
            arr[left]+=arr[left-1];
            count++;
        }
        else if(arr[left]>arr[right])
        {
            right--;
            arr[right]+=arr[right+1];
            count++;
        }
    }
    return count;
}
int main()
 {
    fast
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int * arr = new int[n];
        for(int i=0;i<n;i++)
            cin >> arr[i];
        cout<<solve(arr,n)<<endl;
    }
	//code
	return 0;
}
