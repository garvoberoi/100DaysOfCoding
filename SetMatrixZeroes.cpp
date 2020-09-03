#include<bits/stdc++.h>
using namespace std;

int main(){
	int ar[3][3];
	int i,j;
	bool row_visited[3]={false};
	bool col_visited[3]={false};
	
	cout<<"Enter Matrix of 0's and 1's :";
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			cin>>ar[i][j];
		}
	}
	cout<<endl;
	cout<<endl;
	cout<<"Entered Matrix:"<<endl;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			cout<<ar[i][j]<<" ";
		}cout<<endl;
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(ar[i][j]==0){
				row_visited[i]=true;
				col_visited[j]=true;
			}
		}
	}
 	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(row_visited[i]||col_visited[j]){
				ar[i][j]=0;
			}
		}
	}
	cout<<"Matrix Matrix after setting Zeroes:"<<endl;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			cout<<ar[i][j]<<" ";
		}cout<<endl;
	}
	return 0;
}
