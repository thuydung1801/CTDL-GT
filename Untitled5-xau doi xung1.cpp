#include <bits/stdc++.h>
using namespace std;
int dp[1000][1000],n,m,t,tmp;
int main(){
    int t;
    cin>>t;
    while (t--){
        string x;
        cin>>x;
        string y;
        y=x;
        tmp=0;
        reverse(y.begin(),y.end());
        memset(dp,0, sizeof(dp));
        for (int i=1;i<=x.size();i++){
            for (int j=1;j<=y.size();j++){
                if (x[i-1]==y[j-1])
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                else
                    dp[i][j]=max(dp[i - 1][j],dp[i][j - 1]);
                tmp=max(tmp,dp[i][j]);
            }
        }
        cout<<x.size()-tmp<<endl;
    }
    return 0;
}
