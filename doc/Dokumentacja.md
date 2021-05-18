# Dokumentacja zadania programistycznego nr 1

## 1. Specyfikacja programu
* Temat: Gra hazardowa typu jednoręki bandyta (Slot Machine). Wzorowana na tym [filmie](https://www.youtube.com/watch?v=wjBSXUKn4Qw).
* Opis: Program losuje 3 symbole (w tej wersji słowa) i porównuje je ze sobą. Pasujące symbole nagradzają użytkownika nienazwaną walutą.

### Lista klas oraz metod

1. Columns
    
    - opis: klasa, której obiekty przedstawiają symbole

    - metody: 
        * ``` int check_result() ``` sprawdza wynik losowania symboli
        * ``` void Show_result() ``` wyświetla na ekranie wynik losowania
        * ``` void randomize_result() ```  losuje symbole
2. Game

    - opis: łączy w sobie podstawę gry tj. losowanie symboli i opcja wygranej
    - metody:
        * ``` void start_game() ``` rozpoczyna grę
3. Menu
    - opis: menu główne programu. Tutaj odbywa się sterowanie programem.
    - metody:
        * ``` void Start() ``` rozpoczyna działanie 'Slot Machine'. Pobiera komendy ze strumienia, dzięki którym steruje programem.
        * ``` static void Instruction() ``` statyczna metoda używana głównie do wyświetlenia instrukcji obsługi.
4. Player
    - opis: klasa reprezentująca użytkownika/gracza. Głównie ilość pieniędzy oraz decyzje dotyczącej dalszej gry.
    - metody: 
        * ``` unsigned int get_money(unsigned int const &win_option_) ``` metoda zwracająca graczowi pieniądze za wynik losowania.
        * ``` unsigned int pay_money() ``` metoda pobierająca od użytkownika pieniądze za grę (wpisowe).
        * ``` bool check_money() ``` sprawdza ilość pieniędzy gracza. Mniej niż 100 -> decyzja zmieniona na fałsz.
        * ``` void save() ``` zapisuje w pliku tekstowym aktualny stan konta gracza.
5. Roll
    - opis: klasa przedstawia pojedynczy bęben z rolką z symbolami. Symbole zamieszczono w tablicy (vector).
    - metody:
        * ``` string single_result() ``` losuje symbol z pojedynczej rolki. Wykorzystano tu funkcję pomocniczą ``` unsigned int rand_i(unsigned int min, unsigned int max) ``` do wylosowania symbolu z tablicy.
6. Slot
    - opis: klasa reprezentuje urządzenie 'Slot Machine'. Odpowiada za rozpoczęcie gry za każde 'pociągnięcie wajchy' i wypłacanie graczowi pieniędzy w przypadku wygranej.
    - metody: 
        * ``` void Pull(Player &player1) ``` metoda odpowiadająca za granie i sprawdzanie wyniku.
        * ``` void reward(Player &player1) ``` metoda nagradzająca gracza.

## 2. Działanie programu
W funkcji `main()` wywołany jest obiekt typu `Menu`, której elementami są obiekty typu `Player` oraz `Slot`. Dzięki nim możliwe jest działanie głównego zamysłu tego programu jakim jest gra typu jednoręki bandyta. Obiekt typu `Game` w klasie `Slot` przedstawia pojedynczą rozgrywkę, w której losowane są symbole i wyznaczenie nagrody w razie wygranej. </br>
Reprezentacja symboli została umieszczona w klasach `Columns` oraz `Roll`.

## 3. Kompilacja oraz obsługa programu
'Budowa' programu odbywa się za pomocą skryptu Makefile wygenerowanego przez CMake (min. wersja 3.8). </br> 
W przypadku uruchomienia programu z poziomu terminala: </br>
W katalogu 'Casino' należy wywołać skrypt CMake, następnie Make i uruchomić program SlotMachine. </br>
Na przykład: </br>
``` clear; cmake . ; make ; ./SlotMachine ``` </br>
Po uruchomieniu zaleca się wpisanie komendy *`instruction`* dla wyświetlenia instrukcji.