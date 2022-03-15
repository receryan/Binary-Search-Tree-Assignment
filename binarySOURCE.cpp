#include "binaryST.h"
#include <iostream>
#include <cassert>
using namespace std;

int main()
{
	bSearchTreeType<int> BS;

	int element = 0;

	//Tell the user what the program is supposed to do.
	cout << "This program will prompt the user for a list of elements\n" <<
		"to add to the binary tree. It will then return the number of\n" <<
		"leaves in the tree.\n\n";

	cout << "Please enter as many positive elements as you want to add to the tree.\n"
		<< "Enter '-1' when finished adding elements: ";

	cin >> element;

	while (element != -1)
	{
		BS.insert(element);
		cin >> element;
	}

	cout << "\nThe elements you entered, inorder, are: ";
	BS.inorderTraversal();

	cout << "\n\nThe elements you entered, preorder, are: ";
	BS.preorderTraversal();

	cout << "\n\nThe elements you entered, postorder, are: ";
	BS.postorderTraversal();


	cout << "\n\nEnter an element you would like to search for in the tree: ";
	cin >> element;
	if (BS.search(element) == true)
		cout << "\n\nThe element you entered was found: " << element << endl;
	else
		cout << "\n\nElement could not be found.";


	cout << "\n\nEnter an item you would like to delete from the tree: ";
	cin >> element;
	
	BS.deleteNode(element);

	cout << "\n\nItem deleted successfully.";
	cout << "\n\nNew list of elements, inorder, are: ";
	BS.inorderTraversal();

	cout << "\n\nNew list of elements, preorder, are: ";
	BS.preorderTraversal();

	cout << "\n\nNew list of elements, postorder, are: ";
	BS.postorderTraversal();
}