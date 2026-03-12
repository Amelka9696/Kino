#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Film {
private:
    int id;
    string tytul;
    string gatunek;
    int czasTrwania; 

public:
    Film(int id, string tytul, string gatunek, int czasTrwania) 
        : id(id), tytul(tytul), gatunek(gatunek), czasTrwania(czasTrwania) {}

    void wyswietlInfo() {
        cout << "Film [" << id << "]: " << tytul << " | Gatunek: " << gatunek 
             << " | Czas: " << czasTrwania << " min" << endl;
    }
};

class Sala {
private:
    int nrSali;
    int rzedy;
    int miejscaWRzedzie;

public:
    Sala(int nr, int rz, int m) : nrSali(nr), rzedy(rz), miejscaWRzedzie(m) {}

    void wyswietlSpecyfikacje() {
        cout << "Sala nr: " << nrSali << " | Pojemnosc: " << rzedy * miejscaWRzedzie 
             << " miejsc (" << rzedy << " rzedow)" << endl;
    }
};

int main() {
   
    cout << "--- System Zarzadzania Kinem ---" << endl;

    Film film1(1, "Incepcja", "Sci-Fi", 148);
    Film film2(2, "Diuna", "Sci-Fi", 155);

    Sala salaA(10, 5, 10); // Sala nr 10, 5 rzędów po 10 miejsc

    film1.wyswietlInfo();
    film2.wyswietlInfo();
    salaA.wyswietlSpecyfikacje();

    return 0;
}
