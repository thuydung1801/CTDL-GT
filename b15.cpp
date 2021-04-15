#include<bits/stdc++.h>
using namespace std;
int t,n,k,a[1000],ok=0;
	void in(){
		for(int i=1;i<=k;i++){
			cout<<a[i];
		}
		cout<<" ";
	}
	void sinh(){
		int i=k;
		while(a[i]==n-k+i){
			i--;
		}
		if(i==0) ok=1;
		else{
			a[i]++;
			for(int j=i+1;j<=k;j++){
				a[j]=a[j-1]+1;
			}
		}
	}
	int main(){
		cin>>t;
		while(t--){
			cin>>n>>k;
			for(int i=1;i<=k;i++){
				a[i]=i;
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

