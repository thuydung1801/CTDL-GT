#include<bits/stdc++.h>
using namespace std;
	int main(){
		int t;
		cin>>t;
		while(t--){
			int n,k=0;
			cin>>n;
			int a[n+1];
			for(int i=0;i<n;i++){
				cin>>a[i];
			}
			
			 
			sort(a,a+n);
			int min=a[0],min2=a[1];
			for (int i = 0; i < n; i++)
        {
            if(min!=min2){
                cout << min << " " << min2 << endl;
                break;
            }
            else{
                min2=a[i];
            }
            if(i==n-1){
                cout << "-1" << endl;
                break;
            }
        }
}


		return 0;
	}

