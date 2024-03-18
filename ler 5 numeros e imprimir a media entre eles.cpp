#include <iostream>

using namespace std;

int main(){

    float num1, num2, num3, num4, num5, media;
    cout<<"escolha um valor para as 5 notas: ";
    cin>>num1>>num2>>num3>>num4>>num5;

    media = (num1 + num2 + num3 + num4 + num5) / 5;
    cout<<"a media entre as notas escolhidas e de: "<<media;
}
