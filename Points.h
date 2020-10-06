//
// Created by Emmanuel ADEKPLOVI on 10/6/20.
//

#ifndef PROJET9_POINTS_H
#define PROJET9_POINTS_H
#include "iostream"
using namespace std;

class Points {

public:
    Points(){

    }

    double setCoordX(){
        double x;
        cout << "Veuillez entrer le coordonnée x : " << endl;
        cin >> x;
        while( !x ){
            this->setCoordX();
            break;
        }
        this->setX(x);
    }

    double setCoordY(){
        double y;
        cout << "Veuillez entrer le coordonnée y : " << endl;
        cin >> y;
        while( !y ){
            this->setCoordY();
            break;
        }
        this->setY(y);
    }

    /**
     * Cette fonction retourne la distance entre les coordonnées.
     * @return
     */
     double coordDistances(){
        double distance = this->getY() - this->getY();
        return distance;
     }

    /**
    * Cette fonction retourne la milieu de la distance.
    * @return
    */
    double middleDistances(){
        double distance = this->getX() + this->getY() / 2;
        return distance;
    }

    /**
     * Cette fonction s'occupe de faire la translation des distances.
     * @return
     */
    void transDistances(){
        double tmp_x , tmp_y;
        tmp_x = this->getY();
        tmp_y = this->getX();
        this->setX(tmp_x);
        this->setY(tmp_y);
        cout << "La translation de (" << tmp_x << "," << tmp_y << ") donne (" << this->getX() << "," << this->getY() << ")" << endl;
    }


     string operations(){
        cout << "Quelle type d'opération aimeriez-vous réaliser?" << endl;
        cout << "1 - Calcule de la distance entre les deux coordonnées." << endl;
        cout << "2 - Calcule du milieu de la distance entre les deux coordonnées." << endl;
        cout << "3 - Effectuer la translation des deux coordonnées" << endl;
        int choice;
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "La distance entre les deux coordonnées est : " << this->coordDistances() << "m" <<endl;
                break;

            case 2:
                cout << "Le milieu de la distance entre les deux coordonnées est : " << this->middleDistances() << "m" << endl;
                break;

            case 3:
                this->transDistances();
                break;

            default:
                cout << "Veuillez choisir une valeur comprise entre 1 à 3" << endl;
                this->operations();
                break;
        }
        char repeat;
        cout << "Aimerez-vous faire une autre opération : Oui(y) ou Non(n) " << endl;
        cin >> repeat;
         switch (repeat) {
             case 'y':
                 this->operations();
                 break;

             case 'n':
             default:
                 cout << "Merci d'avoir utiliser le programme, à la prochaine." << endl;
                 break;
         }
    }

private:
    double x;
    double y;

    double setX(double x){
        this->x = x;
    }

    double setY(double y){
        this->y = y;
    }

    double getX(){
        return this->x;
    }

    double getY(){
        return this->y;
    }




};


#endif //PROJET9_POINTS_H
