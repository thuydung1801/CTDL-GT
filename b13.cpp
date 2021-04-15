#include<bits/stdc++.h>
using namespace std;
int n,a[1000],t,ok=0;
void in(){
	for(int i=1;i<=n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
void sinh(){
	int i=n-1;
	while(i>0&&a[i]>a[i+1]){
		i--;
	}
	if(i==0) ok=1;
	int j=n;
	while(a[i]>a[j]) j--;
	int m=a[i];
	a[i]=a[j];
	a[j]=m;
	int d=i+1,c=n;
	while(d<=c){
		int m=a[d];
		a[d]=a[c];
		a[c]=m;
		d++,c--;
	}

}
	int main(){
		cin>>t;
		while(t--){
			cin>>n;
			for(int i=1;i<=n;i++){
				cin>>a[i];
			}
			sinh();
			if(ok==0) in();
			else{
				for(int i=1;i<=n;i++)
					a[i]=i;
				in();
			}
		}


		return 0;
	}

