#include<iostream>
using namespace std;

int main(){
    int n=1;
    int Even=0;
    int Odd=0;
    
    while(n!=0){
        cout << "Enter an integer: ";
        cin>>n;
        if (n>0 && n%2==0){
            Even = Even+1;
        }
        else if (n>0 && n%2==1){
            Odd = Odd+1;
        }
        
    }
    cout << "#Even numbers = "<<Even<<endl;
    cout << "#Odd numbers = "<<Odd;
    return 0;


}
