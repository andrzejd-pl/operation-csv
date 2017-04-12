#pragma once
#include <vector>
#include <algorithm>

template <typename T>
class Column {
private:
	std::string name_;
	std::vector<T> data_;
	unsigned int nr_col_;
public:

	virtual T at(const unsigned int nr) const {
		return data_[nr];
	}

	virtual void functionToDo(T(fun)(T& arg)) {
		/*for (auto& el : data_) {
			el = fun(el);
		}*/

		std::for_each(data_.begin(), data_.end(), fun);
	}

	virtual void setNrCol(unsigned int nr_kol) {
		nr_col_ = nr_kol;
	}

	virtual unsigned int getNrCol() const {
		return nr_col_;
	}

	virtual void setName(const std::string& name) {
		name_ = name;
	}

	virtual void addElement(const T& el) {
		data_.push_back(el);
	}

	virtual std::vector<T> getData() const {
		return data_;
	}

	virtual ~Column() = default;
};

class Column_Int : public Column<long long int> {};
class Column_String : public Column<std::string> {};
class Column_Double : public Column<double> {};
//class Column_Bool : public Column<bool> {};