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
    double duracion; // Duración en minutos

public:
    // Constructor
    Cancion(int _id, std::string _nombre, std::string _artista, double _duracion)
        : id(_id), nombre(_nombre), artista(_artista), duracion(_duracion) {}

    // Destructor
    ~Cancion() {
        // Opcional: Código para liberar recursos si es necesario
    }

    // Métodos para obtener información (getters)
    int getId() const { return id; }
    std::string getNombre() const { return nombre; }
    std::string getArtista() const { return artista; }
    double getDuracion() const { return duracion; }

    // Método para mostrar información de la canción
    void mostrarInformacion() const {
        std::cout << id << ". " << nombre << " - " << artista
                  << " (" << duracion << " min)" << std::endl;
    }
};

// Clase Reproductor
class Reproductor {
private:
    std::vector<Cancion> listaCanciones;     // Lista de todas las canciones disponibles
    std::vector<Cancion> colaReproduccion;   // Cola de reproducción

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

    // Mostrar el menú principal
    void mostrarMenu() {
        char opcion;
        do {
            std::cout << "\n=== Menú Principal ===\n";
            std::cout << "1. Visualizar lista de canciones\n";
            std::cout << "2. Visualizar cola de reproducción\n";
            std::cout << "3. Salir\n";
            std::cout << "Seleccione una opción: ";
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
                    std::cout << "Opción inválida. Intente nuevamente.\n";
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

            std::cout << "\nIngrese el ID de la canción que desea añadir a la cola de reproducción (o presione 'q' para volver al menú): ";
            std::cin >> opcion;

            if (opcion == 'q' || opcion == 'Q') {
                break;
            }

            // Convertir la opción a número
            int idSeleccionado = opcion - '0'; // Asumiendo IDs de 1 dígito
            bool encontrada = false;

            for (const auto& cancion : listaCanciones) {
                if (cancion.getId() == idSeleccionado) {
                    colaReproduccion.push_back(cancion);
                    std::cout << "La canción \"" << cancion.getNombre() << "\" ha sido añadida a la cola.\n";
                    encontrada = true;
                    break;
                }
            }

            if (!encontrada) {
                std::cout << "ID de canción no válido. Intente nuevamente.\n";
            }

            // Limpiar el buffer de entrada
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        } while (true);
    }

    // Listar la cola de reproducción
    void listarColaReproduccion() {
        std::cout << "\n=== Cola de Reproducción ===\n";
        if (colaReproduccion.empty()) {
            std::cout << "La cola de reproducción está vacía.\n";
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
