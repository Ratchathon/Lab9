#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;
#include<cmath>

int main(){	
	int loan , pay ,i = 1;
	float inter,total,New ;
	double dok;
	cout << "Enter initial loan: ";
	cin>>loan;
	cout << "Enter interest rate per year (%): ";
	cin>>inter;
	cout << "Enter amount you can pay per year: ";
	cin>>pay;
	dok = loan*(inter/100);
	total = loan+dok;
	New = total - pay;
	
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	cout << fixed << setprecision(2); 
	//for(i==1;New<=0;i++){
	cout << setw(13) << left << i; 
	cout << setw(13) << left << loan;
	cout << setw(13) << left << dok;
	cout << setw(13) << left << total;
	cout << setw(13) << left << pay;
	cout << setw(13) << left << New;
	cout << "\n";	
	//}
	
	
	return 0;
}
