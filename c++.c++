```cpp id="9wkk2x"
#include <iostream>
#include <vector>
using namespace std;

int main() {

    int zgjedhja;

    cout << "======================================" << endl;
    cout << "      PROJEKT INFORMATIKE" << endl;
    cout << "           KOMPJUTERI" << endl;
    cout << "======================================" << endl;

    do {

        cout << "\nMENUJA KRYESORE" << endl;
        cout << "1. Historiku i Kompjuterit" << endl;
        cout << "2. Pjeset e Kompjuterit" << endl;
        cout << "3. Llojet e Kompjutereve" << endl;
        cout << "4. Keshilla per Sigurine" << endl;
        cout << "5. Dalje" << endl;

        cout << "\nZgjedh nje opsion: ";
        cin >> zgjedhja;

        switch(zgjedhja) {

            case 1:
                cout << "\n--- HISTORIKU I KOMPJUTERIT ---" << endl;

                cout << "Charles Babbage konsiderohet babai i "
                     << "kompjuterit modern." << endl;

                cout << "Alan Turing kontribuoi ne zhvillimin "
                     << "e inteligjences artificiale." << endl;

                cout << "Ne vitet 1970 filluan kompjuteret personale."
                     << endl;

                break;

            case 2:
                cout << "\n--- PJESET E KOMPJUTERIT ---" << endl;

                cout << "CPU  - Truri i kompjuterit" << endl;
                cout << "RAM  - Memoria e perkohshme" << endl;
                cout << "SSD  - Ruajtja e te dhenave" << endl;
                cout << "Monitori - Shfaq informacionin" << endl;
                cout << "Tastiera - Perdoret per shkrim" << endl;
                cout << "Mausi - Kontrollon kursorin" << endl;

                break;

            case 3:
                cout << "\n--- LLOJET E KOMPJUTEREVE ---" << endl;

                vector<string> kompjutere = {
                    "Desktop",
                    "Laptop",
                    "Server",
                    "Tablet",
                    "Superkompjuter"
                };

                for(int i = 0; i < kompjutere.size(); i++) {
                    cout << i + 1 << ". "
                         << kompjutere[i] << endl;
                }

                break;

            case 4:
                cout << "\n--- KESHILLA PER SIGURINE ---" << endl;

                cout << "✔ Përdor antivirus." << endl;
                cout << "✔ Perdorni fjalekalime te forta." << endl;
                cout << "✔ Mos hapni file te dyshimta." << endl;
                cout << "✔ Bej backup te te dhenave." << endl;

                break;

            case 5:
                cout << "\nProgrami u mbyll me sukses!" << endl;
                break;

            default:
                cout << "\nZgjedhje e pavlefshme!" << endl;
        }

    } while(zgjedhja != 5);

    return 0;
}
```
