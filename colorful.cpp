#include<iostream>
#include<windows.h>
using namespace std;
void ResetConsoleColour(WORD Attributes)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Attributes);
}
int main()
{
	for(int i=0;i<256;i++)
	{
		SetConsoleTextAttribute( GetStdHandle(STD_OUTPUT_HANDLE), i);
		cout<<"\nTxt color= "<<i;
	}
}
	 //system("color F0");
	 //FlushConsoleInputBuffer(GetStdHandle(STD_OUTPUT_HANDLE));
	/*cout<<"\n\t\t\t\t\t\t";
	SetConsoleTextAttribute( GetStdHandle(STD_OUTPUT_HANDLE), 240);
	cout<<"DROP DOWN MENU";
	ResetConsoleColour(0);
	cout<<"\n\t\t\t\t\t";
	SetConsoleTextAttribute( GetStdHandle(STD_OUTPUT_HANDLE), 7);
	cout<<"1)Create record";
	ResetConsoleColour(0);
	cout<<"\n\t\t\t\t\t";
	SetConsoleTextAttribute( GetStdHandle(STD_OUTPUT_HANDLE), 240);
	cout<<"2)Update record";
	ResetConsoleColour(0);
	cout<<"\n\t\t\t\t\t";
	SetConsoleTextAttribute( GetStdHandle(STD_OUTPUT_HANDLE), 7);
	cout<<"3)Display record";
	ResetConsoleColour(0);
	cout<<"\n\t\t\t\t\t";
	SetConsoleTextAttribute( GetStdHandle(STD_OUTPUT_HANDLE), 240);
	cout<<"4)Delete record";
	//system("color 0F");
	SetConsoleTextAttribute( GetStdHandle(STD_OUTPUT_HANDLE), 240);
}/*#include<stdio.h>  
#include<graphics.h>  
#include<dos.h>  
void printMsg()  
{  
	int gdriver = DETECT,gmode,i;  
initgraph(&gdriver,&gmode,"C:\\Turboc3\\BGI");  
 	i=3;
	setcolor(i);  
	settextstyle(i,0,i);  
	outtextxy(i,20*i,"Yuvanika");  
	//	delay(500);  
	 
	delay(2000);  
}  
int main()  
{  
	printMsg();  
	return 0;  
} /*
#include<cwchar>
#include<windows.h>
#include<iostream>
int main()
{

CONSOLE_FONT_INFOEX cfi;
cfi.cbSize = sizeof(cfi);
cfi.nFont = 0;
cfi.dwFontSize.X = 0;                   // Width of each character in the font
cfi.dwFontSize.Y = 54;                  // Height
cfi.FontFamily = FF_DONTCARE;
cfi.FontWeight = FW_NORMAL;
std::wcscpy(cfi.FaceName, L"Consolas"); // Choose your font
SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &cfi);
*/

/*#include <windows.h>
#include <stdio.h>
#include <string.h>
#include <string>
using namespace std;

int main()
{
    CONSOLE_FONT_INFOEX cfi;
	cfi.cbSize = sizeof cfi;
	cfi.nFont = 0;
	cfi.dwFontSize.X = 0;
	cfi.dwFontSize.Y = 20;
	cfi.FontFamily = FF_DONTCARE;
	cfi.FontWeight = FW_NORMAL; 
	printf("A quick brown fox jumps over the lazy dog\n");

    printf("Setting to Lucida Console: press <Enter> ");
	getchar();
	wcscpy_s(cfi.FaceName, L"Lucida Console");
	SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &cfi);

	printf("Setting to Consolas: press <Enter> ");
	getchar();
	wcscpy_s(cfi.FaceName, L"Consolas");
	SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &cfi);

	printf("Setting to Raster: press <Enter> ");
	getchar();
	cfi.dwFontSize.X = 3;			//Size setting
	cfi.dwFontSize.Y = 5;
	cfi.FontWeight = FW_THIN;
	wcscpy_s(cfi.FaceName, L"Raster");//Bitmap font
	SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &cfi);

	printf("Setting to Raster: press <Enter> ");
	getchar();
	cfi.dwFontSize.X = 8;
	cfi.dwFontSize.Y = 8;
	cfi.FontWeight = FW_THIN;
	wcscpy_s(cfi.FaceName, L"Raster");
	SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &cfi);

	printf("Press <Enter> to exit");
	getchar();
	return 0;
}
#include<stdio.h>

#include<conio.h>

#include<graphics.h>

int main()

{

int gd=DETECT,gm,font,X=100, Y=100;

initgraph(&gd,&gm,"");

for(font=0;font<10;font++)

{

settextstyle( font,HORIZ_DIR,1);

outtextxy(X,Y,"Graphics Programming");

Y=Y+50;

}

getch();

closegraph();

}*/