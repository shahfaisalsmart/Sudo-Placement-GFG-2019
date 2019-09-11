// Author: Mohammad Faisal
// Email: mohammad.faisal78612@gmail.com
#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;
void dp(vector<int> &pending,int n)
{
    // vector<int> pending(100002,true);
    for(int i=2;i*i<=100002; i++)
    {
        if(pending[i]==true)
        {
            for(int j=i*i; j<=100002;j+=i)
            {
                pending[j]=false;
            }
        }
    }
}
int main()
 {
    fast
    int t;
    cin >> t;
    // int * table = new int[100002];
    vector<int> element(100002,true);
    dp(element,100002);
    while(t--)
    {
        int n;
        cin >> n;
        for(int i=2;i<=n;i++)
        {
            if(element[i]==true) cout<<i<<" ";
        }
        cout<<endl;
    }
	//code
	return 0;
}
