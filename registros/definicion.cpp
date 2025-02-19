#include <iostream>
using namespace std;

// Estructura para Registro de Automóviles
struct Automovil {
    string codigoA;
    string marca;
    string modelo;
    int anyo;
    string placa;
};

// Estructura para Cliente de Videoclub
struct ClienteVideoclub {
    string nombre;
    string direccion;
    string telefono;
    float adeuda;
    string codigoCl;
};

// Estructura para Licencia de Manejo
struct LicenciaManejo {
    string nombres;
    string apellidoPaterno;
    string apellidoMaterno;
    string fechaDesde;
    string fechaVencimiento;
    string nacionalidad;
    string grupoSanguineo;
    string tipoLicencia;
    string restricciones;
    bool donaOrganos;
    string direccion;
    string cedula;
};

// Estructura para Tarjeta de Crédito
struct TarjetaCredito {
    string nombre;
    string fechaVencimiento;
    string numeroTarjeta;
    float saldo;
    float limite;
};

int main() {
    // Inicialización de datos
    Automovil auto1 = {"123XYZ", "Toyota", "Corolla", 2022, "ABC-123"};
    ClienteVideoclub cliente1 = {"Juan Perez", "Calle Falsa 123", "555-1234", 50.75, "CL001"};
    LicenciaManejo licencia1 = {"Maria Lopez", "Gomez", "Hernandez", "01-01-2020", "01-01-2030", "Mexicana", "O+", "A", "Ninguna", true, "Avenida Siempre Viva", "987654321"};
    TarjetaCredito tarjeta1 = {"Pedro Ramirez", "12/26", "4111 1111 1111 1111", 5000.00, 10000.00};
    
    // Mostrar datos de ejemplo
    cout << "Datos del automóvil:" << endl;
    cout << "Código: " << auto1.codigoA << " | Marca: " << auto1.marca << " | Modelo: " << auto1.modelo << " | Año: " << auto1.anyo << " | Placa: " << auto1.placa << endl;
    
    cout << "\nDatos del cliente de videoclub:" << endl;
    cout << "Nombre: " << cliente1.nombre << " | Dirección: " << cliente1.direccion << " | Teléfono: " << cliente1.telefono << " | Adeuda: " << cliente1.adeuda << " | Código: " << cliente1.codigoCl << endl;
    
    cout << "\nDatos de la licencia de manejo:" << endl;
    cout << "Nombre: " << licencia1.nombres << " " << licencia1.apellidoPaterno << " " << licencia1.apellidoMaterno << endl;
    cout << "Fecha de emisión: " << licencia1.fechaDesde << " | Vence: " << licencia1.fechaVencimiento << endl;
    cout << "Grupo sanguíneo: " << licencia1.grupoSanguineo << " | Tipo: " << licencia1.tipoLicencia << " | Dona órganos: " << (licencia1.donaOrganos ? "Sí" : "No") << endl;
    
    cout << "\nDatos de la tarjeta de crédito:" << endl;
    cout << "Titular: " << tarjeta1.nombre << " | Número: " << tarjeta1.numeroTarjeta << " | Saldo: " << tarjeta1.saldo << " | Límite: " << tarjeta1.limite << endl;
    
    return 0;
}

//aqui debemos hacer la activiidad, esto es lo q me dio la IA, luego corregir