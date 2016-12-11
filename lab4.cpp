/*! 
\file
\author Çîáíèíà Àííà
\version 1.0
\date Äåêàáðü 2016 ãîäà
\brief Ïðîãðàììà âû÷èñëÿåò êîëè÷åñòâî ñâîáîäíûõ ìåñò â âûáðàííîì âàãîíå ïîåçäà, à òàêæå ïðîöåíò çàãðóæåííîñòè ïîåçäà.
*/

#include "mode_name.h"
#include "mode_name.cpp"
using namespace std;

/*!
Òî÷êà âõîäà ïðîãðàììû
*/
int main()
{
	int **a, n, m, s;
	float z;

setlocale(LC_ALL, "rus");


n = AmtCarriage(0);
m = AmtCarriage(1);
NewArray(n, m, &a);

menu opt;

do
{	
		opt = Menu();
		
		if(opt == Enter)
		{
			ValueKeyboard(n, m, a);
			cout << endl;
			ShowMass(n, m, a);
		}
			
        else 		
		if(opt == RandEnter)
		{
			ArrayInit(n, m, a);
			cout << endl;
			ShowMass(n, m, a);
		} else
			
		if(opt == ReEnter)
			{
				DeleteMass(a, n, m);

				n = AmtCarriage(0);
				m = AmtCarriage(1);
				
				NewArray(n, m, &a);
			} else
				
		if(opt == ArrayProcessing)
			{
				z = (MassProcessing(n, m, a))*100;
				s = NumberOfCarriage(m, a);
		    } else
				
		if(opt == Print)
		    {
				cout << endl << "Çàãðóæåííîñòü ïîåçäà: " << setprecision(2) << z << "%" << endl << "Êîëè÷åñòâî ñâîáîäíûõ ìåñò â âûáðàííîì âàãîíå: " << s << endl << endl;
		    }
}while(opt != Exit);

cout<<endl;
cout << endl << "Have a good trip!" << endl;

system("pause");

return 0;
}
