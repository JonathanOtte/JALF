#include <string>

// Finn Wilden
class Anzeige{
  private:
    std::string willkommensnachricht= "Herzlich Willkommen im JALF. Bitte waehlen Sie aus, welche Funktion Sie nutzen moechten: ";
    // Auswahl Hauptmenue
    std::string auswahlMainM[4] = {"[1] Einstellungen", "[2] Lebensmittel", "[3] Essensplanung", "[4] Rezepte"};
    // Auswahl 1. Untermenues
    std::string auswahlSecM1[1] = {"[0] Hauptmenue"};
    std::string auswahlSecM2[5] = {"[0] Hauptmenue", "[1] Aktueller Bestand", "[2] Einkaufsliste", "[3] Einkauf hinzufuegen", "[4] Lebensmittel hinzufuegen"};
    std::string auswahlSecM3[4] = {"[0] Hauptmenue", "[1] Rezepte Entdecken", "[2] Planung festlegen", "[3] Inspiration"};
    std::string auswahlSecM4[4] = {"[0] Hauptmenue", "[1] Rezepte Entdecken", "[2] Rezepte aendern oder hinzufuegen", "[3] Inspiration"};
    // Auswahl 2. Untermenues

  public:
    bool eingabeUberprufung(int mainM, int secM, int trdM);
    void showMainM(int mainM);
    void showSecM(int secM);
    void showTrdM(int secM, int trdM);
};
