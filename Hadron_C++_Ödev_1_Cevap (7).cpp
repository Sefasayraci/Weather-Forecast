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

	
	cout << "Birinci say� giriniz = " ;
	cin >> c;
	
	cout << "�kinci say� giriniz = " ;
	cin >> d;
	
	cout << "���nc� say� giriniz = " ;
	cin >> e;
	
	cout << "D�rd�nc� say� giriniz = " ;
	cin >> f;
	
	cout << "Be�inci say� giriniz = " ;
	cin >> g;
	
	cout << "Alt�nc� say� giriniz = " ;
	cin >> h;
	
	cout << "Yedinci say� giriniz = " ;
	cin >> i;
/////////////////////////////////////////////////////////////////////////////////////////////////////////

if(c<10)
{
    printf("Pazartesi = ");
    cout<<c<<" derece ve";
	printf(" Cold olmak �zere:");
	
	if(c>i)
	printf("Bir �nceki g�ne g�re : ++++(artmakta)");
	
	else if(c<i)
	printf("Bir �nceki g�ne g�re : ----(azalmakta)");
	
	else
	printf("Bir �nceki g�ne g�re : ====(e�ittir)");
	
	cout<<endl;

}
else if(c>=10 && c<25)
{

	printf("Pazartesi = ");
    cout<<c<<" derece ve";
	printf(" Warm olmak �zere:");

	if(c>i)
	printf("Bir �nceki g�ne g�re : ++++(artmakta)");
	
	else if(c<i)
	printf("Bir �nceki g�ne g�re : ----(azalmakta)");
	
	else
	printf("Bir �nceki g�ne g�re : ====(e�ittir)");
	
	cout<<endl;
	
}
	else
	{
	
	printf("Pazartesi = ");
    cout<<c<<" derece ve";
	printf(" Hot olmak �zere:");
	
	if(c>i)
	printf("Bir �nceki g�ne g�re : ++++(artmakta)");
	
	else if(c<i)
	printf("Bir �nceki g�ne g�re : ----(azalmakta)");
	
	else
	printf("Bir �nceki g�ne g�re : ====(e�ittir)");
	
	cout<<endl;
	
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////

if(d<10)
{
	printf("Sal� = ");
    cout<<d<<" derece ve";
	printf(" Cold olmak �zere:");
	
	if(d>c)
	printf("Bir �nceki g�ne g�re : ++++(artmakta)");
	
	else if(d<c)
	printf("Bir �nceki g�ne g�re : ----(azalmakta)");
	
	else
	printf("Bir �nceki g�ne g�re : ====(e�ittir)");
	
	cout<<endl;
	
}
else if(d>=10 && d<25)
{

	printf("Sal� = ");
    cout<<d<<" derece ve";
	printf(" Warm olmak �zere:");
	
	if(d>c)
	printf("Bir �nceki g�ne g�re : ++++(artmakta)");
	
	else if(d<c)
	printf("Bir �nceki g�ne g�re : ----(azalmakta)");
	
	else
	printf("Bir �nceki g�ne g�re : ====(e�ittir)");
	
	cout<<endl;
	
}
	else
	{
	
	printf("Sal� = ");
    cout<<d<<" derece ve";
	printf(" Hot olmak �zere:");
	
	if(d>c)
	printf("Bir �nceki g�ne g�re : ++++(artmakta)");
	
	else if(d<c)
	printf("Bir �nceki g�ne g�re : ----(azalmakta)");
	
	else
	printf("Bir �nceki g�ne g�re : ====(e�ittir)");
	
	cout<<endl;
	
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////

if(e<10)
{
	printf("�ar�amba = ");
    cout<<e<<" derece ve";
	printf(" Cold olmak �zere:");
	
	if(e>d)
	printf("Bir �nceki g�ne g�re : ++++(artmakta)");
	
	else if(e<d)
	printf("Bir �nceki g�ne g�re : ----(azalmakta)");
	
	else
	printf("Bir �nceki g�ne g�re : ====(e�ittir)");
	
	cout<<endl;
		
}
else if(e>=10 && e<25)
{

	printf("�ar�amba = ");
    cout<<e<<" derece ve";
	printf(" Warm olmak �zere:");
	
	if(e>d)
	printf("Bir �nceki g�ne g�re : ++++(artmakta)");
	
	else if(e<d)
	printf("Bir �nceki g�ne g�re : ----(azalmakta)");
	
	else
	printf("Bir �nceki g�ne g�re : ====(e�ittir)");
	
	cout<<endl;
	
	}
	else
	{
	
	printf("�ar�amba = ");
    cout<<e<<" derece ve";
	printf(" Hot olmak �zere:");

	
	if(e>d)
	printf("Bir �nceki g�ne g�re : ++++(artmakta)");
	
	else if(e<d)
	printf("Bir �nceki g�ne g�re : ----(azalmakta)");
	
	else
	printf("Bir �nceki g�ne g�re : ====(e�ittir)");
	
	cout<<endl;
	
	}
/////////////////////////////////////////////////////////////////////////////////////////////////////////

if(f<10)
{
	printf("Per�embe = ");
    cout<<f<<" derece ve";
	printf(" Cold olmak �zere:");
	
	if(f>e)
	printf("Bir �nceki g�ne g�re : ++++(artmakta)");
	
	else if(f<e)
	printf("Bir �nceki g�ne g�re : ----(azalmakta)");
	
	else
	printf("Bir �nceki g�ne g�re : ====(e�ittir)");
	
	cout<<endl;
			
}
else if(f>=10 && f<25)
{

	printf("Per�embe = ");
    cout<<f<<" derece ve";
	printf(" Warm olmak �zere:");

	if(f>e)
	printf("Bir �nceki g�ne g�re : ++++(artmakta)");
	
	else if(f<e)
	printf("Bir �nceki g�ne g�re : ----(azalmakta)");
	
	else
	printf("Bir �nceki g�ne g�re : ====(e�ittir)");
	
	cout<<endl;
	
	}
	else
	{
	
	printf("Per�embe = ");
    cout<<f<<" derece ve";
	printf(" Hot olmak �zere:");

	if(f>e)
	printf("Bir �nceki g�ne g�re : ++++(artmakta)");
	
	else if(f<e)
	printf("Bir �nceki g�ne g�re : ----(azalmakta)");
	
	else
	printf("Bir �nceki g�ne g�re : ====(e�ittir)");
	
	cout<<endl;
	
	}
/////////////////////////////////////////////////////////////////////////////////////////////////////////

if(g<10)
{
	printf("Cuma = ");
    cout<<g<<" derece ve";
	printf(" Cold olmak �zere:");

	if(g>f)
	printf("Bir �nceki g�ne g�re : ++++(artmakta)");
	
	else if(g<f)
	printf("Bir �nceki g�ne g�re : ----(azalmakta)");
	
	else
	printf("Bir �nceki g�ne g�re : ====(e�ittir)");
	
	cout<<endl;
				
}
else if(g>=10 && g<25)
{

	printf("Cuma = ");
    cout<<g<<" derece ve";
	printf(" Warm olmak �zere:");

	if(g>f)
	printf("Bir �nceki g�ne g�re : ++++(artmakta)");
	
	else if(g<f)
	printf("Bir �nceki g�ne g�re : ----(azalmakta)");
	
	else
	printf("Bir �nceki g�ne g�re : ====(e�ittir)");
	
	cout<<endl;
	
	}
	else
	{
	
	printf("Cuma = ");
    cout<<g<<" derece ve";
	printf(" Hot olmak �zere:");

	if(g>f)
	printf("Bir �nceki g�ne g�re : ++++(artmakta)");
	
	else if(g<f)
	printf("Bir �nceki g�ne g�re : ----(azalmakta)");
	
	else
	printf("Bir �nceki g�ne g�re : ====(e�ittir)");
	
	cout<<endl;
	
	}
/////////////////////////////////////////////////////////////////////////////////////////////////////////

if(h<10)
{
	printf("Cumartesi = ");
    cout<<h<<" derece ve";
	printf(" Cold olmak �zere:");

	if(h>g)
	printf("Bir �nceki g�ne g�re : ++++(artmakta)");
	
	else if(h<g)
	printf("Bir �nceki g�ne g�re : ----(azalmakta)");
	
	else
	printf("Bir �nceki g�ne g�re : ====(e�ittir)");
	
	cout<<endl;
					
}
else if(h>=10 && h<25)
{

	printf("Cumartesi = ");
    cout<<h<<" derece ve";
	printf(" Warm olmak �zere:");

	if(h>g)
	printf("Bir �nceki g�ne g�re : ++++(artmakta)");
	
	else if(h<g)
	printf("Bir �nceki g�ne g�re : ----(azalmakta)");
	
	else
	printf("Bir �nceki g�ne g�re : ====(e�ittir)");
	
	cout<<endl;
	
	}
	else
	{
	
	printf("Cumartesi = ");
    cout<<h<<" derece ve";
	printf(" Hot olmak �zere:");

	if(h>g)
	printf("Bir �nceki g�ne g�re : ++++(artmakta)");
	
	else if(h<g)
	printf("Bir �nceki g�ne g�re : ----(azalmakta)");
	
	else
	printf("Bir �nceki g�ne g�re : ====(e�ittir)");
	
	cout<<endl;
	
	}
/////////////////////////////////////////////////////////////////////////////////////////////////////////

if(i<10)
{
	printf("Pazar = ");
    cout<<i<<" derece ve";
	printf(" Cold olmak �zere:");

	if(i>h)
	printf("Bir �nceki g�ne g�re : ++++(artmakta)");
	
	else if(i<h)
	printf("Bir �nceki g�ne g�re : ----(azalmakta)");
	
	else
	printf("Bir �nceki g�ne g�re : ====(e�ittir)");
	
	cout<<endl;	
	cout<<endl;	

	
}
else if(i>=10 && i<25)
{

	printf("Pazar = ");
    cout<<i<<" derece ve";
	printf(" Warm olmak �zere:");
	
	if(i>h)
	printf("Bir �nceki g�ne g�re : ++++(artmakta)");
	
	else if(i<h)
	printf("Bir �nceki g�ne g�re : ----(azalmakta)");
	
	else
	printf("Bir �nceki g�ne g�re : ====(e�ittir)");
	
	cout<<endl;	
	cout<<endl;	

	
	}
	else
	{
	
	printf("Pazar = ");
    cout<<i<<" derece ve";
	printf(" Hot olmak �zere:");

	if(i>h)
	printf("Bir �nceki g�ne g�re : ++++(artmakta)");
	
	else if(i<h)
	printf("Bir �nceki g�ne g�re : ----(azalmakta)");
	
	else
	printf("Bir �nceki g�ne g�re : ====(e�ittir)");
	
	cout<<endl;	
	cout<<endl;	

	}

{
cout<<endl;
goto basla;
}
}

