#include <iostream>
#include <string>
using namespace std;

int main(){
	int n;
	cout<<"Enter number of elements:";
	cin>>n;
	
	int ar[n];
	int repeat,missing;
	bool present[n+1]={false};
	
	cout<<"Enter array:";
	for(int i=0;i<n;++i)
		cin>>ar[i];
		
	for(int i=0;i<n;i++){
		if(present[ar[i]]==true)
			repeat=ar[i];
		present[ar[i]]=true;
	}
	
	for(int i=1;i<n;++i){
		if(present[i]==false){
			missing=i;
			break;
		}
	}
	cout<<"Missing number:"<<missing<<endl;
	cout<<"Repeating number:"<<repeat;
	
	return 0;
}
