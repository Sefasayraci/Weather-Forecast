#include<iostream>
#include<conio.h>
#include <string.h>
#include<stdio.h>

using namespace std;

main()
{
 setlocale(LC_ALL, "Turkish");
basla:
int c=0, d=0, e=0, f=0, g=0, h=0, i=0;

	
	cout << "Birinci sayý giriniz = " ;
	cin >> c;
	
	cout << "Ýkinci sayý giriniz = " ;
	cin >> d;
	
	cout << "Üçüncü sayý giriniz = " ;
	cin >> e;
	
	cout << "Dördüncü sayý giriniz = " ;
	cin >> f;
	
	cout << "Beþinci sayý giriniz = " ;
	cin >> g;
	
	cout << "Altýncý sayý giriniz = " ;
	cin >> h;
	
	cout << "Yedinci sayý giriniz = " ;
	cin >> i;
/////////////////////////////////////////////////////////////////////////////////////////////////////////

if(c<10)
{
    printf("Pazartesi = ");
    cout<<c<<" derece ve";
	printf(" Cold olmak üzere:");
	
	if(c>i)
	printf("Bir önceki güne göre : ++++(artmakta)");
	
	else if(c<i)
	printf("Bir önceki güne göre : ----(azalmakta)");
	
	else
	printf("Bir önceki güne göre : ====(eþittir)");
	
	cout<<endl;

}
else if(c>=10 && c<25)
{

	printf("Pazartesi = ");
    cout<<c<<" derece ve";
	printf(" Warm olmak üzere:");

	if(c>i)
	printf("Bir önceki güne göre : ++++(artmakta)");
	
	else if(c<i)
	printf("Bir önceki güne göre : ----(azalmakta)");
	
	else
	printf("Bir önceki güne göre : ====(eþittir)");
	
	cout<<endl;
	
}
	else
	{
	
	printf("Pazartesi = ");
    cout<<c<<" derece ve";
	printf(" Hot olmak üzere:");
	
	if(c>i)
	printf("Bir önceki güne göre : ++++(artmakta)");
	
	else if(c<i)
	printf("Bir önceki güne göre : ----(azalmakta)");
	
	else
	printf("Bir önceki güne göre : ====(eþittir)");
	
	cout<<endl;
	
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////

if(d<10)
{
	printf("Salý = ");
    cout<<d<<" derece ve";
	printf(" Cold olmak üzere:");
	
	if(d>c)
	printf("Bir önceki güne göre : ++++(artmakta)");
	
	else if(d<c)
	printf("Bir önceki güne göre : ----(azalmakta)");
	
	else
	printf("Bir önceki güne göre : ====(eþittir)");
	
	cout<<endl;
	
}
else if(d>=10 && d<25)
{

	printf("Salý = ");
    cout<<d<<" derece ve";
	printf(" Warm olmak üzere:");
	
	if(d>c)
	printf("Bir önceki güne göre : ++++(artmakta)");
	
	else if(d<c)
	printf("Bir önceki güne göre : ----(azalmakta)");
	
	else
	printf("Bir önceki güne göre : ====(eþittir)");
	
	cout<<endl;
	
}
	else
	{
	
	printf("Salý = ");
    cout<<d<<" derece ve";
	printf(" Hot olmak üzere:");
	
	if(d>c)
	printf("Bir önceki güne göre : ++++(artmakta)");
	
	else if(d<c)
	printf("Bir önceki güne göre : ----(azalmakta)");
	
	else
	printf("Bir önceki güne göre : ====(eþittir)");
	
	cout<<endl;
	
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////

if(e<10)
{
	printf("Çarþamba = ");
    cout<<e<<" derece ve";
	printf(" Cold olmak üzere:");
	
	if(e>d)
	printf("Bir önceki güne göre : ++++(artmakta)");
	
	else if(e<d)
	printf("Bir önceki güne göre : ----(azalmakta)");
	
	else
	printf("Bir önceki güne göre : ====(eþittir)");
	
	cout<<endl;
		
}
else if(e>=10 && e<25)
{

	printf("Çarþamba = ");
    cout<<e<<" derece ve";
	printf(" Warm olmak üzere:");
	
	if(e>d)
	printf("Bir önceki güne göre : ++++(artmakta)");
	
	else if(e<d)
	printf("Bir önceki güne göre : ----(azalmakta)");
	
	else
	printf("Bir önceki güne göre : ====(eþittir)");
	
	cout<<endl;
	
	}
	else
	{
	
	printf("Çarþamba = ");
    cout<<e<<" derece ve";
	printf(" Hot olmak üzere:");

	
	if(e>d)
	printf("Bir önceki güne göre : ++++(artmakta)");
	
	else if(e<d)
	printf("Bir önceki güne göre : ----(azalmakta)");
	
	else
	printf("Bir önceki güne göre : ====(eþittir)");
	
	cout<<endl;
	
	}
/////////////////////////////////////////////////////////////////////////////////////////////////////////

if(f<10)
{
	printf("Perþembe = ");
    cout<<f<<" derece ve";
	printf(" Cold olmak üzere:");
	
	if(f>e)
	printf("Bir önceki güne göre : ++++(artmakta)");
	
	else if(f<e)
	printf("Bir önceki güne göre : ----(azalmakta)");
	
	else
	printf("Bir önceki güne göre : ====(eþittir)");
	
	cout<<endl;
			
}
else if(f>=10 && f<25)
{

	printf("Perþembe = ");
    cout<<f<<" derece ve";
	printf(" Warm olmak üzere:");

	if(f>e)
	printf("Bir önceki güne göre : ++++(artmakta)");
	
	else if(f<e)
	printf("Bir önceki güne göre : ----(azalmakta)");
	
	else
	printf("Bir önceki güne göre : ====(eþittir)");
	
	cout<<endl;
	
	}
	else
	{
	
	printf("Perþembe = ");
    cout<<f<<" derece ve";
	printf(" Hot olmak üzere:");

	if(f>e)
	printf("Bir önceki güne göre : ++++(artmakta)");
	
	else if(f<e)
	printf("Bir önceki güne göre : ----(azalmakta)");
	
	else
	printf("Bir önceki güne göre : ====(eþittir)");
	
	cout<<endl;
	
	}
/////////////////////////////////////////////////////////////////////////////////////////////////////////

if(g<10)
{
	printf("Cuma = ");
    cout<<g<<" derece ve";
	printf(" Cold olmak üzere:");

	if(g>f)
	printf("Bir önceki güne göre : ++++(artmakta)");
	
	else if(g<f)
	printf("Bir önceki güne göre : ----(azalmakta)");
	
	else
	printf("Bir önceki güne göre : ====(eþittir)");
	
	cout<<endl;
				
}
else if(g>=10 && g<25)
{

	printf("Cuma = ");
    cout<<g<<" derece ve";
	printf(" Warm olmak üzere:");

	if(g>f)
	printf("Bir önceki güne göre : ++++(artmakta)");
	
	else if(g<f)
	printf("Bir önceki güne göre : ----(azalmakta)");
	
	else
	printf("Bir önceki güne göre : ====(eþittir)");
	
	cout<<endl;
	
	}
	else
	{
	
	printf("Cuma = ");
    cout<<g<<" derece ve";
	printf(" Hot olmak üzere:");

	if(g>f)
	printf("Bir önceki güne göre : ++++(artmakta)");
	
	else if(g<f)
	printf("Bir önceki güne göre : ----(azalmakta)");
	
	else
	printf("Bir önceki güne göre : ====(eþittir)");
	
	cout<<endl;
	
	}
/////////////////////////////////////////////////////////////////////////////////////////////////////////

if(h<10)
{
	printf("Cumartesi = ");
    cout<<h<<" derece ve";
	printf(" Cold olmak üzere:");

	if(h>g)
	printf("Bir önceki güne göre : ++++(artmakta)");
	
	else if(h<g)
	printf("Bir önceki güne göre : ----(azalmakta)");
	
	else
	printf("Bir önceki güne göre : ====(eþittir)");
	
	cout<<endl;
					
}
else if(h>=10 && h<25)
{

	printf("Cumartesi = ");
    cout<<h<<" derece ve";
	printf(" Warm olmak üzere:");

	if(h>g)
	printf("Bir önceki güne göre : ++++(artmakta)");
	
	else if(h<g)
	printf("Bir önceki güne göre : ----(azalmakta)");
	
	else
	printf("Bir önceki güne göre : ====(eþittir)");
	
	cout<<endl;
	
	}
	else
	{
	
	printf("Cumartesi = ");
    cout<<h<<" derece ve";
	printf(" Hot olmak üzere:");

	if(h>g)
	printf("Bir önceki güne göre : ++++(artmakta)");
	
	else if(h<g)
	printf("Bir önceki güne göre : ----(azalmakta)");
	
	else
	printf("Bir önceki güne göre : ====(eþittir)");
	
	cout<<endl;
	
	}
/////////////////////////////////////////////////////////////////////////////////////////////////////////

if(i<10)
{
	printf("Pazar = ");
    cout<<i<<" derece ve";
	printf(" Cold olmak üzere:");

	if(i>h)
	printf("Bir önceki güne göre : ++++(artmakta)");
	
	else if(i<h)
	printf("Bir önceki güne göre : ----(azalmakta)");
	
	else
	printf("Bir önceki güne göre : ====(eþittir)");
	
	cout<<endl;	
	cout<<endl;	

	
}
else if(i>=10 && i<25)
{

	printf("Pazar = ");
    cout<<i<<" derece ve";
	printf(" Warm olmak üzere:");
	
	if(i>h)
	printf("Bir önceki güne göre : ++++(artmakta)");
	
	else if(i<h)
	printf("Bir önceki güne göre : ----(azalmakta)");
	
	else
	printf("Bir önceki güne göre : ====(eþittir)");
	
	cout<<endl;	
	cout<<endl;	

	
	}
	else
	{
	
	printf("Pazar = ");
    cout<<i<<" derece ve";
	printf(" Hot olmak üzere:");

	if(i>h)
	printf("Bir önceki güne göre : ++++(artmakta)");
	
	else if(i<h)
	printf("Bir önceki güne göre : ----(azalmakta)");
	
	else
	printf("Bir önceki güne göre : ====(eþittir)");
	
	cout<<endl;	
	cout<<endl;	

	}

{
cout<<endl;
goto basla;
}
}

