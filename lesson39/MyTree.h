#pragma once
#include <iostream>
using namespace std;

namespace myBinTree {
	template <typename T>
	class Node {
	public:
		T info;
		Node* left;
		Node* right;

		Node(T value) { info = value; left = right = nullptr; }
		void showNode() {
			cout << "INFO: " << info << endl;
			cout << "\t Left: " << left << " Right: " << right << endl;
		}
	};

	template <typename U>
	class BinTree {
		Node<U>* root; //Указатель на первый узел в дереве

		void showSubTree(Node<U>*p)const {
			if (p != nullptr)
			{
				showSubTree(p->left);
				cout << p->info << " ";
				showSubTree(p->right);
			}
		}

		void delSubTree(Node<U>* p) {
			if (p != nullptr)
			{
				delSubTree(p->left);
				delSubTree(p->right);
				cout << "Del: " << p->info << endl;
				delete p;
			}
		}
	public:
		BinTree() { root = nullptr; }
		~BinTree() {
			delSubTree(root);
		}

		void insert(U value) {
			Node<U>* el = new Node<U>(value);
			if (root == nullptr)
			{
				root = el;
			}
			else
			{
				Node<U>* p = root;
				Node<U>* parent = root;
				while (p != nullptr)
				{
					parent = p;
					if (value < p->info)
						p = p->left;
					else
						p = p->right;
				}
				
				if (value < parent->info)
					parent->left = el;
				else
					parent->right = el;
			}
		}

		Node<U>* search(U value) {
			Node<U>* p = root;
			while (p != nullptr)
			{
				if (p->info == value)
				{
					return p;
				}
				if (value < p->info)
					p = p->left;
				else
					p = p->right;
			}
			return nullptr;
		}


		//Полный обход дерева
		void showTree() {
			if (root == nullptr)
				cout << "Bin tree is empty!" << endl;
			else {
				showSubTree(root->left);
				cout << root->info << " ";
				showSubTree(root->right);
				cout << endl;
			}
		}

	};
}