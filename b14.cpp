#include<bits/stdc++.h>
using namespace std;
int t,n,a[100],ok=0;
	void in(){
		for(int i=1;i<=n;i++){
			if(a[i]==0) cout<<'A';
			else cout<<'B';
		}
		cout<<" ";
	}
	void sinh(){
		int i=n;
		while(i>0&&a[i]==1){
			a[i]=0;
			i--;
		}
		if(i>0) a[i]=1;
		else ok=1;
	}
	int main(){
		cin>>t;
		while(t--){
			cin>>n;
			for(int i=1;i<=n;i++){
				a[i]=0;
			}
			while(!ok){
				in();
				sinh();
			}
			ok=0;
			cout<<endl;
		}


		return 0;
	}

