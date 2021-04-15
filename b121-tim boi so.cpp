#include<bits/stdc++.h>
using namespace std;
int n,m,a[100],ok=0;
long long res;
void Try(int i){
	for(int j=0;j<=1;j++){
		a[i]=j;
		if(i==m){
			long long s=0;
			for(int k=1;k<=m;k++){
				s=s*10+a[k];
			}
			s*=9;
			if(s%n==0 && s>=n){
				res=min(res,s);
				ok=1;
			}
		}
		else Try(i+1);
	}
}
	int main(){
		int t;
		cin>>t;
		while(t--){
			cin>>n;
			 m=1;
			 ok=0;
			 res=1e18;
			while(m<=17 && !ok){
				Try(1);
				m++;
			}
			
			cout<<res<<endl;
		}

		return 0;
	}

