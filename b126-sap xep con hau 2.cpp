#include<bits/stdc++.h>
using namespace std;
	int t,n,a[100],xuoi[100],nguoc[100],X[100],sum=0,max=0,b[100][100];
	
	void Try(int i){
		for(int j=1;j<=8;j++){
			if(!a[j]&&!xuoi[i-j+8]&&!nguoc[i+j-1]){
				X[i]=b[i][j];
				a[j]=1;
				xuoi[i-j+8]=1;
				nguoc[i+j-1]=1;
				if(i==8) {
					for(int k=1;k<=8;k++)
						sum+=X[k];
					if(sum>max) max=sum;
				}
				else
					Try(i+1);
				a[j]=0;
				xuoi[i-j+8]=0;
				nguoc[i+j-1]=0;
				
			}
		}
	}
	int main(){
		int t;
		cin>>t;
		while(t--){
			dem=0;
		//	cin>>n;
			for(int i=1;i<=8;i++)
				for(int j=1;j<=8;j++)
					cin>>b[i][j];
			Try(1);
			cout<<max<<endl;
			
		}


		return 0;
	}

