#include <string>

class Lebensmittel{
private:
    std::string name;
    int nummer;                      // Fortlaufende Nummer zur einfacheren Zuordnung -> Name ist der Objektname z.B. Lebensmittel.tomate
    int kategorie;                   // 1 Gemüse, 2 Obst, 3 Ceralien, 4 Konserven, 5 Aufstrich , 6 Backwaren, 7 Fleisch, 8 Fisch, 9 Milchprodukte, 10 Tiefkühl, 11 Sonstiges
    int menge;                       // Menge unabhängig von Einheit
    int einheit;                     // 1 Gramm (g), 2 Milliliter (ml), 3 Stück (Stk.)
    int vorrat;                      // Wie viel von dem Lebensmittel soll immer vorrätig sein?
    //int haltbarDatum[3];           // Haltbarkeitsdatum, haltbarDatum[0] = Jahr, haltbarDatum[1] = Monat, haltbarDatum[2] = Tag

public:
    Lebensmittel(int& nummer, std::string& name, int& kategorie, int& menge, int& vorrat, int& einheit); // Konstruktor zur ersten Setzung der Attribute

    // Funktionen für alle Attribute nach getter und setter Methode
    std::string getName();
    void setName(std::string);
    int getNummer();            // Hier kein setNummer, da die Nummer der Lebensmittel nicht verändert werden soll
    int getKategorie();
    void setKategorie(int);
    int getMenge();
    void changeMenge(int);      // Hier kein set, da das Ändern auf einen Totalen Wert wenig sinn macht, sondern immer die Mänge um einen bestimmten Wert "geändert" wird
    int getEinheit();
    void setEinheit(int);
    int getVorrat();
    void setVorrat(int);
    //bool showHaltbarkeit()
    void saveNew();
    void showNew();
};

void newLebensmittel();             // Funktion zum Hinzufügen eines neuen Lebensmittels in die Datenbank -> neues Objekt erstellen
void showAllLebensmittel();         // Liste alle gespeicherten Lebensmittel anzeigen
