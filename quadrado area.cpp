#include<iostream>
using namespace std;
int main()
{

    //declarando a variavel
    float comprimento, area, lado, perimetro;

    //escrevendo o comprimento e calculando a sua area
    cout<<"digite o comprimento do quadrado: ";
    cin>>comprimento;
    cout<<"digite o lado do quadrado: ";
    cin>>lado;
    area = comprimento*comprimento;
    perimetro = lado*4;

    //calculo das areas
    cout<<"\n Area = "<<area;
    cout<<"\n perimetro = "<<perimetro;
    cout<<endl;
    return 0;
}
