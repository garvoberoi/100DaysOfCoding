#include <iostream>
#include <string>
using namespace std;

int main(){
	int ar[10],n,zero=0,one=0;
	cout<<"enter size of array:";
	cin>>n;
	
	cout<<"Enter array:";
	for(int i=0;i<n;i++){
		cin>>ar[i];
	}
	cout<<"Array:";
	for(int i=0;i<n;i++){
		cout<<ar[i]<<" ";
	}
	for(int i=0;i<n;i++){
		if(ar[i]==0){
			zero++;
		}
		else if(ar[i]==1){
			one++;
		}
	}
	for(int i=0;i<n;i++){
		if(i<zero)
			ar[i]=0;
		if(i>=zero && i<(zero+one))
			ar[i]=1;
		if(i>=(zero+one))
			ar[i]=2;
	}
	cout<<"Array after sorting:";
	for(int i=0;i<n;i++){
		cout<<ar[i]<<" ";
	}
	return 0;
}
