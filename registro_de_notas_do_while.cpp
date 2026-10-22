#include <iostream>
using namespace std;
int main(){
    double nota;
    double suma = 0
    double promnedio;
    int aprobados = 0;
    do{
        //reiniciamos los datos para cada consulta
        suma = 0;
        aprobados = 0;
        cout << "===============================================/n"
        cout <<"        REGISTRO DE CALIFICACIONES      /n"
        cout <<"================================================/n"
        // ==========================================
        // 1. ciclo FOR
        // solicitar las notas de 5 estudiantes
        //===================================
        for (int estudiantes = 1; estudiantes <= 5; estudiantes++){
            cout <<"ingrese la nota del estudiante "
                << estudiante << ": ";
                cin >> nota;
                //================================================
                //2. ciclo while
                //validar la nota
                //===================================================
        while (nota < 0 || nota > 5){
            cout << "nota invalida./n";
            cout << "ingrese una nota entre 0 y 5";
            cin >> nota;
        }
        // acumulador
        suma = suma + nota;
        // contador
        if (nota >= 3.0){
            aprobados++;
        }
    }
        //cacular promedio
        promedio = suma / 5;
        cout <<"n/============================n/";
        cout <<"        resultados/n            ";
        cout <<"===============================n/";
        cout <<"suma de las notas: " << suma << endl;
        cout <<"promedio:"<< promedio << endl;
        cout <<"estudiantes aprobados:"<< aprobados << endl;
        cout <<"estudiantes reprovados:"
            << 5 - aprobados << endl;
        //================================
        //3. ciclo DO-WHILE
        // Pregunta si desea repetir
        //==================================
            cout <<"/n¿Desea registrar otro grupo?(S/N):";
            cin >> repetir;
 } while (repetir == "S" || repetir == "s")
 cout << "/nPrograma finalizado./n"
 return 0;
}
