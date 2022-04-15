/*5. Mostrar la sumatoria de: suma=1+3+4+7+11+.....+Xn
Autor --> Franklin Hiustong Gutierrez Arizaca*/
#include <iostream>
#include <conio.h>
using namespace std;
int suma=0;//variable global para guardar suma
//========= FUNCION ====================
int sumatoria(int a, int b, int limite) {
    int n = a + b;
    suma= suma+n;
    cout << n << ", ";
    if (n <= limite) {
        return sumatoria(b, n, limite);
    }
}
//======================================

int main() {
    int x;
    cout<<"Ingresa la cantidad [mayor a 0] para calcular la suma de la sucesion [1+3+4+7+11+.....+Xn]: ";
    cin>>x;
    cout<<"[ ";
    cout<<"1, "<<"3, ";
    sumatoria(1,3,x);
    cout<<"]";
    cout<<"\nsuma = "<<suma+ 1+3;//mostar suam de la sucesion
    getch();
    return 0;
}
