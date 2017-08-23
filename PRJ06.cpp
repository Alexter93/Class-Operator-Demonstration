// PRJ06.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Tree.h"
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <conio.h>
using namespace std;

void display(Tree& tree1, Tree& tree2, Tree& tree3)
{
	tree1.display();
	tree2.display();
	tree3.display();
	cout << "-----------------------------------------------" << endl;
}
int _tmain(int argc, _TCHAR* argv[])
{
	Tree tree1;
	Tree tree2;
	Tree tree3;

	tree1.setLeafNumber(103);
	tree1.setTreeColor("green");
	tree1.setBarkColor("brown");
	
	tree2.setLeafNumber(645);
	tree2.setTreeColor("pink");
	tree2.setBarkColor("white");

	tree3.setLeafNumber(17);
	tree3.setTreeColor("grey");
	tree3.setBarkColor("black");

	display(tree1, tree2, tree3);

	tree3 = tree1 + tree2;
	tree3 = tree1 - tree2;
	tree3 = tree1 * tree2;
	tree3 = tree1 / tree2;

	tree3 += tree1;
	tree3 -= tree1;
	tree3 *= tree1;
	tree3 /= tree1;
	
	display(tree1, tree2, tree3);

	cout << "Tree1 == Tree3 : " << (tree1 == tree3) << endl;
	cout << "Tree1 != Tree3 : " << (tree1 != tree3) << endl;

	cout << "Tree1 < Tree3 : " << (tree1 < tree3) << endl;
	cout << "Tree1 <= Tree3 : " << (tree1 <= tree3) << endl;

	cout << "Tree3 > Tree1 : " << (tree3 > tree1) << endl;
	cout << "Tree3 >= Tree1 : " << (tree3 >= tree1) << endl;

	tree1++;
	++tree1;
	tree1--;
	--tree1;

	cout << tree1 << endl;
	cout << "Enter a tree's leafNumber, treeColor & barkColor separated with spaces: ";
	cin >> tree1;
	cout << tree1 << endl;

	cout << tree3;
	tree3 = tree1;
	cout << tree3;
	
	display(tree1, tree2, tree3);

	_getch();
	return 0;
}

