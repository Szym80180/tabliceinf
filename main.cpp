#include <iostream>
#include <math.h>                               // Za³¹czamy bibliotekê z dzia³aniamy matematycznymi
using namespace std;

int main()
{

    int i, j, n, m;                             // Tworzymy zmienne "i", "j" u¿ywane póŸniej do numerowania powtórzeñ w ptêli, a tak¿e zmienne "m" i "n" do okreœlenia wielkoœci tabelki
    float a[100][100];                          // Tworzymy tablicê z dwoma wymiarami o wielkoœci 100
    cout<<"Give first dimension"<<endl;         // Wypisujemy tekst w konsoli
    cin>>m;                                     // Do zmiennej m okreœlaj¹cej iloœæ wierszy w tabeli przypisujemy liczbê, któr¹ ktoœ wpisa³
    cout<<"Give second dimension"<<endl;        // Wypisujemy tekst w konsoli
    cin>>n;                                     // Do zmiennej n okreœlaj¹cej iloœæ kolumn w tabeli przypisujemy liczbê, któr¹ ktoœ wpisa³
    for (i = 1; i <= m; i++)                    // Rozpoczynamy pêtlê tworz¹c¹ wiersze w iloœci okreœlonej przez zmienn¹ "m"
    {


        for (j = 1; j <= n; j++)                //Rozpoczynamy pêtlê uzupe³niaj¹c¹ wiersze liczbami, przy okazji tworz¹c kolumny w iloœci okreœlonej przez zmienn¹ "n"
        {

            if (j==4)                           //Jeœli zmienna "j" okreœlaj¹ca numer kolumny ma wartoœæ 4 (je¿eli uzupe³niamy  4 kolumnê)
            {
                cout<<"nan"<<'\t';              //To wstawiamy do niej "nan"

            }
            else                                //W ka¿dym innym przypadku (gdy zmienna "j" ma wartoœæ inn¹ ni¿ 4, czyli wstawiamy liczbê do innej kolumny ni¿ 4
            {
            float sum = (i * i + j * j);        // Tworzymy zmienn¹ "sum", i przypisujemy jej wartoœæ i^2 + j^2 - suma kwadratów liczb "i" i "j"
            a[i][j] = sqrt(sum);                // Wyci¹gamy pierwiastek z wartoœci zmiennej "sum" za pomoc¹ funkcji sqrt() i przypisujemy go do odpowiedniego elementu w tabeli "a"
            cout << a[i][j] << '\t';            // Wypisujemy zawartoœæ elementów tabeli "a"
            }
        }
        cout<<endl;                             //Tworzymy nowy wiersz (przechodzimy do nastêpnej linijki)

    }
    return 0;
}
