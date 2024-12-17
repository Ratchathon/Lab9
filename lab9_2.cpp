#include<iostream>
using namespace std;

void printO(int N,int M)
{
    
      
    if(N<=0)
    {
        cout<<"Invalid input";
    }else if(M<=0)
    {
        cout<<"Invalid input";
    }
    {
        for(int d = 0;N>d;d++)
    {
    for(int i = 0 ;M>i;i++)
    {
        cout<<"O";
    }cout<<endl;
    }
    }
}

int main(){
	
	printO(2,2);
	cout << "\n";
	
	printO(3,5);
	cout << "\n";	
	
	printO(5,3);
	cout << "\n";	
	
	printO(0,3);
	cout << "\n";	
	
	printO(7,-1);
	cout << "\n";	
	
	return 0;
}
