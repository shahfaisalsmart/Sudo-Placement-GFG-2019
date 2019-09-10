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
    long long * table = new long long[101];
    table[0]=1;
    table[1]=1;
    for(int i=2;i<=100;i++)
    {
        table[i] = table[i-1] + table[i-2];
    }
    while(t--)
    {
        int n;
        cin >> n;
        for(int i=0;i<n;i++)
            cout<<table[i]<<" ";
        cout<<endl;
    }
    delete[] table;
	//code
	return 0;
}
