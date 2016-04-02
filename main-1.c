#include <stdio.h>
 
int add(int, int);
int sub(int, int);
int div(int, int);
int multi(int, int);
 
int main(int argc, char* argv[])
{
	int num_a, num_b, c;
	char operator;
	
	printf("Please enter a expression");
	scanf("%d %c %d", &a, &operator, &b);
	
	switch (operator)
	{
		case '+':
			c = add(num_a, num_b);
			break;
		case '-':
			c = sub(num_a, num_b);
			break;
		case '*':
			c = multi(num_a, num_b);
			break;
		case '/':
			c = div(num_a, num_b);
			break;
	}
	
	printf("result is %d.\n", c);
	
	return 0;
}
 
int add(int a, int b)
{
	//TODO implementation
	return 0;
}
 
int sub(int a, int b)
{
	//TODO implementation
	return 0;
}
 
int multi(int a, int b)
{
	//TODO implementation
	return 0;
}
 
int div(int a, int b)
{
	//TODO implementation
	return 0;
}