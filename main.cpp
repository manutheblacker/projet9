#include <iostream>
using namespace std;
#include "Points.h"

int main() {
    Points distance;
    cout << "Bienvenue dans le programme permettant d'obtenir les distances entre deux coordonnées. " << endl;
    distance.setCoordX();
    distance.setCoordY();
    distance.operations();
    return 0;
}
