#include<iostream>
using namespace std;

int main(){
	cout<<"SIMPLE CALCULATOR:"<<endl;
	int num1, num2, choice;
	cout<<"Choose the Arithmetic Operation:"<<endl;
	cout<<"1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n";
	
	
	cout<<"Enter the value of num1:"<<endl;
	cin>>num1;
	cout<<"Enter the value of num2:"<<endl;
	cin>>num2;
	cout << "Choose the Arithmetic Operation:" << endl;
	cin >> choice;

	
	switch(choice) {
		case 1:
			cout<<"Arithmetic operation: Addition\n";
			cout<<"Addition of two numbers is: "<<num1+num2<<endl;
			break;
		case 2:
			cout<<"Arithmetic operation: Subtraction\n";
			cout<<"Subtraction of the numbers is: "<<num1-num2<<endl;
			break;
		case 3:
			cout<<"Arithmetic operation: Multiplication\n";
			cout<<"Multiplication of two numbers is: "<<num1*num2<<endl;
			break;
		case 4:
			cout<<"Arithmetic operation: Division\n";
			if(num2 != 0)
				cout<<"Division of two numbers is: "<<num1/num2<<endl;
			else
				cout<<"Cannot divide by zero!"<<endl;
			break;
		default:
			cout<<"Invalid choice!"<<endl;
	}
	
	return 0;
}
