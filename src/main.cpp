/*
 * main.cpp
 *
 *  Created on: Oct 21, 2015
 *      Author: dalqalla
 */

#include <iostream>
#include <string>

using namespace std;

string functionDNA ()
{
	string DNA;

cout << "Enter DNA string:\n";
getline ( cin, DNA );
cout << " " <<DNA<<" ( "<< DNA.size()<<" chars ) " ;
cout<<endl;
return (DNA) ;
}
int main () {
	functionDNA ();
	cout<< "hi";
	cout<<"hello";
return 0 ;}



