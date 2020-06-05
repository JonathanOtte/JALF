// Finn Wilden

#include <iostream>
#include <string>

// Eigene Klassen
#include "lebensmittel.h"

// Funktion zum hinzufügen neuer Lebensmittel -> neues Objekt erstellen
void newLebensmittel(){
    // Abfragen der Werte
    std::string name;
    int kategorie;           // 1 Gemüse, 2 Obst, 3 Ceralien, 4 Konserven, 5 Aufstrich , 6 Backwaren, 7 Fleisch, 8 Fisch, 9 Milchprodukte, 10 Tiefkühl, 11 Sonstiges
    int menge;               // Menge unabhängig von Einheit
    int einheit;             // 1 Gramm (g), 2 Milliliter (ml), 3 Stück (Stk.)
    int vorrat;              // Wie viel von dem Lebensmittel soll immer vorrätig sein?
    //int haltbarDatum[3];

    std::cout << "Bitte geben Sie den Namen des Lebensmittel ein, dass gespeichert werden soll: ";
    std::cin >> name;
    std::cout << "[1] Gemuese\t [2] Obst\t [3] Ceralien\t\t [4] Konserven\t [5] Aufstrich\t [6] Backwaren\n"
                 "[7] Fleisch\t [8] Fisch\t [9] Milchprodukte\t [10] Tiefkuehl\t [11] Sonstiges\n\n"
                 "Bitte geben Sie die Kategorie des Lebensmittel ein, dass gespeichert werden soll: ";
    std::cin >> kategorie;
    std::cout << "Bitte geben Sie die schon vorhandene Menge des Lebensmittel ein, dass gespeichert werden soll: ";
    std::cin >> menge;
    std::cout << "[1] Gramm (g)\t [2] Milliliter (ml)\t [3] Stueck (Stk.)\n"
                 "Bitte geben Sie die Maßeinheit der Menge des Lebensmittel ein, dass gespeichert werden soll: ";
    std::cin >> einheit;
    std::cout << "Bitte geben Sie Menge die immer vorraetig sein soll des Lebensmittel ein, dass gespeichert werden soll: ";
    std::cin >> vorrat;

    Lebensmittel neu(name, kategorie, menge, einheit, vorrat);
    neu.showAll();
}

// Funktionen der Klasse

// Konstruktor zur ersten setzung der Attribute
Lebensmittel::Lebensmittel(std::string name, int kategorie, int menge, int einheit, int vorrat){
    this-> name = name;
    this-> kategorie = kategorie;
    this-> menge = menge;
    this-> einheit = einheit;
    this-> vorrat = vorrat;
}

// Nummer des Lebensmittels auslesen
int Lebensmittel::getNummer(){

    return 0;
}

// Kategorie des Lebensmittel auslesen
int Lebensmittel::getKategorie(){

    return 0;
}

// Vorhandene Menge auslesen
int Lebensmittel::getMenge(){

    return 0;
}

// Einheit der Menge auslesen
int Lebensmittel::getEinheit(){

    return 0;
}

// Haltbarkeitsdatum anzeigen
/*bool Lebensmittel::showHaltbarkeit(){

    return 0;
}*/

// Vorhandenen Menge änder, wenn z.B. etwas verbraucht oder eingekauft wurde
int Lebensmittel::changeMenge(int){

    return 0;
}

// Mindestbestand ändern
int Lebensmittel::changeVorrat(int){

    return 0;
}

// Alle Attribute anzeigen
void Lebensmittel::showAll(){
    std::cout << "\n\nHinzugefuegt wurde:\n";
    //std::cout << this->nummer << "\t";
    std::cout << this->name << "\t\t\t";
    std::cout << "Kategorie: ";
    switch (this->kategorie){
    case 1:
        std::cout << "Gemuese\t";
        break;
    case 2:
        std::cout << "Obst\t";
        break;
    case 3:
        std::cout << "Ceralien\t";
        break;
    case 4:
        std::cout << "Konserven\t";
        break;
    case 5:
        std::cout << "Aufstrich\t";
        break;
    case 6:
        std::cout << "Backwaren\t";
        break;
    case 7:
        std::cout << "Fleisch\t";
        break;
    case 8:
        std::cout << "Fisch\t";
        break;
    case 9:
        std::cout << "Milchprodukte\t";
        break;
    case 10:
        std::cout << "Tiefkuehl\t";
        break;
    case 11:
        std::cout << "Sonstiges\t";
        break;
    }
    std::cout << "vorraetige Menge/Mindestvorrat: " << this->menge << "/" << this -> vorrat << "\t";
    switch (this->einheit){
    case 1:
        std::cout << "g\t";
        break;
    case 2:
        std::cout << "ml\t";
        break;
    case 3:
        std::cout << "Stk.\t";
        break;
    }
}
