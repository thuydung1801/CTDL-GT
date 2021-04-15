#include<bits/stdc++.h>
using namespace std;
int t,n,k,a[100],ok=0;
	void in(){
		for(int i=1;i<=n;i++){
			cout<<a[i];
		}
		cout<<endl;
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
	void check(){
		int dem=0;
		for(int i=1;i<=n;i++){
			if(a[i]==1) dem++;
		}
		if(dem==k){
			in();
		}
	}
	int main(){
		cin>>t;
		while(t--){
			cin>>n>>k;
			for(int i=1;i<=n;i++){
				a[i]=0;
			}
			while(!ok){
			//	in();
			//check();
				sinh();
				check();
			}
			ok=0;
		
		}


		return 0;
	}

