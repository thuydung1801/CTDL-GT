#include<bits/stdc++.h>
using namespace std;
int n,m,a[100],ok=0,dem=1;
long long res;
void Try(int i){
	for(int j=0;j<=1;j++){
		a[i]=j;
		if(i==m){
			long long s=0;
			for(int k=1;k<=m;k++){
				s=s*10+a[k];
			}
	
			if(s>res&&dem<n){
				cout<<s<<" ";
				res=s;
				dem++;
			//	ok=1;
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
			 m=2;
			 ok=0;
			 res=1;
			 cout<<res<<" ";
			  dem=1;
			while(m<=17 &&!ok ){
				Try(1);
				m++;
			}
			cout<<endl;
		}

		return 0;
	}
