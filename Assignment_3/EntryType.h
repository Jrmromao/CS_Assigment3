#pragma once
#include "stdafx.h"

const int MAXLENGTH = 10;
class EntryType {

	public:
		EntryType();
		EntryType(char * key);
		EntryType(EntryType & entry);
		bool operator== (const EntryType& item) const;
		bool operator!= (const EntryType& item) const;

	private:
		char entryKey[MAXLENGTH];



};

EntryType::EntryType() {

}
EntryType::EntryType(char * key) {

}
EntryType::EntryType(EntryType & entry) {

}

inline bool EntryType::operator==(const EntryType & item) const
{
	return false;
}

inline bool EntryType::operator!=(const EntryType & item) const
{
	return false;
}


