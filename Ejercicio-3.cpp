#include<iostream>
using namespace std;

int main(){
int n=0,i=0;
cout<<"Ingrese un numero\n";
cin>>n;
if(n > 0){
while (i<= n){
    cout << i << "\n";
    i= i + 2;
}
}
else
    cout<<"Error, n debe ser positivo\n";
}