#include <iostream>

int main() {
    std::cout << "Kopfzeile Drehkreuzsteuerung";
    for (int i = 30; i > 0; i--) {
        std::cout << "Noch " << i << " Plätze frei" << std::endl;
        std::cout << "Bitte einsteigen";
        getchar();
        std::cout << "Signal Drehkreuz";

    }

    std::cout << "Keine freien Plätze verfügbar" << std::endl;
    std::cout << "Bitte nicht mehr einsteigen" << std::endl;

}
