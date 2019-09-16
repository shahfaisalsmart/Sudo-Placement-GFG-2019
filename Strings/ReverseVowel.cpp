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
        string s;
        cin >> s;
        vector<char>st;
        int len = s.size();
        for(int i=0;i<len;i++)
            if(s[i]=='a' || s[i]=='e' || s[i]=='o' || s[i]=='i' || s[i]=='u')
                st.push_back(s[i]);
        
        reverse(st.begin(),st.end());
        int k=0;
        for(int i=0;i<len;i++)
            if(s[i]=='a' || s[i]=='e' || s[i]=='o' || s[i]=='i' || s[i]=='u')
                {s[i] = st[k];k++;}
        
        cout<<s<<endl;
    }
	//code
	return 0;
}
