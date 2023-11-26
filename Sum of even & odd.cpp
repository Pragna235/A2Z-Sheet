#include<iostream>
using namespace std;

int main() {
	// Write your code here
	long n;
	int digit,odd=0,even=0;
	cin>>n;
	while(n){
		digit=n%10;
		if(digit%2==0){
			even+=digit;

		}
		else{
			odd+=digit;
		}
		n=n/10;
	}
	cout<<even<<" "<<odd<<endl;
	return 0;
	
}
