/**
 * Project Untitled
 */

#pragma once
#include <string>
#include "VisitOutput.h"

using namespace std;
class StringOutput :public VisitOutput {
	friend class DebugVisit;
public:
	StringOutput(string val);
	virtual ~StringOutput();
protected:
	string val;
};
