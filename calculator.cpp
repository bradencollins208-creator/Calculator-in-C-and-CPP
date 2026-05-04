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
			cout<<"\nBasic Calculator Operation: "<<endl;
			cout<<"(1) Addition"<<endl;
			cout<<"(2) Subtraction"<<endl;
			cout<<"(3) Multiplication"<<endl;
			cout<<"(4) Division"<<endl;
			cout<<"(5) Modulus"<<endl;
			cout<<"(0) Return to Main Menu"<<endl;
		}//end printBasicOpMenu()
		
		void printAdvOpMenu(){
			cout<<"\nAdvanced Calculator Operations: "<<endl;
			cout<<"(1) Power"<<endl;
			cout<<"(2) Root"<<endl;
			cout<<"(3) Absolute Value"<<endl;
			cout<<"(4) Factorial"<<endl;
			cout<<"(0) Return to Main Menu"<<endl;
		}//end printAdvOpMenu()
		
		void printConvMenu(){
			cout<<"\nConversions: "<<endl;
			cout<<"(1) Decimal to Fraction"<<endl;
			cout<<"(0) Return to Main Menu"<<endl;
		}//end printConvMenu()
		
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
		
		float root(float op1, float op2){
			//
		}//end root()
		
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
		
		float decToFac(float op){
			//
		}//end dec>fac()
};//end Calculator class

int main(){
	Calculator calc;
	
	int iMenuChoice=1;
	while(iMenuChoice){
		calc.printStartMenu();
		
		cout<<"Enter menu choice: ";
		cin>>iMenuChoice;
		
		if(iMenuChoice==1){
			int iBasicMenuChoice=1;
			while(iBasicMenuChoice){
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
				
				else if(iBasicMenuChoice==0){
					break;
				}//end else if
			}//end while loop
		}//end if
		
		else if(iMenuChoice==2){
			int iAdvMenuChoice=1;
			while(iAdvMenuChoice){
				calc.printAdvOpMenu();
				
				cout<<"Enter operation: ";
				cin>>iAdvMenuChoice;
				
				if(iAdvMenuChoice==1){
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
				
				else if(iAdvMenuChoice==2){
					cout<<"\nRoot: "<<endl;
					float fNum1;
					float fNum2;
					
					cout<<"Enter the radicand: ";
					cin>>fNum1;
					
					cout<<"Enter the root: ";
					cin>>fNum2;
					
					if(fNum1<0){
						cout<<"Undefined: Requires complex plane"<<endl;
					}//end if
					
					else{
						float fResult=calc.root(fNum1, fNum2);
						cout<<"Result: "<<fResult<<endl;
					}//end else
				}//end else if
				
				else if(iAdvMenuChoice==3){
					cout<<"\nAbsolute Value: "<<endl;
					float fNum;
					
					cout<<"Enter the value: ";
					cin>>fNum;
					
					float fResult=calc.absVal(fNum);
					cout<<"Result: "<<fResult<<endl;
				}//end else if
				
				else if(iAdvMenuChoice==4){
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
				
				else if(iAdvMenuChoice==0){
					break;
				}//end else if
			}//end while loop
		}//end else if
		
		else if(iMenuChoice==3){
			int iConvMenuChoice=1;
			
			while(iConvMenuChoice){
				calc.printConvMenu();
				
				cout<<"Enter operation: ";
				cin>>iConvMenuChoice;
				
				if(iConvMenuChoice==1){
					//
				}//end if
				
				else if(iConvMenuChoice==0){
					break;
				}//end else if
			}//end while loop
		}//end else if
		
		else if(iMenuChoice==0){
			cout<<"\nEnding Program"<<endl;
			break;
		}//end else if
	}//end while loop
	
	
	
	return 0;
}//end main()