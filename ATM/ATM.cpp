#include <iostream>
using namespace stg;

void showMenu () {
	cout<< "**********MENU**********"
	cout<< "1. Check Balance" << endl;
	cout<< "2. Deposit" << endl;
	cout<< "3. WithDraw" << endl;
	cout<< "4. Exit" << endl;
	cout<< "************************"
}
int main()
{
	//check balance, deposit, withdraw, show menu 
	int option
	double balance = 500;
	do{
	showMenu();
	cout<<"Option: ";
	cin>> option;
	system("cls");
	switch(option){
	case 1: cout<<"Balance is: "<<balance<<" $"<< endl; break;
	case 2: cout<<"Deposit amount:";
		double depositAmount
	cin>> depositAmount;
	balance+= depositAmount; 
	break;
	case 3: cout<<"Withdraw amount:";
		double withdrawAmount
	cin>> withdrawAmount;
	if(withdrawAmount<=balanace)
		balance-= withdrawAmount;	
	else
	cout<<"Not enough money" <<	endl;
	break;
	}
	}while(option |=4);
	
	
	system("paused>0");
}
