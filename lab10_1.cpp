#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	int y=1;
	double l, r, p;
	cout << "Enter initial loan: ";	cin>>l;
	cout << "Enter interest rate per year (%): "; cin>>r;
	cout << "Enter amount you can pay per year: "; cin>>p; 

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	while(l>0){
	cout << fixed << setprecision(2); 
	cout << setw(13) << left << y; 
	cout << setw(13) << left << l;
	cout << setw(13) << left << l*(r/100.0);
	cout << setw(13) << left << l+(l*(r/100.0));
	if(p<l+(l*(r/100.0))){
	cout << setw(13) << left << p;
	cout << setw(13) << left << (l+(l*(r/100.0)))-p;
	l = (l+(l*(r/100.0)))-p;
	}else{
	p = l+(l*(r/100.0));
	cout << setw(13) << left << p;
	cout << setw(13) << left << (l+(l*(r/100.0)))-p;
	l = (l+(l*(r/100.0)))-p;
	}
	cout << "\n";	
	y++;
	}
	return 0;
}
