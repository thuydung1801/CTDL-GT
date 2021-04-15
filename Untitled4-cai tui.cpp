#include <bits/stdc++.h>
using namespace std;
const int M = 1001;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,v,arr[M],b[M],dp[M][M],sum = 0;
        cin>>n>>v;
        for (int i=1;i<=n;i++)
            cin>>arr[i];
         for (int i=1;i<=n;i++)
            cin>>b[i];   
        memset(dp,0,sizeof(dp));
        for(int i=1; i<=n;i++){
            for (int j=1;j<=v;j++){
                if (j<arr[i])
                    dp[i][j]=dp[i-1][j];
                else
                    dp[i][j]=max(dp[i-1][j],dp[i-1][j-arr[i]]+b[i]);
                sum=max(dp[i][j],sum);
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
