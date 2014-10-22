/****IIZ01010****
Harjoitus 15
Ryhm�: IIO14S2
Tekij�: Joel Kortelainen
Kuvaus: 
T�SS� TEHT�V�SS� ON K�YTETT�V� C-kielen primitiivisi� merkkitaulukoita!

Tee ohjelma, joka kysyy k�ytt�j�lt� 17 merkki�
pitk�n merkkijonon (ei v�lily�ntej�).
a) Ohjelma tulostaa merkkijonon k��nteisess� j�rjestyksess� n�yt�lle
(tulostus tyyppi� "cout << mjono1[4];" jne)
b) Ohjelma k��nt�� annetun merkkijonon toiseen
merkkijonoon ja tulostaa sen n�yt�lle
(tulostus tyyppi� "cout << mjono2;")
c) merkkijono voi olla kuinka pitk�
tahansa (max 100 kirjainta).
Sy�tetyn merkkijonon pituutta ei saa
laskea mill��n kirjastofunktiolla
(esim. lenght tms.) Ohjelma
tutkii onko annettu merkkijono
palindromi ja ilmoittaa sen k�ytt�j�lle.
V�lily�nnit jonossa ovat sallittuja.

K�ytt�j� sy�tt�� jonon: ABC_Kissa_kavelee
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