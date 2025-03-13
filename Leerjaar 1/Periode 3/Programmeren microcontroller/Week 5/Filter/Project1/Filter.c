#include <stdio.h>

// Functie om het gemiddelde van een array te berekenen
float bereken_gemiddelde(float array[], int lengte) {
    float som = 0.0;

    for (int i = 0; i < lengte; i++) {
        som += array[i];
    }

    return som / lengte;  // Bereken het gemiddelde
}

// Functie om de array te schuiven en een nieuwe waarde toe te voegen
void schuif_array(float array[], int* lengte, float nieuwe_variabele, int max_grootte) {
    // Verschuif alle elementen naar rechts
    for (int i = *lengte - 1; i > 0; i--) {
        array[i] = array[i - 1];
    }

    // Zet de nieuwe waarde op de eerste positie
    array[0] = nieuwe_variabele;

    // Als de array groter is dan de max_grootte, verwijder het laatste element
    if (*lengte < max_grootte) {
        (*lengte)++;
    }
    else {
        // Zorg ervoor dat de array de maximale grootte niet overschrijdt
        array[*lengte - 1] = 0;  // Je kunt een andere waarde kiezen als placeholder
    }
}

int main() {
    // Voorbeeld van een array met 3 elementen
    float waarden[5] = { 0.0, 0.0, 0.0, 0.0, 0.0 };  // Maximale lengte van de array is 5
    int lengte = 3;  // Huidige lengte van de array
    int max_grootte = 5;

    // Vul de array eerst met enkele waarden
    waarden[0] = 1.5;
    waarden[1] = 2.5;
    waarden[2] = 3.5;

    // Roep de functie aan en print het gemiddelde
    printf("Gemiddelde voordat we een nieuwe waarde toevoegen: %.2f\n", bereken_gemiddelde(waarden, lengte));

    // Voeg een nieuwe waarde toe en schuif de array
    float nieuwe_variabele = 4.5;
    schuif_array(waarden, &lengte, nieuwe_variabele, max_grootte);

    // Print het nieuwe gemiddelde na het toevoegen van de nieuwe waarde
    printf("Gemiddelde na het toevoegen van %.2f: %.2f\n", nieuwe_variabele, bereken_gemiddelde(waarden, lengte));

    return 0;
}