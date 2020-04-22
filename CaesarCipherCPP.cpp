#include<iostream>
using namespace std;
main()
{
	int i;
	int shift;
	char string[100]="0";
	
	cout<<"Welcome to Caeser Cipher Encryption"<<endl;
	cout<<"Kindly enter the string to be encrypted : "<<endl;
	cin>>string;
	
	cout<<"Kindly enter the number of shifts in the code"<<endl;
	cin>>shift;
	
		for(i=0;i<100;i++)
			{
				string[i]=string[i]+shift;
			}
			
			
	cout<<"The encrypted string is : "<<string<<endl;

}
