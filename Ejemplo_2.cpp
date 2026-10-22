#include <iostream>
using namespace std;
int main(){
    double venta;
    double totalventa;
    int ventasgrandes;
    char repetir;
    do{
        // reiniciar los valores para una nueva jornada
        totalventa = 0;
        ventasgrandes = 0;
        cout << "=================================/n";
        cout << "=============REGISTRO DE VENTAS========/n";
        cout << "====================================/n/n";
        for (int ventanumero = 1; ventanumero <= 5; ventanumero++){
            cout << "ingrese el valor de la venta"
                 << ventanumero << ": $";
            cin >> venta;
            //===================
            // ciclo while
            //===================
            while (venta <= 0){
                cout << " el valor debe ser mayor que $0./n";
                cout << "ingrese nuevamente la venta $";
                cin >> venta;
            }
            totalventa = totalventa + venta;
            //=================
            //contador
            //===================
            if (venta > 100000){
                ventasgrandes++;
            }
        }
        cout << "total vendido: $"
             << totalventa << endl;
        cout << "ventas superiores a 100.000: "
             << ventasgrandes << endl;
        
    }
}
