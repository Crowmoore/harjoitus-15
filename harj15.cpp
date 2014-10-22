/****IIZ01010****
Harjoitus 15
Ryhmä: IIO14S2
Tekijä: Joel Kortelainen
Kuvaus: 
TäSSä TEHTÄVÄSSÄ ON KÄYTETTÄVÄ C-kielen primitiivisiä merkkitaulukoita!

Tee ohjelma, joka kysyy käyttäjältä 17 merkkiä
pitkän merkkijonon (ei välilyäntejä).
a) Ohjelma tulostaa merkkijonon käänteisessä järjestyksessä näytälle
(tulostus tyyppiä "cout << mjono1[4];" jne)
b) Ohjelma kääntää annetun merkkijonon toiseen
merkkijonoon ja tulostaa sen näytälle
(tulostus tyyppiä "cout << mjono2;")
c) merkkijono voi olla kuinka pitkä
tahansa (max 100 kirjainta).
Syätetyn merkkijonon pituutta ei saa
laskea millään kirjastofunktiolla
(esim. lenght tms.) Ohjelma
tutkii onko annettu merkkijono
palindromi ja ilmoittaa sen käyttäjälle.
Välilyännit jonossa ovat sallittuja.

Käyttäjä syättää jonon: ABC_Kissa_kavelee
ohjelma tulostaa: eelevak_assiK_CBA
Versio 1.0
22.10.2014
*/


#include <iostream>
#include <string>
using namespace std;

int textLength;
char userText[101];
char reversed[101];
string getUserInput();
void reverseText(char userText[]);
void printReversed(char userText[]);
void clearConsole();
void palindromeCheck();

int main()
{

	cout << "Type max 100 characters: ";
	getUserInput();
	reverseText(userText);
	cout << "Your input reversed: ";
	printReversed(userText);
	//palindromeCheck();

	return 0;
}

string getUserInput()
{
	cin.getline(userText, sizeof(userText));
	return(userText);
}

void clearConsole()
{
	system("cls");
}

void reverseText(char userText[])
{
	while (userText[textLength] != '\0')
	{
		++textLength;
	}

	--textLength;
	clearConsole();
}

void printReversed(char userText[])
{
	while (textLength >= 0)
	{
		cout << userText[textLength];
		--textLength;
	}
	cout << endl;
}

/*void palindromeCheck(char userText)
{
	
}*/