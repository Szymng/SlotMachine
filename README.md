# PROE2020Z_Szymon_Nguyen_zadanie_programistyczne_1

## Specyfikacja wstępna - Gra hazardowa typu jednoręki bandyta (Slot Machine)
### Specyfikacja techniczna - początkowy podział klas
1. Roll - klasa reprezentująca rolkę z symbolami. Metoda wylosowania pojedynczego symbolu na rolce.
2. Columns - Reprezentacja trzech rolek. Losowanie wyniku na rolkach pojedynczej gry.
3. Game - klasa łącząca wszystkie elementy gry: rozpoczynanie gry, pokazywanie wyniku, sprawdzenie wyniku
4. Slot - klasa reprezentująca całą maszynę do gry. Pobieranie oplaty, pokazywanie dostepnych gier, wyplata wygranej.
5. Entry - przedstawia ilość dostępnych gier i pobiera opłatę.

### Jak ma działać
1. Losowanie różnych konfiguracji 3 liczb lub 3 symboli (w konsolowej wersji będą to nazwy)
    * 'Pociągnięcie' za wajchę wykonuje losowanie
2. Sprawdzanie wyniku losowania
    * Kilka przypadków wygranych
    * Reszta przegrana
3. Zmiana puli nagród
    * wygrana zmniejsza pulę nagród
    * wpłacanie zwiększa pulę nagród
4. Wpisowe, żeby zagrać

