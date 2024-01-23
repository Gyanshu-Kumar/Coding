#include<iostream>
using namespace std;
int main(){
	int num1;
	int num2;
	cin>>num1>>num2;

	cout<<"The value of num1 is"<<num1<<endl;
	cout<<"The value of num2 is"<<num2<<endl;

	int temp;
	temp = num1;
	num1 = num2;
	num2 = temp;

	cout<<"The new value of num1 is"<<num1<<endl;
	cout<<"The new value of num2 is"<<num2<<endl;

	return 0;

	

	
}