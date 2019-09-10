// Author: Mohammad Faisal
// Email: mohammad.faisal78612@gmail.com
#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;
int main()
 {
    fast
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        long long * arr = new long long[n];
        for(int i=0;i<n;i++)
            cin >> arr[i];
        
        sort(arr,arr+n);
        
        // initially numbers_of_triangles are zero.
        long long triangle = 0;
        for(long long i=n-1;i>=1;i--)
        {
            long long left=0, right=i-1;
            while(left<right)
            {
               if(arr[left]+arr[right] > arr[i])
               {
                   triangle+=(right-left);
                   right--;
               }
               else
               {
                   left++;
               }
            }
        }
        cout<<triangle<<endl;
    }
	//code
	return 0;
}
