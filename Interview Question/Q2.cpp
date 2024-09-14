#include<bits/stdc++.h>
using namespace std;

int main() {
    string s; cin>>s;
	int count =0;
	int len= s.size();
	
	for(int i=0; i<len; i++){
		if(s[i]==s){
		  count++;	 		
		}
		else if(s[i]!=s){
		   break;
		}
	
	}
	
	cout<<count<<endl;

    return 0;
}
