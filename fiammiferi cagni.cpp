#include <iostream>
using namespace std;

int main() {
    int n,k,turno,i=0,y=0;

    do {
        cout<<"inserisci il numero dei fiammiferi totali";
        cin>>n;
        } while(n<=0);

    do {
        cout<<"Inserisci il numero dei fiammeri massimi da togliere ad ogni turno";
        cin>>k;
        } while(k<=0 || k>=n);

    while (n>0) {
        cout<<"Player 1 quanti fiammiferi togli?";
        do {
           cin>>turno;
           } while(turno>k && turno>0);
        n=n-turno;
        i=i+1;

    if (n<=0) {}
    else {
        cout<<"Player 2 quanti fiammiferi togli?";
        do {
            cin>>turno;
           } while(turno>k && turno>0);
        n=n-turno;
        y=y+1;
        }
        }

        if(i>y){
        cout<<"Ha vinto il player 2"<<endl;
        }
        else{
        cout<<"Ha vinto il player 1"<<endl;
        }


        return 0;
}
