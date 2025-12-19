#include <iostream>

using namespace std;

int add(int x,int y){return x+y;}
int sub(int x,int y){return x-y;}
int mult(int x,int y){return x*y;}
int divi(int x,int y){return x/y;}

int main(){
    int x,y;string o;
    while(true){
        string a="b";
        cout<<"Enter the equation: ";cin>>x>>o>>y;
        //if(cin.fail()){cout<<"Invalid data type!\n";cin.clear();continue;}
        if(o=="+"){cout<<add(x,y);}
        else if(o=="-"){cout<<sub(x,y);}
        else if(o=="*"){cout<<mult(x,y);}
        else if(o=="/"){cout<<divi(x,y);}
        while(a!="y" and a!="n"){cout<<"\nTry again?(y/n): ";cin>>a;}
        //if(a!="y" or a!="n"){cout<<"This input is invalid!\nEnter y or n.\n";}
        if(a=="n"){break;}
        a="b";
        
    }

    return 0;
}