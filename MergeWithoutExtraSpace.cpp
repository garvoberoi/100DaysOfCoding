#include<iostream>
#include<string>
using namespace std;

void merge(int ar1[],int m,int ar2[], int n){
	
	for(int i=n-1;i>=0;i--){
		int j;
		int last=ar1[m-1];
		for(j=m-2;j>=0 && ar1[j]>ar2[i];j--){
			ar1[j+1]=ar1[j];
		}
		if(j!=m-2 || last>ar2[i]){
			ar1[j+1]=ar2[i];
			ar2[i]=last;
		}
	}
	
}

int main(){
	int m,n;
	cout<<"Enter sizes of Array 1 and Array 2:";
	cin>>m>>n;
	
	int ar1[m],ar2[n];
	cout<<"Enter array 1:";
	for(int i=0;i<m;i++)
		cin>>ar1[i];
	cout<<"Enter array 2:";
	for(int i=0;i<n;i++)
		cin>>ar2[i];
	
	merge(ar1,m,ar2,n);
	
	cout<<"Merged arrays are:";
	for(int i=0;i<m;i++)
		cout<<ar1[i]<<" ";
	for(int j=0;j<n;j++)
		cout<<ar2[j]<<" ";
	
	return 0;
	
}
