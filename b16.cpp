#include<bits/stdc++.h>
using namespace std;
int t,n,k,a[1000],ok=0;
	void in(){
		for(int i=1;i<=n;i++){
			cout<<a[i];
		}
		cout<<" ";
	}
	void sinh(){
		int i=n-1;
		while(a[i]>a[i+1]){
			i--;
		}
		if(i==0) ok=1;
		else {
			int j=n;
			while(a[i]>a[j]){
				j--;
			}
			int m=a[i];
			a[i]=a[j];
			a[j]=m;
			int d=i+1,c=n;
			while(d<c){
				int m=a[d];
				a[d]=a[c];
				a[c]=m;
				d++,c--;
			}
		}
		
	}
	int main(){
		cin>>t;
		while(t--){
			cin>>n;
			for(int i=1;i<=n;i++){
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

