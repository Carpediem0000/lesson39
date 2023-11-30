#include "MyTree.h"
#include <set>
#define TASK 2

int main()
{
#if TASK == 1
	myBinTree::BinTree<int> tree;

	tree.insert(13);
	tree.insert(-2);
	tree.insert(6);
	tree.insert(8);
	tree.insert(88);
	tree.insert(14);
	tree.insert(29);
	tree.insert(36);
	tree.insert(11);
	tree.insert(5);

	myBinTree::Node<int>* ptr1 = tree.search(0);
	myBinTree::Node<int>* ptr2 = tree.search(88);
	if (ptr1 != nullptr)
		ptr1->showNode();
	if (ptr2 != nullptr)
		ptr2->showNode();
	system("pause"); 

	cout << "====================================\n";

	tree.showTree();

#endif // TASK == 1
#if TASK == 2

#endif // TASK == 2

}