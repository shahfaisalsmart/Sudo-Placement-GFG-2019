// Author: Mohammad Faisal
// Email: mohammad.faisal78612@gmail.com
#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;
void smallOutput(long long num, long long n, vector<long long> &arr)
{
    queue<long long> pending;
    pending.push(num);
    
    while(!pending.empty())
    {
        int curr = pending.front();
        pending.pop();
        
        if(curr <= n)
        {
            arr.push_back(curr);
            int last_dig = curr%10;
            
            if(last_dig ==0)
                pending.push((curr*10 + (last_dig+1)));
            
            else if(last_dig == 9)
                pending.push((curr*10) + (last_dig -1));
            
            else 
            {
                  pending.push((curr*10 + (last_dig+1)));
                  pending.push((curr*10) + (last_dig -1));
            }
        }
    }
}
vector<long long> solve(long long n)
{
    vector<long long> ans;
    ans.push_back(0);
    for(long long i=1;i<=9 && i<=n;i++)
    {
        smallOutput(i,n,ans);
    }
    
    return ans;
}
// using namespace std;
int main()
 {
    fast
    int t;
    cin >> t;
    while(t--)
    {
        long long n;
        cin >> n;
        
        vector<long long> res;
        res = solve(n);
        sort(res.begin(),res.end());
        
        vector<long long>:: iterator it;
        
        for(it = res.begin();it!=res.end();it++)
            cout<<*it<<" ";
        cout<<endl;
    }
	//code
	return 0;
}
