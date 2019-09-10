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
        int * arr = new int[n];
        for(int i=0;i<n;i++)
            cin >> arr[i];
        int money;
        cin >> money;
        
        int * numWays = new int [money+1];
        
        numWays[0] = 1;
        
        for(int i=0;i<n;i++)
        {
            for(int j=arr[i];j<=money;j++)
            {
                numWays[j] += numWays[j-arr[i]];
            }
        }
        cout<<numWays[money]<<endl;
        // delete [] numWays;
        // delete [] arr;
        
    }
    // delete [] numWays;
    // delete [] arr;
	//code
	return 0;
}
