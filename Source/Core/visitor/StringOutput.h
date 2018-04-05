/**
 * Project Untitled
 */

#pragma once
#include <string>
#include "VisitOutput.h"

using namespace std;
class StringOutput :public VisitOutput {
	friend class DebugVisit;
friend class IRVisit;
friend class MappingNameVisit;
	friend class MappingNameVisit;
public: 
 
	StringOutput(string val);
	virtual ~StringOutput();
	inline string getVal() { return val; };

protected:
	string val;
};
