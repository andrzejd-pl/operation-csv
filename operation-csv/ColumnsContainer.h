#pragma once

#include <vector>
#include <memory>

#include "Column.h"

class ColumnsContainer
{
private:
	std::vector<std::unique_ptr<Column<void*>>> columns_;

public:

	void readFromFile(const std::string& f_name);
	void writeToFile(const std::string& f_name, Column<double>& kols);

};

