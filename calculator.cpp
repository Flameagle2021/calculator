#include <iostream>

using namespace std;

int add(int x,int y){return x+y;}

int main(){
    int x,y;string o,a;
    while(true){
        cout<<"Enter the equation: ";cin>>x>>o>>y;
        if(o=="+"){cout<<x+y;}
        cout<<"\nTry again?(y/n): ";cin>>a;
        if(a=="n"){break;}
        
    }

    return 0;
}