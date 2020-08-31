#include <iostream>
#include <string>
using namespace std;

int main(){
	int ar[10],n,rep,miss,num,temp;
	cout<<"Enter number of elements:";
	cin>>n;
	cout<<"Enter array from 1 to n";
	for(int i=0;i<n;i++){
		cin>>ar[i];
	}
	cout<<endl;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(ar[j]<ar[i]){
			temp=ar[j];
			ar[j]=ar[i];
			ar[i]=temp;
			}
		}
	}
	cout<<"Sorted array:";
	for(int i=0;i<n;i++){
		cout<<ar[i]<<" ";
	}
	return 0;
}
