// Author -- Taraas
// Created at July, 20 on Eee PC 1015 on Ubuntu Linux
// Path direcory: /usr/include/c++/

//Special commands for compiler


//Basic include
#include <cstdio>
#include <iostream>
#include <fstream>
#include <clocale>
#include <ctime>

//Math include
#include <algorithm>
#include <cmath>

//STL Data structures
#include <vector>
#include <queue>
#include <map>
#include <deque>
#include <stack>
#include <set>
#include <iterator>

//Data Structures
#include <cstring>
#include <string>
#include <sstream>

//Global variables


using namespace std;

void Hanoi(int r, int b, int e) // Перестановка Ханойской Башни (r -- кол-во дисков; b -- базовый стержень; e -- новый стержень)
{
    int c; // Буферный стержень
	//*******Начальные присваивания****//
    if ((b == 1 && e == 2) || (b == 2 && e == 1)) c = 3;
    else
        if ((b == 1 && e == 3) || (b == 3 && e == 1)) c = 2;
        else
            if ((b == 2 && e == 3) || (b == 3 && e == 2)) c = 1;
	
 	//******Рекурсивный переход*******//
    if (r > 1)
    {
        Hanoi(r - 1, b, c);
        std::cout << b << " -> " << e << std::endl;
        Hanoi(r - 1, c, e);
    }
    else
        std::cout << b << " -> " << e << std::endl;
}


int gcd(int x,int y) // Вычисление НОД (рекурсивно) 
{
    if (y == 0) return x;
    return gcd(y,x%y);
}

void gcd_main()
{
	int x=0;
	int y=0;
	int temp = 0;
	cout<< "Enter x: ";
	cin >> x;
	cout<< "Enter y: ";
	cin >> y;
	if (x>y)  cout<< "GCD = "<< gcd(x,y) <<endl;
	else 
	{
		temp=x;
	 	x=y;
	 	y=temp;
	 	cout<< "GCD = "<< gcd(x,y) <<endl;
	}
}

void hanoi_main()
{
	int _rings;
	cout<<"We will show transplantation from FIRST plase to SECOND place."<<endl;
	std::cout << "Type number of rings: ";
	std::cin >> _rings;
	cout<<endl;
	Hanoi(_rings, 1, 3);
	cout<<"Program ended!"<<endl;
}

int main()
{
	int ans = 0;
    cout<<"Programs:"<<endl;
	cout<<"=========="<<endl;
	cout<<"1. Hanoi."<<endl;
	cout<<"2. Gcd."<<endl; 
	cout<<"=========="<<endl;
	cout<<"Answer: ";
	cin>> ans;
	cout<<endl;
	if (ans==1) hanoi_main();
		else gcd_main();
	return 0;
}
