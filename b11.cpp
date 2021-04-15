#include<bits/stdc++.h>
using namespace std;

	void sinh(string s){
		int i=s.size()-1;
		while(i>=0){
			if(s[i]=='1') s[i]='0';
			else {
				s[i]='1';
				break;
			}
			i--;
		}
		cout<<s<<endl;
	}
	int main(){
		int n;
		cin>>n;
		string s;
		
		while(n--){
			cin>>s;
			sinh(s);
			
		}


		return 0;
	}

