//Librerias y parametros inicales
#include <iostream>
#include <cstdlib>
#include <time.h>
#include <fstream>

using namespace std;

// Clase Empresa
class Empresa{
    public:
        string nombre, razso, direccion, dir; //Variables
        int  works, ingreso;
        
        //Constructor
        Empresa() { 
            nombre = "NA";
            razso = "NA";
            direccion = "NA";
            dir = "NA";
            works = 0;
            ingreso = 0;
        } 
        
        Empresa(string name, string RZ, string place, string ceo, int w, int ing){
            nombre = name;
            razso = RZ;
            direccion = place;
            dir = ceo;
            works = w;
            ingreso = ing;
        }

        // Opciones de lectura
        string get_name();
        string get_local();
        string get_social();
        string get_dir();
        int get_workers();
        int get_ingreso();

        // Opciones de escritura
        void set_company();

};

//Funcioens para el empleado
//Llamamos compañia
string Empresa::get_name(){
    return nombre;
}

//Llamamos direccion
string Empresa::get_local(){
    return direccion;
}

//Llamamos Razon Social
string Empresa::get_social(){
    return razso;
}

//Llamamos direccion
string Empresa::get_dir(){
    return dir;
}

//Llamamos workers
int Empresa::get_workers(){
    return works;
}

//Llamamos workers
int Empresa::get_ingreso(){
    return ingreso;
}

// Funcion de escritura
void Empresa::set_company(){
    cout << "WARNING: Esto eliminara los datos anteriores!!!" << endl;
    //Nuevo nombre
    cout << "Ingresa el nuevo Nombre: " << endl;
    cin >> nombre;
    
    //Nueva razon social
    cout << "Ingresa la Razon Soacial: " << endl;
    cin >> razso;

    //Nueva Ubicacion
    cout << "Ingresa la Ubicacion: " << endl;
    cin >> direccion;

    //Nuevo director
    cout << "Ingresa director: " << endl;
    cin >> dir;

    //Nueva Ubicacion
    cout << "Ingresa los trabajadores: " << endl;
    cin >> works;

    //Nuevo Ingreso
    cout << "Ingresa el ingreso: " << endl;
    cin >> ingreso;
}

// END OF COMPANY CLASS


// Clase empleado
class Empleado{
    private:
        string nombre, razonS, localiz, work, puesto; //Variables
        int  edad, sueldo;
        Empresa x;
        //Empresa company;

    public:
        //Default
        Empleado(){
            nombre = "NA";
            razonS = x.get_social();
            localiz = x.get_local();
            work = x.get_name();
            edad = 0;
            sueldo = 0;
        }

        //Paramtetor
        Empleado(string nam, int age, int salary){
            nombre = nam;
            razonS = x.get_social();
            localiz = x.get_local();
            work = x.get_name();
            edad = age;
            sueldo = salary;
        }


        // Opciones de lectura
        string get_name();
        string get_RS();
        string get_locat();
        string get_WP();
        int get_age();
        int get_sal();

        // Opciones de escriturawork_place
        void set_employe();
};

//Opciones de lectura
string Empleado::get_name(){
    return nombre;
}

string Empleado::get_RS(){
    return razonS;
}

string Empleado::get_locat(){
    return localiz;
}

string Empleado::get_WP(){
    return work;
}

int Empleado::get_age(){
    return edad;
}

int Empleado::get_sal(){
    return sueldo;
}

// Funcion de escritura
void Empleado::set_employe(){
    cout << "WARNING: Esto eliminara los datos anteriores!!!" << endl;
    //Nuevo nombre
    cout << "Ingresa el nuevo Nombre: " << endl;
    cin >> nombre;
    
    //Nueva razon social
    cout << "Ingresa la Nueva edad: " << endl;
    cin >> edad;

    //Nueva Ubicacion
    cout << "Ingresa el Nuevo Sueldo: " << endl;
    cin >> sueldo;

}

//END OF CLASS EMPLEADO

int main(){
    //Declaracion de variables y objetos
    int option = 0;
    int n = 0;

    Empresa emp;
    Empleado user;

    //Variables Archivo
    string nombreArchivo = "pymes.txt";
    ofstream archivo;
    // Abrimos el archivo
    archivo.open(nombreArchivo.c_str(), fstream::out);


    cout << "#----Bienvenido a la consulta de PYME - Trabajadores----#" << endl;
    cout << "Selecciona una de las siguintes opciones tecleando el numero de opcion" << endl;
   

    // Acciones para ver Empresa
    cout << " " << endl;
    cout << "#----CONSULTA EMPRESA----#" << endl;
    cout << " " << endl;
    cout << "1. Ver nombre de la PYME" << endl << "2. Ver la Razon Social" << endl << "3. Ver la Ubicacion" << endl;
    cout << "4. Ver al director (CEO)" << endl << "5. Ver Numero de trabajaodres" << endl <<  "6. Ingreso de la emrpesa" << endl;

    cout << " " << endl;

    // Acciones para ver Empleado
    cout << "#----CONSULTA EMPLEADO----#" << endl;
    cout << " " << endl;
    cout << "7. Ver nombre del empleado" << endl << "8. Ver la Razon Social" << endl << "9. Ver la Ubicacion de Trabajo" << endl;
    cout << "10. Ver Nombre de la empresa " << endl << "11. Ver la edad del trabajador" << endl;
    cout <<  "12. Ver el sueldo del trabajodor" << endl;

    cout << " " << endl;

    //Acciones para escribir
    cout << "#----ESCRITURA DE DATOS----#" << endl;
    cout << "13. Editar Informacion del empleado" << endl;
    cout << "14. Editar Informacion de la compania" << endl << "15. Salir" << endl;

    //User Input
    //cout << "Opcion: ";
    //cin >> option;

    //Opciones
    while (option != 15){

        cout << endl << "Opcion: ";
        cin >> option;

        switch (option) {
            //Opciones de lectura. para empresa.
        case 1: //Op empresa
            cout << "Nombre de la empresa: " << emp.get_name();
            break;

        case 2: //Op Razo  Social
            cout << "Razon Social: " << emp.get_social();
            break;

        case 3: //Op Ubicacion
            cout << "Ubicacion: " << emp.get_local();
            break;

        case 4: //Op. Ceo
            cout << "Ceo: " << emp.get_dir();
            break;

        case 5: //Op. #Wroks
            cout << "Trabajadores: " << emp.get_workers();
            break;

        case 6: //Op. Ingreso
            cout << "Ingreso: " << emp.get_ingreso();
            break;

        //Opciones de lectura. para EMPLEADO.
        case 7: //Op empresa
            cout << "Nombre del empleado: " << user.get_name();
            break;

        case 8: //Op Razo  Social
            cout << "Razon Social: " << user.get_RS();
            break;

        case 9: //Op Ubicacion
            cout << "Ubicacion: " << user.get_locat();
            break;

        case 10: //Op. Ver nombre de la empresa
            cout << "Company: " << user.get_WP();
            break;

        case 11: //Op. #Wroks
            cout << "Edad: " << user.get_age();
            break;

        case 12: //Op. Ingreso
            cout << "Sueldo: " << user.get_sal();
            break;

    //Opciones de Escritura
        case 13: //Op. Ingreso
            user.set_employe();
            break;

        case 14: //Op. Ingreso
            emp.set_company();

            archivo << "Registro No. " << n << endl;

            archivo << "Nombre: " << emp.get_name() << ". Razon Social: " << emp.get_social() << ". Ubicacion: " << emp.get_local() << 
            ". CEO: " << emp.get_dir() << ". Trabajadores: " << emp.get_workers() << ". Ingresos: " << emp.get_ingreso() << endl;

            archivo.close();

            cout << "Guardado con exito" << endl;
            break;
        
        default:
        cout << "Ingresa Una Opcion Valida" << endl;
            break;
        }
    }
    
}

