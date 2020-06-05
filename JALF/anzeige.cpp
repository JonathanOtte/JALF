// Finn Wilden

#include <iostream>
#include <fstream>
#include <string>

// Eigene Klassen
#include "anzeige.h"
#include "lebensmittel.h"

// Funktionen

// Funktion Eingabeüberprüfung
bool Anzeige::eingabeUberprufung(int mainM, int secM, int trdM){
    switch (mainM){
    // Benutzer muss in einem Untermenue sein
    case 0:
        switch (secM){
        // Einstellungsuntermenue "0" mit 1 Auswahloption
        case 1:
            if (trdM >= 0 && trdM < 1){
                return true;
            }
        // Lebensmitteluntermenue "1" mit 5 Auswahloptionen
        case 2:
            if (trdM >= 0 && trdM < 5){
                return true;
            }
        // Essensplanungsmenue "2" mit 4 Auswahloptionen
        case 3:
            if (trdM >= 0 && trdM < 4){
                return true;
            }
            else{
                return false;
            }
        // Rezeptuntermenue "3" mit 4 Auswahloptionen
        case 4:
            if (trdM >= 0 && trdM < 4){
                return true;
            }
        }
    // Benutzer ist im Hauptmenue
    case 1:
        if ((secM > 0 && secM < 5) || secM == 9){
            return true;
        }
    }
    std::cout << "false";
    return false;
}

// Funktion Hauptmenue (MainM)
void Anzeige::showMainM(int mainM){
    switch (mainM){
    case 1:
        // Normales Hauptmenue
        system("cls");
        std::cout << this-> willkommensnachricht << "\n" << std::endl;
        for (int i = 0; i <= 3; i++){
            std::cout << this-> auswahlMainM[i] << "\t";
        }
        std::cout << "\n\n" << "Zum beenden geben Sie die 9 ein!" << "\n" << std::endl;
        break;
    }
}

// Funktion 1. Untermenue (SecM)
void Anzeige::showSecM(int secM){
    switch (secM){
    case 1:
        // Einstellungs Menue
        system("cls");
        std::cout << "Sie sind in den Einstellungen. Treffen Sie eine Auswahl:\n" << std::endl;
        for (int i = 0; i <= 0; i++){
            std::cout << this-> auswahlSecM1[i] << "\t";
        }
        std::cout << "\n" << std::endl;
        break;
    case 2:
        // Lebensmittel Menue
        system("cls");
        std::cout << "Sie sind im Lebensmittel Menue. Treffen Sie eine Auswahl:\n" << std::endl;
        for (int i = 0; i <= 4; i++){
            std::cout << this-> auswahlSecM2[i] << "\t";
        }
        std::cout << "\n" << std::endl;
        break;
    case 3:
        // Essensplanungs Menue
        system("cls");
        std::cout << "Sie sind im Essensplanungs Menue. Treffen Sie eine Auswahl:\n" << std::endl;
        for (int i = 0; i <= 3; i++){
            std::cout << this-> auswahlSecM3[i] << "\t";
        }
        std::cout << "\n" << std::endl;
        break;
    case 4:
        // Rezept Menue
        system("cls");
        std::cout << "Sie sind im Rezept Menue. Treffen Sie eine Auswahl:\n" << std::endl;
        for (int i = 0; i <= 3; i++){
            std::cout << this-> auswahlSecM4[i] << "\t";
        }
        std::cout << "\n" << std::endl;
        break;
    }
}

// Funktion 2. Untermenue (TrdM)
void Anzeige::showTrdM(int secM, int trdM){
    switch (secM){
    // Einstellungsmenue "1" -> es gibt noch keine Untermenues
    /*case 1:
        switch (trdM){
        // Untermenue
        }
        break;*/
    // Lebensmittelmenue "2"
    case 2:
        switch (trdM){
        // Untermenue Aktueller Bestand
        case 1:
            system("cls");
            std::cout << "Das ist der aktuelle Bestand an Lebensmitteln:\n" << std::endl;
            //showAlleLebensmittel();
            std::cout << "\nUm zurueck zu kommen geben Sie die 0 ein!";
            break;
        // Untermenue Einkaufliste
        case 2:
            system("cls");
            std::cout << "Das ist der aktuelle Einkausliste:\n" << std::endl;
            //showEinkausliste();
            std::cout << "\nUm zurueck zu kommen geben Sie die 0 ein!";
            break;
        // Untermenue Einkauf hinzufuegen
        case 3:
            system("cls");
            std::cout << "Geben Sie ein welche Lebensmittel Sie eingekauft haben:\n" << std::endl;
            //getEinkauf(cin);
            std::cout << "\nUm zurueck zu kommen geben Sie die 0 ein!";
            break;
        case 4:
            system("cls");
            std::cout << "(BETA) Ein neues Lebensmittel hinzfuegen (BETA)\n" << std::endl;
            newLebensmittel();
        }
        break;
    // Planungsmenue "3"
    case 3:
        switch (trdM){
        // Untermenue Rezepte entdecken
        case 1:
            system("cls");
            std::cout << "Hier finden Sie alle Rezepte:\n" << std::endl;
            //showAlleRezepte();
            std::cout << "\nUm zurueck zu kommen geben Sie die 0 ein!";
            break;
        // Untermenue Planung
        case 2:
            system("cls");
            std::cout << "Hier können Sie ihre Essenswoche planen:\n" << std::endl;
            //getPlanung(cin);
            std::cout << "\nUm zurueck zu kommen geben Sie die 0 ein!";
            break;
        // Untermenue Inspiration
        case 3:
            system("cls");
            std::cout << "Lassen Sie sich von unseren Ideen inspieriren:\n" << std::endl;
            //showInspiration();
            std::cout << "\nUm zurueck zu kommen geben Sie die 0 ein!";
            break;
        }
    // Rezeptmenue "4"
        case 4:
            switch (trdM){
            // Untermenue Rezepte entdecken
            case 1:
                system("cls");
                std::cout << "Hier finden Sie alle Rezepte:\n" << std::endl;
                //showAlleRezepte();
                std::cout << "\nUm zurueck zu kommen geben Sie die 0 ein!";
                break;
            // Rezepte ändern und hinzufuegen Planung
            case 2:
                system("cls");
                std::cout << "Hier koennen Sie Ihre Rezepte aendern und neue hinzufuegen\n" << std::endl;
                //changeRezepte(cin);
                std::cout << "\nUm zurueck zu kommen geben Sie die 0 ein!";
                break;
            // Untermenue Inspiration
            case 3:
                system("cls");
                std::cout << "Lassen Sie sich von unseren Ideen inspieriren:\n" << std::endl;
                //showInspiration();
                std::cout << "\nUm zurueck zu kommen geben Sie die 0 ein!";
                break;
           }
    }
}
