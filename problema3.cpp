/*5. Mostrar la sumatoria de: suma=1+3+4+7+11+.....+Xn
Autor --> Franklin Hiustong Gutierrez Arizaca*/
#include <iostream>
#include <conio.h>
using namespace std;
//int suma(int);
int sumatoria(int a, int b, int limite){
    int n = a + b;
    cout<<n<<" ";
    if(n>=limite){
        return 0;
    }
    return sumatoria(b,n,limite);
}
int main() {
    int x;
    cout<<"Ingresa la cantidad [mayor a 0] para calcular la suma de la sucesion [1+3+4+7+11+.....+Xn]: ";
    cin>>x;
    cout<<"1 "<<"3 ";
    sumatoria(1,3,x);
    cin.get();
    return 0;
}
