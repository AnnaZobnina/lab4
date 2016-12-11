/*!
Ïðîòîòèïû ôóíêöèé
*/
#ifndef mode_name 
#define mode_name

#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;

///Ïóíêòû ìåíþ
enum menu
{
	Exit,///< Âûõîä
	Enter, ///< Ââîä çíà÷åíèé ñ êëàâèàòóðû
	RandEnter, ///< Çàïîëíåíèå ñëó÷àéíûìè çíà÷åíèÿìè
	ReEnter,///< Èçìåíåíèå ìàññèâà
	ArrayProcessing, ///< Îáðàáîòêà ìàññèâà
	Print ///< Âûâîä íà ýêðàí
};
void NewArray(int n, int m, int ***a);
int AmtCarriage(int flag);
void ArrayInit(int n, int m, int **a);
void DeleteMass(int **a, int n, int m);
void ValueKeyboard(int n, int m, int **a);
float MassProcessing(int n, int m, int **a);
void ShowMass(int n, int m, int **a);
int NumberOfCarriage(int m, int **a);
menu Menu();
#endif
