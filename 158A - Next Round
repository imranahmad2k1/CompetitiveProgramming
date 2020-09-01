#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
int main(){
	int n;
	cin>>n;

	int index;
	cin>>index;

	int array[n];
	for(int i=0;i<n;++i){
		int ai;
		cin>>ai;
		array[i]=ai;
	}

	int score=array[index-1];

	int count=0;
	for(unsigned int i=0;i<sizeof(array)/4;++i){
		if(array[i]>=score && array[i]>0)count++;
	}
	cout<<count<<"\n";
	return 0;
}