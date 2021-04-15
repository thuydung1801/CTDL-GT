#include<bits/stdc++.h>
using namespace std;
int t,n,k,a[10001];
	void in(){
		for(int i=1;i<=k;i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
	void sinh(){
		int i=k;
		while(i>0&&a[i]==n-k+i){
			i--;
		}
		if(i>0) {
			a[i]++;
			for(int j=i+1;j<=k;j++){
				a[j]=a[i]+j-i;
			}
		}
		else{
			for(int i=1;i<=k;i++){
				a[i]=i;
			}
		}
	}

	int main(){
		cin>>t;
		while(t--){
			cin>>n>>k;
			for(int i=1;i<=k;i++){
				cin>>a[i];
			}
			sinh();
			in();
		}


		return 0;
	}

