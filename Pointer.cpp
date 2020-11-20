#include <iostream>
using namespace std;

void update(int *numb1, int *numb2)
{
	int sum, diff, absoDiff;
	*sum = *numb1 + *numb2;
	*diff = *numb1 - *numb2;
	if(diff > 0)
	{
		absoDiff=diff;
	}
	else
	{
		absoDiff= -diff;
	}
	*numb1 = &sum;
	*numb2 = &absoDiff;
}


int main ()
{
	int num1, num2;
	int *pa=&num1, int *pb=&num2
	cout <<"input two numbers : "<<endl;
	cin >>num1>>num2;
	update(num1, num2);
	cout <<&num1<<endl<<&num2<<endl;
	
	
}
