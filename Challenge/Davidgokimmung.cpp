//https://github.com/Davidgokimmung
#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=100;i++){
        cout<<(i%3==0 && i%5==0 ? "Spider" : i%3==0 ? "Rat" : i%5==0 ? "Ghost" : to_string(i))<<endl;
    }
}
