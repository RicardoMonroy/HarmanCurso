#include <iostream>
#include <vector>
#include <string>
#include <limits>

// Clase Cancion
class Cancion {
private:
    int id;
    std::string nombre;
    std::string artista;
    double duracion; // Duraci�n en minutos

public:
    // Constructor
    Cancion(int _id, std::string _nombre, std::string _artista, double _duracion)
        : id(_id), nombre(_nombre), artista(_artista), duracion(_duracion) {}

    // Destructor
    ~Cancion() {
        // Opcional: C�digo para liberar recursos si es necesario
    }

    // M�todos para obtener informaci�n (getters)
    int getId() const { return id; }
    std::string getNombre() const { return nombre; }
    std::string getArtista() const { return artista; }
    double getDuracion() const { return duracion; }

    // M�todo para mostrar informaci�n de la canci�n
    void mostrarInformacion() const {
        std::cout << id << ". " << nombre << " - " << artista
                  << " (" << duracion << " min)" << std::endl;
    }
};

// Clase Reproductor
class Reproductor {
private:
    std::vector<Cancion> listaCanciones;     // Lista de todas las canciones disponibles
    std::vector<Cancion> colaReproduccion;   // Cola de reproducci�n

public:
    // Constructor
    Reproductor() {
        // Inicializar la lista de canciones
        listaCanciones.push_back(Cancion(1, "Indians", "Anthrax", 5.41));
        listaCanciones.push_back(Cancion(2, "Cemetery Gates", "Pantera", 7.02));
        listaCanciones.push_back(Cancion(3, "Rainign Blood", "Slayer", 4.15));
        listaCanciones.push_back(Cancion(4, "Wasted Years", "Iron Maiden", 5.09));
        listaCanciones.push_back(Cancion(5, "BWelcome To The Jungle", "Guns N Roses", 4.34));
    }

    // Destructor
    ~Reproductor() {}

    // Mostrar el men� principal
    void mostrarMenu() {
        char opcion;
        do {
            std::cout << "\n=== Men� Principal ===\n";
            std::cout << "1. Visualizar lista de canciones\n";
            std::cout << "2. Visualizar cola de reproducci�n\n";
            std::cout << "3. Salir\n";
            std::cout << "Seleccione una opci�n: ";
            std::cin >> opcion;

            switch (opcion) {
                case '1':
                    listarCanciones();
                    break;
                case '2':
                    listarColaReproduccion();
                    break;
                case '3':
                    std::cout << "Saliendo del programa...\n";
                    break;
                default:
                    std::cout << "Opci�n inv�lida. Intente nuevamente.\n";
                    break;
            }
        } while (opcion != '3');
    }

    // Listar canciones disponibles y permitir agregar a la cola
    void listarCanciones() {
        char opcion;
        do {
            std::cout << "\n=== Lista de Canciones ===\n";
            for (const auto& cancion : listaCanciones) {
                cancion.mostrarInformacion();
            }

            std::cout << "\nIngrese el ID de la canci�n que desea a�adir a la cola de reproducci�n (o presione 'q' para volver al men�): ";
            std::cin >> opcion;

            if (opcion == 'q' || opcion == 'Q') {
                break;
            }

            // Convertir la opci�n a n�mero
            int idSeleccionado = opcion - '0'; // Asumiendo IDs de 1 d�gito
            bool encontrada = false;

            for (const auto& cancion : listaCanciones) {
                if (cancion.getId() == idSeleccionado) {
                    colaReproduccion.push_back(cancion);
                    std::cout << "La canci�n \"" << cancion.getNombre() << "\" ha sido a�adida a la cola.\n";
                    encontrada = true;
                    break;
                }
            }

            if (!encontrada) {
                std::cout << "ID de canci�n no v�lido. Intente nuevamente.\n";
            }

            // Limpiar el buffer de entrada
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        } while (true);
    }

    // Listar la cola de reproducci�n
    void listarColaReproduccion() {
        std::cout << "\n=== Cola de Reproducci�n ===\n";
        if (colaReproduccion.empty()) {
            std::cout << "La cola de reproducci�n est� vac�a.\n";
        } else {
            int indice = 1;
            for (const auto& cancion : colaReproduccion) {
                std::cout << indice << ". ";
                cancion.mostrarInformacion();
                indice++;
            }
        }
    }
};

int main() {
	setlocale(LC_CTYPE, "Spanish");
    Reproductor miReproductor;
    miReproductor.mostrarMenu();

    return 0;
}
