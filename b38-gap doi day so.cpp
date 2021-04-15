#include<bits/stdc++.h>
using namespace std;
	long long mu(int n){
		if(n==0) return 1;
		if(n==1) return 2;
		long long p=mu(n/2);
		if(n%2==0) return p*p;
		else return 2*p*p;
	}
	int main(){
		int t;
		cin>>t;
		while(t--){
			int n;
			long long k;
			cin>>n>>k;
			long long len=mu(n)/2;
			while(1){
				if(n==1){
					cout<<"1";
					break;
				} 
				if(len==k){
					cout<<n;
					break;
				} 
				if(k>len){
					k=2*len-k;
				}
				n--,len/=2;
			}
			cout<<endl;
		}


		return 0;
	}

