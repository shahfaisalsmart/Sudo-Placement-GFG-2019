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
        
        long long* table = new long long[n];
    
        for(int i=0;i<n;i++)
        {
            table[i] = arr[i];
        }
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(arr[i] > arr[j] && table[i] < table[j] + arr[i])
                {
                    table[i] = table[j] + arr[i];
                }
            }
        }
        
        cout<<*max_element(table, table+n)<<endl;
    }
	//code
	return 0;
}
