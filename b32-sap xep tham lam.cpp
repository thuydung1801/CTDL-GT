#include<bits/stdc++.h>
using namespace std;
	int main(){
		int t;
		cin>>t;
		while(t--){
			int n,ok=0;
			cin>>n;
			int a[n+1];
			vector <int> b;
		//	a.clear();
			b.clear();
			for(int i=0;i<n;i++){
				cin>>a[i];
				b.push_back(a[i]);
			}
			sort(b.begin(),b.end());
			for(int i=0;i<n;i++){
				if(a[i]!=b[i] && a[i]!=b[n-i-1]){
					ok=1;
					break;
				}
			}
			
			if(ok==0) cout<<"Yes"<<endl;
			else cout<<"No"<<endl;
		}


		return 0;
	}

