//////////////////////////////////
//	Author: Joao Filipe Romao	//
//	K00201566					//
//////////////////////////////////
#include "stdafx.h"
#include "TrieType.h"
#include <iostream>
#include <string>

//#include "EntryType.h"



bool flag = false;

//menu prototypes
int menu(); //Menu
void optionOne_Insert();//Option 1
void optionTwo_Search();//option 2
void optionThree_Print();//option 3
void optionFour_Delete();//option 4
void exit();//option 5


//global variables
TrieType newTrie;
key newKey;
using namespace std;
int main()
{
	int option = 0;

	
	do
	{
		option = menu();

	switch (option)
	{
	case 1:
		optionOne_Insert();
		break;
	case 2:
		optionTwo_Search();
		break;
	case 3:
		optionThree_Print();
		break;
	case 4:
		optionFour_Delete();
		break;
	case 5:
		exit();
		break;
	default:
		cout << "\t\tNOT A VALID OPTION!";
		break;
	}


	} while (!flag);
	
	

	return 0;
}


int menu() {

	int option;

	cout << "\n\n\n\n\t1. Insert a Word\n";
	cout << "\t2. Search for a Word\n";
	cout << "\t3. Print Trie\n";
	cout << "\t4. Delete a Word\n";
	cout << "\t5. Exit\n";
	cout << "\tOption: ";
	cin >> option;

	return option;
}


void optionOne_Insert() {



	cout << "Enter a Word: ";
	cin >> newKey;
	EntryType* newEntryType = new EntryType(newKey);
	newTrie.InsertTrie(newKey, newEntryType);

}


	void optionTwo_Search() {

		cout << "\n\n\t" << "ENTER A WORD: ";
		cin >> newKey;
		if (newTrie.TrieSearch(newKey)) {
			cout <<"\n\n\t"<< newKey<<" WAS FOUND!\n";
		}
		else {
			cout << "\n\n\t" << newKey << " WAS NOT FOUND!\n";
		}
	}



	void optionThree_Print() {
		newTrie.PrintTrie();
	}



	void optionFour_Delete() {
	}



	void exit() {

		flag = true;
	}