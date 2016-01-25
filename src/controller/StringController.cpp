/*
 * string.cpp
 *
 *  Created on: Jan 25, 2016
 *      Author: jlin3312
 */


#include "StringController.h"

#include <string>
#include <iostream>
using namespace std;
StringController :: StringController()
{
cool = "How cool are you man";


}

void StringController :: start()
{
	string cool2 = cool.substr(3,5);
	int wordSize = cool.size();
	string cool4 = cool.substr(5);
	int equality  = cool.compare("stringer");
	bool isEmpty= cool.empty();
	char letter = cool.at(13);

	cout <<"This is how you use size for cool "<< wordSize << endl;
	cout <<"This is how you use [] " << cool[4] << endl;
	cout <<"This is how you use at(INT) " << letter << endl;
	cout <<"This is how you use empty() " << isEmpty << endl;
	cout <<"This is how you use substr(start,end) " << cool2<< endl;
	cout <<"This is how you use substr(start) " << cool4 << endl;
	cout <<"This is how you use compare(string) " << equality<< endl;


}
