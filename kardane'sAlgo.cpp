#include<iostream>
#include<string>
using namespace std;

int maxsum(int ar[], int n){
	int msf=INT_MIN,meh=0;
	for(int i=0;i<n;i++){
		meh=meh+ar[i];
		if(msf<meh)
			msf=meh;
		if(meh<0)
			meh=0;
	}
	return msf;
}

int main(){
	
	int ar[]={-2,-3,4,-1,-2,1,5,-3},n;
	n=sizeof(ar)/sizeof(ar[0]);
	cout<<n;
	
	int msum=maxsum(ar,n);
	cout<<"Max sum of subarray is:"<<msum;
	return 0;
}
