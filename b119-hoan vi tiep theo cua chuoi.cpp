#include<bits/stdc++.h>
using namespace std;
int n,m,a[100],ok=0;


	int main(){
		int t;
		cin>>t;
		while(t--){
			int p;
			string s;
			cin>>p>>s;
			for(int i=1;i<=s.size();i++)
				a[i]=int(s[i-1]-'0');
			n=s.size()-1;
			while(n>0&&a[n]>=a[n+1]) n--;
			if(n<=0) cout<<p<<" "<<"BIGGEST"<<endl;
			else{
				int j=s.size();
				while(a[n]>=a[j]) j--;
				swap(a[n],a[j]);
				int d=n+1,k=s.size();
				while(d<k){
					swap(a[d],a[k]);
					d++,k--;
				}
				cout<<p<<" ";
				for(int j=1;j<=s.size();j++){
					cout<<a[j];
				}
				cout<<endl;
			}
		}

		return 0;
	}

