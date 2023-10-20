#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int n = s.size();
    string ans;
    int count = 0;
    ans.push_back(s[0]);
    for(int i = 1; i < n; i++){
        if(s[i-1] == s[i]){
            count++;
        }else if (s[i-1] != s[i]){
            if(count >= 1) ans+=to_string(count+1);
            ans.push_back(s[i]);
            count = 0;
        }
    }
    if(count>=1) ans+=to_string(count+1);

    cout << ans;

    return 0;
}
