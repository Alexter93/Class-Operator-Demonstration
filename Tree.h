#ifndef _MYRECTANGLE_H_
#define _MYRECTANGLE_H_

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <conio.h>
using namespace std;


class Tree
{
private:
	int leafNumber;
	string treeColor;
	string barkColor;

public:
	// constructors
	Tree();
	Tree(int leafNumber, string treeColor, string barkColor);

	// accessors
	int getLeafNumber();
	string getTreeColor();
	string getBarkColor();
	void display();

	// mutators
	void setLeafNumber(int leafNumber);
	void setTreeColor(string treeColor);
	void setBarkColor(string barkColor);

	
	//  MATHEMATICAL OPERATORS

	// BINARY operators

	Tree   operator+(const Tree& rhs);
	Tree   operator-(const Tree& rhs);
	Tree   operator*(const Tree& rhs);
	Tree   operator/(const Tree& rhs);

	// UNARY operators
	Tree&   operator+=(const Tree& rhs);
	Tree&   operator-=(const Tree& rhs);
	Tree&   operator*=(const Tree& rhs);
	Tree&   operator/=(const Tree& rhs);

	Tree&   operator=(const Tree& rhs);

	Tree   operator++(int ignoreThis);  // this is the POST
	Tree   operator++();                // this is the PRE
	Tree   operator--(int ignoreThis);  // this is the POST
	Tree   operator--();                // this is the PRE

	// LOGICAL operators
	bool  operator==(const Tree& rhs);
	bool  operator!=(const Tree& rhs);
	bool  operator<(const Tree& rhs);
	bool  operator<=(const Tree& rhs);
	bool  operator>(const Tree& rhs);
	bool  operator>=(const Tree& rhs);


	//   STREAM  operators

	//   FRIEND FUNCTIONS

	friend    ostream&   operator<<(ostream& strm, const Tree& rhs);
	friend    istream&   operator>>(istream& strm, Tree& rhs);
};

#endif