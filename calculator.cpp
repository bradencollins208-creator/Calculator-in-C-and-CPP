#include <iostream>
#include <string>

using namespace std;

class Calculator{
	public:
		void printMenu(){
			cout<<"\nCalculator Menu: "<<endl;
			cout<<"(1) Addition"<<endl;
			cout<<"(2) Subtraction"<<endl;
			cout<<"(3) Multiplication"<<endl;
			cout<<"(4) Division"<<endl;
			cout<<"(5) Modulus"<<endl;
			cout<<"(6) Power"<<endl;
			cout<<"(7) Absolute Value"<<endl;
			cout<<"Conversions"<<endl;
			cout<<"(0) Exit"<<endl;
		}//end printMenu()
		
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
				//NEED ABS VALUE
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
};//end Calculator class

int main(){
	Calculator calc;
	
	int iMenuChoice=1;
	
	while(iMenuChoice!=0){
		calc.printMenu();
		
		cout<<"Enter operation: ";
		cin>>iMenuChoice;
		
		if(iMenuChoice==1){
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
		
		else if(iMenuChoice==2){
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
		
		else if(iMenuChoice==3){
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
		
		else if(iMenuChoice==4){
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
		
		else if(iMenuChoice==5){
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
		
		else if(iMenuChoice==6){
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
	}//end while loop
	cout<<"\nEnding Program"<<endl;
	
	
	return 0;
}//end main()