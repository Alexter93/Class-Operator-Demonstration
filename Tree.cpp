#include "stdafx.h"
#include "Tree.h"

// constructors
Tree::Tree()
{
	this->leafNumber = 0;
	this->treeColor = "";
	this->barkColor = "";
}
Tree::Tree(int leafNumber, string treeColor, string barkColor)
{
	this->leafNumber = leafNumber;
	this->treeColor = treeColor;
	this->barkColor = barkColor;
}

// accessors
int Tree::getLeafNumber()
{
	return leafNumber;
}
string Tree::getTreeColor()
{
	return treeColor;
}
string Tree::getBarkColor()
{
	return barkColor;
}
void Tree::display()
{
	cout << " LeafNumber: " << leafNumber << " - TreeColor:" << treeColor << " - BarkColor:" << barkColor << endl;
}

// mutators
void Tree::setLeafNumber(int leafNumber)
{
	this->leafNumber = leafNumber;
}
void Tree::setTreeColor(string treeColor)
{
	this->treeColor = treeColor;
}
void Tree::setBarkColor(string barkColor)
{
	this->barkColor = barkColor;
}

	
//  MATHEMATICAL OPERATORS

// BINARY operators

Tree   Tree::operator+(const Tree& rhs)
{
	Tree temp;
	temp.leafNumber = this->leafNumber + rhs.leafNumber;
	return temp;
}
Tree   Tree::operator-(const Tree& rhs)
{
	Tree temp;
	temp.leafNumber = this->leafNumber - rhs.leafNumber;
	return temp;
}
Tree   Tree::operator*(const Tree& rhs)
{
	Tree temp;
	temp.leafNumber = this->leafNumber * rhs.leafNumber;
	return temp;
}
Tree   Tree::operator/(const Tree& rhs)
{
	Tree temp;
	temp.leafNumber = this->leafNumber / rhs.leafNumber;
	return temp;
}

// UNARY operators

Tree&   Tree::operator+=(const Tree& rhs)
{
	this->leafNumber += rhs.leafNumber;
	return *this;
}
Tree&   Tree::operator-=(const Tree& rhs)
{
	this->leafNumber -= rhs.leafNumber;
	return *this;
}
Tree&   Tree::operator*=(const Tree& rhs)
{
	this->leafNumber *= rhs.leafNumber;
	return *this;
}
Tree&   Tree::operator/=(const Tree& rhs)
{
	this->leafNumber /= rhs.leafNumber;
	return *this;
}

Tree&   Tree::operator=(const Tree& rhs)
{
	
	this->leafNumber = rhs.leafNumber;
	this->treeColor = rhs.treeColor;
	this->barkColor = rhs.barkColor;
	return *this;
}

Tree   Tree::operator++(int ignoreThis)  // this is the POST
{
	int templeafNumber = leafNumber;
	leafNumber++;
	return Tree(leafNumber, treeColor, barkColor);
}
Tree   Tree::operator++()                // this is the PRE
{
	leafNumber++;
	return Tree(leafNumber, treeColor, barkColor);
}
Tree   Tree::operator--(int ignoreThis)  // this is the POST
{
	int templeafNumber = leafNumber;
	leafNumber--;
	return Tree(leafNumber, treeColor, barkColor);
}
Tree   Tree::operator--()                // this is the PRE
{
	leafNumber--;
	return Tree(leafNumber, treeColor, barkColor);
}

// LOGICAL operators

bool  Tree::operator==(const Tree& rhs)
{
	return (this->leafNumber == rhs.leafNumber
		&& this->treeColor == rhs.treeColor
		&& this->barkColor == rhs.barkColor);
}
bool  Tree::operator!=(const Tree& rhs)
{
	return (this->leafNumber != rhs.leafNumber
		&& this->treeColor != rhs.treeColor
		&& this->barkColor != rhs.barkColor);
}
bool  Tree::operator<(const Tree& rhs)
{
	return (this->leafNumber < rhs.leafNumber
		&& this->treeColor < rhs.treeColor
		&& this->barkColor < rhs.barkColor);
}
bool  Tree::operator<=(const Tree& rhs)
{
	return (this->leafNumber <= rhs.leafNumber
		&& this->treeColor <= rhs.treeColor
		&& this->barkColor <= rhs.barkColor);
}
bool  Tree::operator>(const Tree& rhs)
{
	return (this->leafNumber > rhs.leafNumber
		&& this->treeColor > rhs.treeColor
		&& this->barkColor > rhs.barkColor);
}
bool  Tree::operator>=(const Tree& rhs)
{
	return (this->leafNumber >= rhs.leafNumber
		&& this->treeColor >= rhs.treeColor
		&& this->barkColor >= rhs.barkColor);
}


//   STREAM  operators

//   FTreeIEND FUNCTIONS

ostream&   operator<<(ostream& strm, const Tree& rhs)
{
	strm << "********************************************" << endl;
	strm << " LeafNumber: " << rhs.leafNumber << " - TreeColor:" << rhs.treeColor << " - BarkColor:" << rhs.barkColor << endl;
	strm << "********************************************" << endl;
	return strm;
}
istream&   operator>>(istream& strm, Tree& rhs)
{
	strm >> rhs.leafNumber;
	strm >> rhs.treeColor;
	strm >> rhs.barkColor;
	return strm;
}