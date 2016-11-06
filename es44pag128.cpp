#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double x1,x2,y1,y2;
    double distanza;
    cin>>x1>>x2>>y1>>y2;
    distanza=sqrt((pow(x2,2.0)-(pow(x1,2.0))+((pow(y2,2.0)-(pow(y1,2.0))))));
    cout<<"La distanza "<<distanza<<endl;
    return 0;


}

