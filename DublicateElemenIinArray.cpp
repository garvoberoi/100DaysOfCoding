#include <iostream>
#include <string>
using namespace std;

int main(){
	int ar[6],num,place;
	bool rep=true;
	cout<<"Enter array:";
	for(int i=0;i<5;i++){
		cin>>ar[i];
	}
	cout<<"Array:";
	for(int i=0;i<5;i++){
		cout<<ar[i]<<" ";
	}
	cout<<endl;
	for(int i=0;i<5;i++){
		if(ar[i+1]==ar[i]){
			rep=true;
			num=ar[i+1];
			place=i+1;
			break;
		}
		else{
			rep=false;
		}	
	}
		
	if(rep==true){
		cout<<num<<" is repeated on"<<place+1<<"th place.";
	}
	else{
		cout<<"No number is repeated!!";
	}
	return 0;
}
