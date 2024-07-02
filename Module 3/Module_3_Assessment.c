//Module 3 Assesment : Calculator with choice

#include<stdio.h>
int main()
{
	//Declaring Function
	int add(int n1,int n2);
	int sub(int n1,int n2);
	int mul(int n1,int n2);
	float div(float n1,float n2);
	
	
	int num1,num2,choice,i,ans;
	float div_n1,div_n2,div_ans;
	char chr;
	
	//Loop to multipletime choice
	do{
	
	printf("\n\n----------------------MENU-----------------------\n\n");
	printf("1. Addition\n");
	printf("2. Substraction\n");
	printf("3. Multiplication\n");
	printf("4. Division\n");
		
	printf("\nEnter Your choice : ");
	scanf("%d",&choice);
	
		switch(choice)
		{
			case 1:
				printf("\nEnter first number: ");
				scanf("%d",&num1);
				printf("Enter second number: ");
				scanf("%d",&num2);
			
				//using Function
				ans = add(num1,num2);
				printf("\nAddition = %d",ans);
			break;
		
			case 2:
				printf("\nEnter first number: ");
				scanf("%d",&num1);
				printf("Enter second number: ");
				scanf("%d",&num2);
			
				ans = sub(num1,num2);
				printf("\nSubstraction = %d",ans);
			break;
		
			case 3:
				printf("\nEnter first number: ");
				scanf("%d",&num1);
				printf("Enter second number: ");
				scanf("%d",&num2);
				
				ans = mul(num1,num2);
				printf("\nMultiplication = %d",ans);
			break;
			
			case 4:
				printf("\nEnter first number: ");
				scanf("%f",&div_n1);
				printf("Enter second number: ");
				scanf("%f",&div_n2);
				
				div_ans = div(div_n1,div_n2);
				printf("\nDividation = %.2f",div_ans);
			break;
		
			default:
				printf("\nInvalid Choice !!!\n");
			break;
		}
		
		printf("\n\nYou Want to operate again (y/n) : ");
		scanf(" %c",&chr);
	
	}while(chr == 'y' || chr == 'Y');
	
	printf("Okay!!! Thank you.....");
	return 0;
}


//Logic in function
int add(int n1,int n2)
{
	int ans;
	ans = n1 + n2;
	return ans;
}

int sub(int n1,int n2)
{
	int ans;
	ans = n1 - n2;
	return ans;
}

int mul(int n1,int n2)
{
	int ans;
	ans = n1 * n2;
	return ans;
}

float div(float n1,float n2)
{
	float ans;
	ans = n1 / n2;
	return ans;
}



