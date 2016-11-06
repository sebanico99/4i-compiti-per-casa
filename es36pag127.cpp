#include <iostream>
using namespace std;
void OrdinaEtˆ (int& x, int& y){
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
OrdinaEtˆ(a,b);
OrdinaEtˆ(a,c);
OrdinaEtˆ(b,c);
cout<<"Numeri in ordine"<<a<<b<<c;
return 0;
}
