#include <iostream>
using namespace std;
void OrdinaEt� (int& x, int& y){
int temp;
if(x<y){
temp=x;
x=y;
y=temp;
}
}
int main(){
int a,b,c;
cin>>a>>b>>c;
OrdinaEt�(a,b);
OrdinaEt�(a,c);
OrdinaEt�(b,c);
cout<<"Numeri in ordine"<<a<<b<<c;
return 0;
}
