#include <iostream>
#include <cmath>

using namespace std;

int add(int x,int y){return x+y;}
int sub(int x,int y){return x-y;}
int mult(int x,int y){return x*y;}
void divi(int x,int y){if(y==0){cout<<"Can't divide by zero\n";}cout<<x/y;}

int main(){
    int x,y;char o;
    while(true){
        char a='b';
        cout<<"Enter the equation: ";cin>>x>>o>>y;
        switch(o){
            case '+':cout<<add(x,y);
            break;
            case '-':cout<<sub(x,y);
            break;
            case '*':cout<<mult(x,y);
            break;
            case '/':divi(x,y);
            break;
            case '^':cout<<pow(x,y);
            break;
        }
        while(a!='y' and a!='n'){cout<<"\nTry again?(y/n): ";cin>>a;if(a!='y' and a!='n'){cout<<"invalid input";}}
        if(a=='n'){break;}
        a='b';
        
    }

    return 0;
}