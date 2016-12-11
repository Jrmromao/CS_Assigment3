#pragma once
#include "stdafx.h"
#include "EntryType.h"

const int LETTERS = 26;
typedef char key[MAXLENGTH];
struct Trienode
{

	Trienode *branch[LETTERS];
	EntryType *ref;

};


class TrieType {

public:
	TrieType();
	~TrieType();
	TrieType(TrieType &originalTree);
	void operator=(TrieType &originalTree);
	void MakeEmpty();
	void InsertTrie(key newkey, EntryType *newentry);
	EntryType *  TrieSearch(key target);
	bool DeleteTrie(key delkey);
	void PrintTrie() const;
private:
	Trienode * root;
};


EntryType * TrieType::TrieSearch(key target) {


	Trienode * current = root;


	for (int i = 0; i < MAXLENGTH && current; i++)
	{
		if (target[i] == '\0')
			break;
		else 
			current = current->branch[target[i] - 'a'];
		if (!current)
			return NULL;
		else
			if (!current->ref)
				return NULL;
	}

	return current->ref;
}

Trienode *CreateNode()
{

	Trienode *newnode = new Trienode;
	for (int ch = 0; ch < LETTERS; ch++)
		newnode->branch[ch] = NULL;

	newnode->ref = NULL;

	return newnode;
}


void TrieType::InsertTrie(key newkey, EntryType *newentry)
{

	Trienode *current;
	if (!root)
		root = CreateNode();
	current = root;
	for (int i = 0; i < MAXLENGTH; i++)
		if (newkey[i] == '\0')
			break;
		else
		{
			if (!current->branch[newkey[i] - 'a'])
				current->branch[newkey[i] - 'a'] = CreateNode();
			current = current->branch[newkey[i] - 'a'];
		}

	if (current->ref != NULL)
		cout << "\nTried to insert a duplicate key." << endl;
	else
		current->ref = newentry;

	if (current->ref != NULL)
	cout << "\nTried to insert a duplicate key." << endl;
	else
	current->ref = newentry;

}
