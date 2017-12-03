
## Funkcja scanf

####Opis

scanf wczytuje ze strumienia ciąg znaków, formatuje go zgodnie z kodami podanymi w format i przypisuje do zmiennych, których adresy przekazaliśmy w liście.
scanf wczytuje ze standardowego strumienia wejściowego stdin ciąg znaków, formatuje go zgodnie z kodami podanymi w format i przypisuje do zmiennych, których adresy przekazaliśmy w liście.
Funkcje akceptują zmienną ilość parametrów. Pierwszy kod formatujący jest używany dla pierwszego argumentu, drugi dla drugiego, itd.
Jeżeli podamy więcej argumentów niż kodów formatujących, to dodatkowe argumenty są ignorowane.
Jeżeli podamy mniej argumentów niż kodów formatujących, to wynik działania funkcji będzie przypadkowy.
Wczytywanie kolejnego pola kończy się po napotkaniu: znaku Enter, spacji, znaku tabulacji, 1-szego znaku, którego nie można poprawnie zinterpretować lub po wczytaniu podanej w formacie ilości znaków.


####Specyfikacja formatu:

>  % [*] [szerokość] [h|l|L] typ

*Każda specyfikacja musi zaczynać się od znaku % i zawierać co najmniej typ. Pozostałe pola specyfikacji formatu są opcjonalne. Wszystkie pola formatu mają stałą pozycję w łańcuchu formatującym: można je opuścić, ale jeżeli występują, to muszą być podane w kolejności takiej, jak w powyższym zapisie.*

Opis

* - Znaki są odczytywane zgodnie z formatem, ale nie są zapamiętywane. Dla takiej specyfikacji nie ma potrzeby podawania zmiennej, w której ma on być umieszczony. Pole używane do odczytania danych z pliku z pominięciem niektórych informacji.

**szerokość** - Maksymalna ilość znaków, która ma być odczytana dla wyliczenia wartości zmiennej.

**h|l|L** - Modyfikacja domyślnych wartości dla pola typ:
* h 	- podajemy dla typów całkowitych (d, i, o, u, x, X), aby zaznaczyć, że parametr jest liczbą typu short int
* l 	- podajemy dla typów całkowitych (d, i, o, u, x, X), aby zaznaczyć, że parametr jest liczbą typu long int
* L 	- podajemy dla typów rzeczywistych (e, E, f, g, G), aby zaznaczyć, że parametr jest liczbą typu long double

**typ** - Typ konwersji argumentu:
    
Liczby:
   * d - całkowita liczba dziesiętna ze znakiem (int *arg)
   * D - całkowita liczba dziesiętna ze znakiem (long *arg)
   * i - całkowita liczba dziesiętna ze znakiem (int *arg)
   * I - całkowita liczba dziesiętna ze znakiem (long *arg)
   * u - całkowita liczba dziesiętna bez znaku (unsigned int *arg)
   * U - całkowita liczba dziesiętna bez znaku (unsigned long *arg)
   * o - całkowita liczba ósemkowa bez znaku (int *arg)
   * O - całkowita liczba dziesiętna ze znakiem (long *arg)
   * x - całkowita liczba szesnastkowa (int *arg)
   * X - całkowita liczba szesnastkowa (int *arg)
   * f - liczba rzeczywista ze znakiem (float *arg)
   * e - liczba rzeczywista ze znakiem (float *arg)
   * E - liczba rzeczywista ze znakiem (float *arg)
   * g - liczba rzeczywista ze znakiem (float *arg)
   * G - liczba rzeczywista ze znakiem (float *arg)
    Znaki:
   * c - pojedynczy znak (char *arg)
   * s - wskaźnik do tablicy znaków (char arg[])
   * % - bez konwersji: znak %

