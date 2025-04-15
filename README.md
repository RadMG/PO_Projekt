# Dokumentacja projektu kalkulator
Kalkulator operuje na bazie połączenia dwóch elementów:
1. Klasa calc_class podzielona na plik nagłówkowy calc_class.h przechowujący deklarację klasy razem z jej polami oraz plik wykonawczy calc_class.cpp przechowujący definicje wszystkich metod. Odpowiada ona za logikę kalkulatora.
2. Interfejs GUI wykonany w środowiku qtmaker pełniący rolę strumienia wejścia/wyjścia aplikacji.

 
## Klasa kalkulator
### Logika
Ogólny zamysł logiki kalkulatora opiera się na wykorzystaniu metody *void calculate()* do przekazywania danych wejściowych żądanej operacji matematycznej. Po wykonaniu operacji bez wykrycia błędu metoda zapisuje wynik do pola prywatnego *memory*. Uzyskanie wyniku operacji opiera się na wywołaniu metody *double get_memory()*. Podzielenie procesu wykonywania operacji na dwie metody umożliwia dostęp do wyniku w pamięci obiektu w dowolnym momencie bez ponownego wykonywania operacji matematycznej oraz wykrycie informacji o błędzie w tracie procesu liczenia (między wykonaniem operacji a pobraniem wyniku.
### Informacja o stanie pamięci
### Wykrywanie błędów
### Dokumentacja pól i metod klasy


## Interfejs graficzny
### Wprowadzanie i wyświetlanie danych liczbowych.
### Wybieranie operacji i informowanie o niej użytkownika.
### Informowanie o błędach.
### Elementy dodatkowe
### Dokumentacja dodatkowych funkcji i zmiennych
