#include <stdio.h>

//creates function prototypes
float addition(float,float);
float subtraction(float,float);
float multiplication(float,float);
float division(float,float);
int modulus(int,int);
void prime(int);
int factorial(int);
float power(float,float);
void fibonacci(int);

/*---------------------------------------*/
//main

int main(){
	//creates the variable used by the user to choose an option from the calculator menu
	int iMenuChoice=1;
	
	//loops unless the user enter 0
	while(iMenuChoice!=0){
		//creates the calculator menu
		printf("\nCalculator Menu:\n");
		printf("(1) Addition\n");
		printf("(2) Subtraction\n");
		printf("(3) Multiplication\n");
		printf("(4) Division\n");
		printf("(5) Modulus (integers only)\n");
		printf("(6) Test if prime (integers only)\n");
		printf("(7) Factorial (integers only)\n");
		printf("(8) Power\n");
		printf("(9) Fibonacci sequence\n");
		printf("(0) Exit\n");
		
		//asks the user for an input to determine calculator option and assigns it to iMenuChoice
		printf("Please choose an operation: ");
		scanf("%d",&iMenuChoice);
		
		//runs the addition operation if the user chooses 1
		if(iMenuChoice==1){
			//creates two float variables
			float fNum1;
			float fNum2;
			
			//assigns fNum1 and fNum2 to the numbers the user wants to add
			printf("Enter the first number: ");
			scanf("%f",&fNum1);
			printf("Enter the second number: ");
			scanf("%f",&fNum2);
			
			printf("%.2f + %.2f = %.2f\n",fNum1,fNum2, addition(fNum1,fNum2));//prints the result
		}//end if
		
		//runs the subtraction operation if the user chooses 2
		else if(iMenuChoice==2){
			//creates two float variables
			float fNum1;
			float fNum2;
			
			//assigns fNum1 and fNum2 to the numbers the user wants to subtract
			printf("Enter the first number: ");
			scanf("%f",&fNum1);
			printf("Enter the second number: ");
			scanf("%f",&fNum2);
			
			printf("%.2f - %.2f = %.2f\n",fNum1,fNum2,subtraction(fNum1,fNum2));//prints the result
		}//end else if
		
		//runs the multiplication operation if the user chooses 3
		else if(iMenuChoice==3){
			//creates two float variables
			float fNum1;
			float fNum2;
			
			//assigns fNum1 and fNum2 to the numbers the user wants to multiply
			printf("Enter the first number: ");
			scanf("%f",&fNum1);
			printf("Enter the second number: ");
			scanf("%f",&fNum2);
			
			printf("%.2f * %.2f = %.2f\n",fNum1,fNum2,multiplication(fNum1,fNum2));//prints the result
		}//end else if
		
		//runs the division operation if the user chooses 4
		else if(iMenuChoice==4){
			//creates two float variables
			float fNum1;
			float fNum2;
			
			//assigns fNum1 and fNum2 to the numbers the user wants to divide
			printf("Enter the first number: ");
			scanf("%f",&fNum1);
			printf("Enter the second number: ");
			scanf("%f",&fNum2);
			
			//runs a loop if fNum2 is 0 (cannon divide by 0) and will not contiune until another value is chosen
			while(fNum2==0){
				printf("Denominator can not be 0, please enter another value: ");
				scanf("%f",&fNum2);
			}//end while loop
			
			printf("%.2f / %.2f = %.2f\n",fNum1,fNum2,division(fNum1,fNum2));//prints the result
		}//end else if
		
		//runs the modulous operation if the user chooses 5
		else if(iMenuChoice==5){
			//creates two integer variables
			int iNum1;
			int iNum2;
			
			//assigns iNum1 and iNum2 to the numbers the user wants to mod
			printf("Enter the first number: ");
			scanf("%d",&iNum1);
			printf("Enter the second number: ");
			scanf("%d",&iNum2);
			
			printf("%d %% %d = %d\n",iNum1,iNum2,modulus(iNum1,iNum2));//prints the result
		}//end else if
		
		//runs the primality check if the user chooses 6
		else if(iMenuChoice==6){
			//creates an integer variable
			int iNum;
			
			//assigns iNum to the number the user wants to check primality for
			printf("Enter the number to be tested: ");
			scanf("%d",&iNum);
			
			prime(iNum);//runs the prime function with iNum to check if the number is prime or not
		}//end else if
		
		//runs the factorial operation if the user chooses 7
		else if(iMenuChoice==7){
			//creates an integer variable
			int iNum;
			
			//assigns iNum to the number the user wants to get the factorial of
			printf("Enter the number to be tested: ");
			scanf("%d",&iNum);
			
			printf("%d\n",factorial(iNum));//prints the result
		}//end else if
		
		//runs the power operation if the user chooses 8
		else if(iMenuChoice==8){
			//creates two float variables
			float fNum1;
			float fNum2;
			
			//assigns fNum1 to be the base and fNum2 to be the exponent the user wants to use
			printf("Enter the first number: ");
			scanf("%f",&fNum1);
			printf("Enter the second number: ");
			scanf("%f",&fNum2);
			
			printf("%.2f",power(fNum1,fNum2));//prints the result
		}//end else if
		
		//runs the operation for the fibonacci sequence if the user chooses 9
		else if(iMenuChoice==9){
			//creates an integer variable
			int iNum;
			
			//assigns iNum to the number of elements of the fibonacci sequence the user wants
			printf("Enter number of elements to print (<=47): ");//>=48 elements leads to overflow
			scanf("%d",&iNum);
			
			//runs a loop if iNum is greater than 47 and will not continue until another value is chosen
			while(iNum>47){
				printf("Can only print up to 47 elements, please enter another value: ");
				scanf("%d",&iNum);
			}//end while loop
			
			fibonacci(iNum);//runs the fibonacci function
			
		}//end else if
		
		//checks if the user enters a number greater than the 0-9 options
		else if (iMenuChoice>9){
			printf("Please enter a number 0 - 9\n");
		}//end else if
	}//end while loop
	
	//once the user enter 0, the loop breaks and prints the good bye message
	printf("\nGood bye!");
	
	return 0;
}//end main

/*---------------------------------------*/
//function definitions

//creates the definition for the addition function
float addition(float operand1,float operand2){			
	float fResult=operand1+operand2;//creates a variable for the sum of two numbers
	return fResult;//returns the result
}//end addition function

//creates the definition for the subtraction function
float subtraction(float operand1,float operand2){
	float fResult=operand1-operand2;//creates a variable for the difference of two numbers
	return fResult;//returns the result
}//end subtraction function

//creates the definition for the multiplication funtion
float multiplication(float operand1,float operand2){
	float fResult=operand1*operand2;//creates a variable for the product of two numbers
	return fResult;//returns the result
}//end multiplication function

//creates the definition for the division function
float division(float operand1,float operand2){
	float fResult=operand1/operand2;//creates a variable for the quotient of two numbers
	return fResult;//returns the result
}//end division function

//creates the definition for the modulus function
int modulus(int operand1,int operand2){
	int iResult=operand1%operand2;//creates a variable for the remainder of two numbers
	return iResult;//returns the result
}//end modulus function

//creates the definition for the prime function
void prime(int operand){
	//checks if the number is 1 (never prime)
	if(operand==1){
		printf("%d is not prime\n",operand);
	}//end if
	//checks if the number is 2 (prime)
	else if(operand==2){
		printf("%d is prime\n",operand);
	}//end else if
	else{
		//runs a for loop from 2 up to operand given and increments by 1
		for(int i=2;i<operand;i++){
			
			//checks if any of the numbers from 2 up to the operand given is evenly divisible (not prime)
			if(operand%i==0){
				//prints the number is not prime along with two multiples that to show it is not prime and breaks the loop
				printf("Not prime: %d * %d = %d\n",i,operand/i,operand);
				break;
			}//end if
			
			//runs for any numbers that do not make the previous condition true
			else{
				//prints the number is prime and breaks the loop
				printf("%d is prime\n",operand);
				break;
			}//end else
		}//end for loop
	}//end else
}//end prime function

//creates the definition for the factorial function
int factorial(int operand){
	int iResult=1;//creates a variable for the result of the operation
	
	//runs a loop from 1 up to and including the operand given
	for(int i=1;i<=operand;i++){
		iResult*=i;//sets the result equal to the product of the previous result and iteration of the loop
	}//end for loop
	
	return iResult;//returns the result
}//end factorial function

//creates the definition for the power function
float power(float operand1,float operand2){//NOT DONE
	/*
	float fResult=1;//creates a variable for the result of the operation
	
	//runs a loop from 0 up to, but not including, operand2
	for(int i=0;i<operand2;i++){
		fResult*=operand1;//multiplies operand1 by itself
	}//end for loop

	return fResult;//returns the result
	*/
}//end power function

//creates the definition for the fibonacci function
void fibonacci(int operand){
	int iArray[operand];//creates an integer array with size based on the user input
	
	//assigns the first two elements to be 0 and 1
	iArray[0]=0;
	iArray[1]=1;
	
	//runs a for loop to set each element after the previous two to be the sum of the two elements before it
	for(int i=2;i<operand;i++){
		iArray[i]=iArray[i-1]+iArray[i-2];
	}//end for loop
	
	//runs a for loop to print the array
	for(int i=0;i<operand;i++){
		printf("%d\n",iArray[i]);
	}//end for loop
}//end fibonacci function