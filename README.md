# symbole
symbole
Powtarzające się symbole

Napisz program wyszukujący najczęściej występujący symbol na obrazku. Symbol to zbiór czarnych punktów sąsiadujących ze sobą krawędzią (nie rogiem). Symbole różniące się obrotem czy będące swoimi odbiciami są różne.
Obrazek (0 to biały punkt, 1 to czarny punkt):
1110011
1000000
1010101
0000001
1100111
zawiera 4 różne symbole:
111
100
100

001
001
111

1

11
Sugerowane rozwiązania: przeszukiwanie wszerz lub w głąb do identyfikacji symboli, tablica haszowana do ich zliczania.
Wejście

W pierwszej linii wejścia podaną zostane wymiary obrazka: szerokość (w) i wysokość (h). Żaden z wymiarów nie przekroczy 1000, żaden z nich nie będzie mniejszy niż 4. Każda z następnych h linii będzie zawierała w cyfr opisujących obrazek: 0 oznacza biały punkt, 1 to czarny punkt (należący do symbolu). Wymiary pojedynczego symbolu nie przekroczą 128x128 punktów. Odpowiedź będzie zawsze jednoznaczna (nie wystąpią dwa symbole o maksymalnej liczności).
Wyjście

Na wejściu należy wypisać liczbę wystąpień najczęściej występującego symbolu oraz ten symbol w formacie takim jak obrazek, bez żadnej białej obwódki (w pierwszej i ostatniej kolumnie oraz w pierwszym i ostatnim wierszu symbolu powinien pojawić się przynajmniej jeden czarny punkt).
Przykład

Wejście
10 10
0101010100
0000000110
0100010000
0110011010
0000000011
1100000000
0110010011
0000011000
1001010010
1100000011
Wyjście
6
10
11
