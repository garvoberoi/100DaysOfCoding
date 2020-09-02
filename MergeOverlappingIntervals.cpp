#include<bits/stdc++.h>
using namespace std;

struct Interval{
	int start,end;
};

bool compare(Interval i1, Interval i2){
	return(i1.start<i2.start);
}

void mergeIntervals(Interval ar[], int n){
	
	if(n<=0)
		return;
	stack<Interval> s;
	sort(ar, ar+n, compare);
	s.push(ar[0]);
	
	for(int i=1;i<n;i++){
		
		Interval top=s.top();
		if(top.end<ar[i].start)
			s.push(ar[i]);
		else if(top.end<ar[i].end){
			top.end=ar[i].end;
			s.pop();
			s.push(top);
		}
	}
	cout<<"The merged Intervals are:";
	while(!s.empty()){
		
		Interval t=s.top();
		cout<<"["<<t.start<<","<<t.end<<"]";
		s.pop();
	}
	return;
	
}
int main(){
	
	Interval ar[]={{6.8},{1,9},{4,7},{2,4}};
	int n=sizeof(ar)/sizeof(ar[0]);
	mergeIntervals(ar,n);
	return 0;
}
