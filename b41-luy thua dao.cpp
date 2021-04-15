#include<bits/stdc++.h>
using namespace std;
long long m=1e9+7;
long long luythua(long long n,long long r){
	if(r==1) return n;
	else{
		
		long long temp=luythua(n,r/2);
		if(r%2==0) return (temp%m*temp%m)%m;
		return (temp%m*temp%m*n%m)%m;
	}
}
long long soDao(long long n){
    long long s=0;
    while(n){
        s=s*10+n%10;
        n/=10;
    }
    return s;
}
	int main(){
		int t;
		cin>>t;
		while(t--){
			long long n;
			cin>>n;
			long long r=soDao(n);
		
			cout<<luythua(n,r)<<endl;
		}


		return 0;
	}

