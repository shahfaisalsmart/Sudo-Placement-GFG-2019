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
        int count=0;
        while(1)
        {
            int temp = n/5;
            n/=5;
            count+=temp;
            if(n<=0)
                break;
        }
        cout<<count<<endl;
    }
	//code
	return 0;
}
