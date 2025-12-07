#include<iostream>
using namespace std;
//function defination
int add( int a, int b){
    return a + b;
}
int subtract(int a, int b){
    return a - b;
}
int multiply(int a, int b){
    return a * b;
}
int divide(int a, int b){
    if(b==0){
        cout<<"Error! Dividasion bt zero is not alllowed.\n";
        return 0;//return dummy value so programe continues

    }
    return a/b;
}
int main(){
    
    int choice, num1 , num2;
    bool running =true;
     while(running){
        cout<<"\n === SIMPLE CALCULATOR === \n";
        cout<<"1. Addition\n";
        cout<<"2. Substraction\n";
        cout<<"3. Multiplication\n";
        cout<<"4. Divison\n";
        cout<<"enter your choice: ";
        cin>>choice;

        switch(choice){
            case 1:
            cout<<"enter two integer: ";
            cin>> num1 >> num2;
            cout<<"result = "<<add(num1, num2)<<endl;
            break;
            case 2:
            cout<<"enter two integer: ";
            cin>> num1>>num2;
            cout<<"result = "<<subtract(num1,num2)<<endl;
            break;
            case 3:
            cout<<"enter two integer: ";
            cin>>num1>>num2;
            cout<<"result ="<<multiply(num1,num2)<<endl;
            break;
            case 4:
            cout<<"enter two integer: ";
            cin>>num1>>num2;
            cout<<"result = "<<divide(num1, num2)<<endl;
            break;
            case 5:
            cout<<"exiting calculator. goodbye!\n";
            running = false;
            default:
            cout<<"invalid choice! please enter 1-5.\n";

        }
        


     }
     return 0;
}
