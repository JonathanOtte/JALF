#include <iostream>
#include <fstream>
#include <string>

// Eigene Klassen
#include "anzeige.h"
#include "lebensmittel.h"

//Hauptfunktion
int main(){
    Anzeige Anzeige1;
    // Wählvariable
    /* Wenn sich der Nutzer im Hauptmenue befindet: mainM = 1; secM = trdM = 0;
     * Wenn sich der Nutzer im ersten Untermenue (secM) befindet, sprich Einstellunge, Nahrungsmittelmenue, ... (siehe anzeige::auswahlOptionenMainM):
     *  mainM = trdM = 0; secM = "Nummer des Ausgewählten Menues";
     * Wenn sich Nutzer im zweiten Untermenue (trdM) befindet, also dem Untermenue zum ersten Untermenue:
     * mainM = 0; secM = "Nummer des Augefwählzen Menues"; trdM = "Nummer des Ausgewählten Untermenues";*/

    bool exit = true;
    int mainM = 1;
    int secM = 0;
    int trdM = 0;
    int fthM = 0;

    // Dauerschleife die solange läuft, wie das Programm läuft
    do {
        if (mainM != 0 && trdM == 0){
            Anzeige1.showMainM(mainM);
            std::cin >> secM;
            while (!(Anzeige1.eingabeUberprufung(mainM, secM, trdM))){
                std::cout << "Falsche Eingabe! Bitte erneut eine Auswahl treffen: ";
                std::cin >> secM;
            }
            mainM = 0;
        }
        else if (secM != 0 && secM != 9){
            Anzeige1.showSecM(secM);
            std::cin >> trdM;
            while (!(Anzeige1.eingabeUberprufung(mainM, secM, trdM))){
                std::cout << "Falsche Eingabe! Bitte erneut eine Auswahl treffen:";
                std::cin >> trdM;
            }
            if (trdM != 0){
                Anzeige1.showTrdM(secM, trdM);
                std::cin >> fthM;
            }
            else{
                mainM = 1;
                secM = 0;
                trdM = 0;
            }
        }
        else if (secM == 9){
            exit = false;
        }
    } while (exit);
    return 0;
}
