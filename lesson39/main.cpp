#define TASK 2

#if TASK == 1
#include "MyTree.h"
#include <set>
#endif // TASK == 1

#if TASK == 2
#include "Table.h"
#endif // TASK == 2

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
	Table t;
	t.addTrain(Train("1", Time_(12, 0, 0), "Lviv"));
	t.addTrain(Train("56", Time_(6, 20, 0), "ZHt"));
	t.addTrain(Train("4", Time_(8, 30, 0), "KHr"));
	t.addTrain(Train("8", Time_(14, 0, 0), "Ods"));
	t.addTrain(Train("9", Time_(22, 40, 0), "Vinz"));

	t.showTable();

	cout << "====================================\n";

	t.searchByNum("56");
	t.searchByNum("117");
	t.nearestTrain();

	cout << "====================================\n";

	t.cancelTrain("8");
	t.editDepatrureTime("1", Time_(9, 0, 0));
	t.showTable();

#endif // TASK == 2

}