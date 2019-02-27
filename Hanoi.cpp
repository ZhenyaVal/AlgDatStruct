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

void Hanoi(int r, int b, int e)
{
    int c; 
    if ((b == 1 && e == 2) || (b == 2 && e == 1)) c = 3;
    else
        if ((b == 1 && e == 3) || (b == 3 && e == 1)) c = 2;
        else
            if ((b == 2 && e == 3) || (b == 3 && e == 2)) c = 1;
 
    if (r > 1)
    {
        Hanoi(r - 1, b, c);
        std::cout << b << " -> " << e << std::endl;
        Hanoi(r - 1, c, e);
    }
    else
        std::cout << b << " -> " << e << std::endl;
}
 
int main()
{
    int _rings;
 	cout<<"We will show transplantation from FIRST plase to SECOND place."<<endl;
    std::cout << "Type number of rings: ";
    std::cin >> _rings;
	cout<<endl;
    Hanoi(_rings, 1, 3);
	cout<<"Program ended!"<<endl;
}
