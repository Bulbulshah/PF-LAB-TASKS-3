#include<iostream>
using namespace std;

int main(){
	
	int num;
	cout<<"Enter positive intiger  "<<endl;
	cin>>num;
	
	if(num<=0){
		cout<<" invalid entry. Enter positive integers "<<endl;
	}
	for(int i=num;  i>=1; i--){
		
		for( int j=i; j>=1; j--){
			
			cout<<j;
		}
		cout<<endl;
	}
	
	return 0;
}