#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

// Eigene Klassen
#include "lebensmittel.h"

// Funktion zum hinzufügen neuer Lebensmittel -> neues Objekt erstellen
void newLebensmittel(){
    // Abfragen der Werte
    int nummer;
    std::string name;
    int kategorie;           // 1 Gemüse, 2 Obst, 3 Ceralien, 4 Konserven, 5 Aufstrich , 6 Backwaren, 7 Fleisch, 8 Fisch, 9 Milchprodukte, 10 Tiefkühl, 11 Sonstiges
    int menge;               // Menge unabhängig von Einheit
    int einheit;             // 1 Gramm (g), 2 Milliliter (ml), 3 Stück (Stk.)
    int vorrat;              // Wie viel von dem Lebensmittel soll immer vorrätig sein?
    //int haltbarDatum[3];

    //Nummer -> fortlaufend, d.h. die letzte muss zunächst abgefragt werden
    std::ifstream Lebensmittel("Lebensmittel.txt");
    std::string zeile;
    while (getline(Lebensmittel, zeile)){
        std::stringstream zeilenPuffer(zeile);
        zeilenPuffer >> nummer;
    }
    nummer++;

    // Name
    std::cout << "Bitte geben Sie den Namen des Lebensmittel ein, dass gespeichert werden soll: ";
    std::cin >> name;

    // Kategorie
    do{
        std::cout << "[1] Gemuese\t [2] Obst\t [3] Ceralien\t\t [4] Konserven\t [5] Aufstrich\t [6] Backwaren\n"
                     "[7] Fleisch\t [8] Fisch\t [9] Milchprodukte\t [10] Tiefkuehl\t [11] Sonstiges\n\n"
                     "Bitte geben Sie die Kategorie des Lebensmittel ein, dass gespeichert werden soll: ";
        std::cin >> kategorie;
    } while (kategorie < 0 || kategorie > 12);

    // Bestandsmenge
    std::cout << "Bitte geben Sie die schon vorhandene Menge des Lebensmittel ein, dass gespeichert werden soll: ";
    std::cin >> menge;

    // Maßeinheit
    do {
        std::cout << "[1] Gramm (g)\t [2] Milliliter (ml)\t [3] Stueck (Stk.)\n"
                     "Bitte geben Sie die Maßeinheit der Menge des Lebensmittel ein, dass gespeichert werden soll: ";
        std::cin >> einheit;
    } while (einheit < 0 || einheit > 4);

    // Vorratsmenge
    std::cout << "Bitte geben Sie Menge die immer vorraetig sein soll des Lebensmittel ein, dass gespeichert werden soll: ";
    std::cin >> vorrat;

    // Aufruf des Konstruktors der Klasse, Speichern
    class Lebensmittel neu(nummer, name, kategorie, menge, vorrat, einheit);
    neu.saveNew();
    neu.showNew();
}

// Funktionen der Klasse

// Konstruktor zur ersten setzung der Attribute
Lebensmittel::Lebensmittel(int& nummer, std::string& name, int& kategorie, int& menge, int& vorrat, int& einheit){
    this -> nummer = nummer;
    this-> name = name;
    this-> kategorie = kategorie;
    this-> menge = menge;
    this-> einheit = einheit;
    this-> vorrat = vorrat;
}

// Name des Lebensmittel auslesen
std::string Lebensmittel::getName(){

    return 0;
}

// Name des Lebensmittels ändern
void Lebensmittel::setName(std::string){

}
// Nummer des Lebensmittels auslesen
int Lebensmittel::getNummer(){

    return 0;
}

// Kategorie des Lebensmittel auslesen
int Lebensmittel::getKategorie(){

    return 0;
}

// Kategorie des Lebensmittel ändern
void Lebensmittel::setKategorie(int){

}

// Vorhandene Menge auslesen
int Lebensmittel::getMenge(){

    return 0;
}

// Vorhandene Menge ändern
void Lebensmittel::changeMenge(int){

}

// Einheit der Menge auslesen
int Lebensmittel::getEinheit(){

    return 0;
}

// Einheit der Menge ändern
void Lebensmittel::setEinheit(int){

}

// Mindestbestnad auslesen
int Lebensmittel::getVorrat(){

    return 0;
}

// Mindestbestand ändern
void Lebensmittel::setVorrat(int){

}

// Neu hinzugefügtes Lebensmittel speichern
void Lebensmittel::saveNew(){
    std::ofstream neuLebensmittel("Lebensmittel.txt", std::ios::app);
    neuLebensmittel << this-> nummer << ' ' << this-> name << ' ' << this-> kategorie << ' ' << this-> menge << ' ' << this-> vorrat << ' ' << this-> einheit << std::endl;
    neuLebensmittel.close();
}

// Alle Attribute anzeigen
void Lebensmittel::showNew(){
    std::cout << "\n\nHinzugefuegt wurde:\n";
    std::cout << "Gespeicherte Lebensmittel:\nNummer\tName\tKategorie\tMenge\tMindestmenge\tEinheit" << std::endl;
    std::cout << this->nummer << "\t";
    std::cout << this->name << "\t";
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
    std::cout << this->menge << "/t" << this -> vorrat << "\t\t";
    switch (this->einheit){
    case 1:
        std::cout << "g";
        break;
    case 2:
        std::cout << "ml";
        break;
    case 3:
        std::cout << "Stk.";
        break;
    }
    std::cout << std::endl;
}

// Alle gespeicherten Lebensmittel anzeigen
void showAllLebensmittel(){
    std::string zeile;

    system("cls");
    std::cout << "Gespeicherte Lebensmittel:\nNummer\tName\tKategorie\tMenge\tMindestmenge\tEinheit" << std::endl;
    std::ifstream Lebensmittel("Lebensmittel.txt");
    while (getline(Lebensmittel, zeile)){
        // Variablen zum Ziwschenspeichern des Datei Inhalts
        std::stringstream zeilenPuffer(zeile);
        std::string name;
        int nummer, kategorie, menge, einheit, vorrat;

        zeilenPuffer >> nummer >> name >> kategorie >> menge >> vorrat >> einheit;
        std::cout << nummer << "\t" << name << "\t";
        switch (kategorie){
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
        std::cout << menge <<"\t" << vorrat << "\t\t";
        switch (einheit){
        case 1:
            std::cout << "g";
            break;
        case 2:
            std::cout << "ml";
            break;
        case 3:
            std::cout << "Stk.";
            break;
        }
        std::cout << std::endl;
    }
}
