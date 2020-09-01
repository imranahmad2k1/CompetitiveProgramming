#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
int main(){
        int t;
	cin>>t;
	while(t--){
	 	int n;
		cin>>n;
		string total="";
		for(int i=0;i<n;++i){
			string s;
			cin>>s;
			total+=s;	
		}
		sort(total.begin(), total.end());
		int count=1;
		bool flag=true;
		for(unsigned int i=0;i<total.size();++i){
			if(total[i]==total[i+1])count++;
			else{
				if(count%n!=0){
					flag=false; 
					break;
				}
				else{
					count=1;
				}
			}
		}
		flag==true?cout<<"YES"<<endl:cout<<"NO"<<endl;
	}
	
	return 0;
}