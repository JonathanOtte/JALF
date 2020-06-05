#include <string>

// Finn Wilden
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
    Lebensmittel(std::string name, int kategorie, int menge, int einheit, int vorrat); // Konstruktor zur ersten setzung der Attribute

    int getNummer();                // Nummer des Lebensmittels auslesen
    int getKategorie();             // Kategorie des Lebensmittel auslesen
    int getMenge();                 // Vorhandene Menge auslesen
    int getEinheit();               // Einheit der Menge auslesen
    int changeMenge(int);           // Vorhandenen Menge änder, wenn z.B. etwas verbraucht oder eingekauft wurde
    int changeVorrat(int);          // Mindestbestand ändern
    //bool showHaltbarkeit();       // Haltbarkeitsdatum anzeigen
    void showAll();                 // Alle Attribute anzeigen
};

void newLebensmittel();             // Funktion zum Hinzufügen eines neuen Lebensmittels in die Datenbank -> neues Objekt erstellen

