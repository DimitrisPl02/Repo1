#include <iostream>
using namespace std;

int compNumber(int num1, int num2, int num3, int num4 )
{
	if(num1-num2 > 0 && num1-num3 >0 && num1-num4 > 0 )
	{
	    return(num1);
	}
	else if(num2-num1 > 0 && num2-num3 >0 && num2-num4 > 0)
	{
		return(num2);
	}
		else if(num3-num1 > 0 && num3-num2 >0 && num3-num4 > 0)
	{
		return(num3);
	}
	else
	{
		return(num4);
	}
}

int main()
{
   int numb1, numb2, numb3, numb4, greaterNumber;
   cout <<"input four random integer numbers : "<<endl;
   cin >> numb1 >> numb2 >> numb3 >> numb4;
   greaterNumber=compNumber(numb1, numb2, numb3, numb4);
   cout <<"the greater number is "<< greaterNumber <<endl;
}
