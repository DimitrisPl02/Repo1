#include <iostream>
using namespace std;

int main()
{
	int number1, number2;
	int numberout=0;
	string words[]={"odd","one","two","three","four","five","six","seven","eight","nine","even"};
	cout <<"input the first number : ";
	cin >>number1;
	cout <<"input the second number : ";
	cin >>number2;
	for(numberout=number1; numberout<=number2; numberout++)
	{
		if(numberout <= 9)
		{
			cout <<words[numberout]<<endl;
		}
		else if(numberout > 9 && numberout%2==1)
		{
		    cout <<words[0]<<endl;
	    }
	    else if(numberout > 9 && numberout%2==0)
	    {
	    	cout <<words[10]<<endl;
		}
	}
   
  
   
	
}
