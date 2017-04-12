#include "ColumnsContainer.h"

#include <string>
#include <fstream>

void ColumnsContainer::readFromFile(const std::string& f_name) {
	
	//std::fstream file;
	//file.open(".\\" + f_name, std::ios::in);

	//if (file.is_open()) {

	//	std::string buffor, names;
	//	std::string::size_type p, q;

	//	std::getline(file, names);
	//	
	//	std::getline(file, buffor);
	//	
	//	do {

	//		for (unsigned int i = 1; i < kols.getNrKol(); i++)
	//			std::getline(file, buffor, ';');
	//		std::getline(file, buffor, ';');

	//		for (auto& el : buffor) if (el == ',') el = '.';

	//		double el = std::atof(buffor.c_str());
	//		kols.addElement(el);

	//		std::getline(file, buffor);

	//	} while (!file.eof());

	//} // if (file.is_open())

	//file.close();

} // void ColumnsContainer::readFromFile(...)

void ColumnsContainer::writeToFile(const std::string& f_name, Column<double>& kols) {
	/*std::fstream file1, file2;
	file1.open(".\\" + f_name, std::ios::in);
	std::string f2_name = "new_" + f_name;
	f2_name = ".\\" + f2_name;
	file2.open(f2_name, std::ios::out);
	if (file1.is_open() && file2.is_open()) {
		std::string buffor;
		std::getline(file1, buffor);
		file2 << buffor << std::endl;
		unsigned int licz = 0;
		while (!file1.eof()) {
			for (unsigned int i = 1; i < kols.getNrKol(); i++) {
				std::getline(file1, buffor, ';');
				if (buffor == "") break;
				file2 << buffor << ";";
			}
			if (buffor == "") break;
			std::getline(file1, buffor, ';');
			buffor = std::to_string(kols.at(licz));
			for (auto& el : buffor)
				if (el == '.')
					el = ',';
			file2 << buffor << ";";
			std::getline(file1, buffor);
			file2 << buffor << std::endl;
			licz++;
		}
	}
	file1.close();
	file2.close();*/
}