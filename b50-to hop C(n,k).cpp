#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,k,tmp[1005][1005];
const ll mod=1e9 +7;
void tao(){
	for(int i=0;i<=1000;i++){
		for(int j=0;j<=i;j++){
			if(i==j||j==0) tmp[i][j]=1;
			else {
				tmp[i][j]=tmp[i-1][j]+tmp[i-1][j-1];
			}
			tmp[i][j]%=mod;
		}
	}
}
	int main(){
		tao();
		int t;
		cin>>t;
		while(t--){
			cin>>n>>k;
			cout<<tmp[n][k]<<endl;
		}


		return 0;
	}

