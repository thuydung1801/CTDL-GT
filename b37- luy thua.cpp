#include<bits/stdc++.h>
using namespace std;
int m=1e9+7;

	long long luythua(int a,int b){
		if(b==1) return a;
		else{
			long long temp= luythua(a,b/2);
			if(b%2==0) return temp*temp%m;
			else return a*(temp*temp%m)%m;
		}
	}
	int main(){
		int t;
		cin>>t;
		while(t--){
		int a,b;
			cin>>a>>b;
			cout<<luythua(a,b)<<endl;
		}


		return 0;
	}

