#include <iostream>
#include <string>

using namespace std;

class Calculator{
	public:
		void printStartMenu(){
			cout<<"\nCalculator Menu: "<<endl;
			cout<<"(1) Basic Operations"<<endl;
			cout<<"(2) Advanced Operations"<<endl;
			cout<<"(3) Conversions"<<endl;
			cout<<"(0) Exit"<<endl;
		}//end printMenu()
		
		void printBasicOpMenu(){
			cout<<"(1) Addition"<<endl;
			cout<<"(2) Subtraction"<<endl;
			cout<<"(3) Multiplication"<<endl;
			cout<<"(4) Division"<<endl;
			cout<<"(5) Modulus"<<endl;
			cout<<"(0) Exit"<<endl;
		}//end printBasicOpMenu()
		
		void printAdvOpMenu(){
			cout<<"(1) Power"<<endl;
			cout<<"(2) Root"<<endl;
			cout<<"(3) Absolute Value"<<endl;
			cout<<"(4) Factorial"<<endl;
			cout<<"(0) Exit"<<endl;
		}//end printAdvOpMenu()
		
		float add(float op1, float op2){
			return op1 + op2;
		}//end add()
		
		float subtract(float op1, float op2){
			return op1 - op2;
		}//end subtract()
		
		float multiply(float op1, float op2){
			return op1 * op2;
		}//end multiply()
		
		float divide(float op1, float op2){
			return op1 / op2;
		}//end divide()
		
		int modulo(int op1, int op2){
			return op1 % op2;
		}//end modulo()
		
		float power(float op1, float op2){
			if(op2==0){
				return 1;
			}//end if
			else if(op1==0){
				return 0;
			}//end else if
			else if(op2>0){
				float fResult=1;
				
				for(int i=0;i<op2;i++){
					fResult*=op1;
				}//end for loop
				
				return fResult;
			}//end else if
			else if(op2<0){
				float fResult=1;
				
				op2=absVal(op2);
				
				for(int i=0;i<op2;i++){
					fResult*=op1;
				}//end for loop
				
				fResult=divide(1, fResult);
				return fResult;
			}//end else if
		}//end power()
		
		float absVal(float op){
			if(op>=0){
				return op;
			}//end if
			else if(op<0){
				return 0 - op;
			}//end else if
		}//end absVal()
		
		int factorial(int op){
			int iResult=1;
			
			if(op==0){
				return iResult;
			}//end if
			
			else{
				for(int i=1;i<=op;i++){
					iResult*=i;
				}//end for loop
				
				return iResult;
			}//end else
		}//end factorial()
};//end Calculator class

int main(){
	Calculator calc;
	
	int iMenuChoice=1;
	while(iMenuChoice!=0){
		calc.printStartMenu();
		
		cout<<"Enter menu choice: ";
		cin>>iMenuChoice;
		
		int iBasicMenuChoice=1;
		while(iBasicMenuChoice!=1){
			calc.printBasicOpMenu();
			
			cout<<"Enter operation: ";
			cin>>iBasicMenuChoice;
			
			if(iBasicMenuChoice==1){
				cout<<"\nAddition: "<<endl;
				float fNum1;
				float fNum2;
				
				cout<<"Enter first operand: ";
				cin>>fNum1;
				
				cout<<"Enter second operand: ";
				cin>>fNum2;
				
				float fResult=calc.add(fNum1, fNum2);
				cout<<"Result: "<<fResult<<endl;
			}//end if
			
			else if(iBasicMenuChoice==2){
				cout<<"\nSubtraction: "<<endl;
				float fNum1;
				float fNum2;
				
				cout<<"Enter first operand: ";
				cin>>fNum1;
				
				cout<<"Enter second operand: ";
				cin>>fNum2;
				
				float fResult=calc.subtract(fNum1, fNum2);
				cout<<"Result: "<<fResult<<endl;
			}//end else if
			
			else if(iBasicMenuChoice==3){
				cout<<"\nMultiplication"<<endl;
				float fNum1;
				float fNum2;
				
				cout<<"Enter first operand: ";
				cin>>fNum1;
				
				cout<<"Enter second operand: ";
				cin>>fNum2;
				
				float fResult=calc.multiply(fNum1, fNum2);
				cout<<"Result: "<<fResult<<endl;
			}//end else if
			
			else if(iBasicMenuChoice==4){
				cout<<"\nDivision: "<<endl;
				float fNum1;
				float fNum2;
				
				cout<<"Enter first operand: ";
				cin>>fNum1;
				
				cout<<"Enter second operand: ";
				cin>>fNum2;
				
				if(fNum2==0){
					cout<<"Error: Connot divide by 0"<<endl;
				}//end if
				
				else{
					float fResult=calc.divide(fNum1, fNum2);
					cout<<"Result: "<<fResult<<endl;
				}//end else
			}//end else if
			
			else if(iBasicMenuChoice==5){
				cout<<"\nModulo: "<<endl;
				int iNum1;
				int iNum2;
				
				cout<<"Enter first operand (integer only): ";
				cin>>iNum1;
				
				cout<<"Enter second operand (integer only): ";
				cin>>iNum2;
				
				int iResult=calc.modulo(iNum1, iNum2);
				cout<<"Result: "<<iResult<<endl;
			}//end else if
		}//end while loop
		
		 if(iMenuChoice==6){
			cout<<"\nPower: "<<endl;
			float fNum1;
			float fNum2;
			
			cout<<"Enter the base value: ";
			cin>>fNum1;
			
			cout<<"Enter the exponent (integer only): ";
			cin>>fNum2;
			
			float fResult=calc.power(fNum1, fNum2);
			cout<<"Result: "<<fResult<<endl;
		}//end else if
		
		else if(iMenuChoice==7){
			cout<<"\nAbsolute Value: "<<endl;
			float fNum;
			
			cout<<"Enter the value: ";
			cin>>fNum;
			
			float fResult=calc.absVal(fNum);
			cout<<"Result: "<<fResult<<endl;
		}//end else if
		
		else if(iMenuChoice==8){
			cout<<"\nFactorial"<<endl;
			int iNum;
			
			cout<<"Enter the value (integer only, <=12): ";
			cin>>iNum;
			
			if(iNum<0){
				cout<<"Error: Cannon take facotrial of negative value"<<endl;
			}//end if
			
			else{
				int iResult=calc.factorial(iNum);
				cout<<"Result: "<<iResult<<endl;
			}//end else
		}//end else if
	}//end while loop
	cout<<"\nEnding Program"<<endl;
	
	
	return 0;
}//end main()