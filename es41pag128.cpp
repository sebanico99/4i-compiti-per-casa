#include <iostream>
using namespace std;
void acquisizione_somma(float& somma_incass, int& num_reparti);
float media(int num_reparti, float somma_incassi);

int main(){
    int num_reparti=0;
    float somma_incasso=0;
    acquisizione_somma(somma_incasso,num_reparti);
    cout<<"L'incasso medio e' stato:"<<media(num_reparti, somma_incasso)<<endl;
    return 0;
}
void acquisizione_somma(float& somma_incasso, int& num_reparti){
    char scelta;
    int incasso;
    int i=1;
    int x;
    do{
        cout<<"Inserisci il "<<i<<"° reparto"<<endl;
        cin>>x;
        cout<<"Inserisci l'incasso del"<<i<<"° reparto"<<endl;
        cin>>incasso;
        somma_incasso+=incasso;
        i=i++;
        num_reparti=i;
        cout<<"Ancora un reparto s/n"<<endl;
        cin>>scelta;
    }while(scelta=='s');


    }
    float media(int num_reparti, float somma_incasso){

return somma_incasso/num_reparti;
   }




