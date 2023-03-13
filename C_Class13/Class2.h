#pragma once
class Worker
{
private:

	string _full_name;
	string _post;
	int _year;
	int _wage;

public:

	explicit Worker(string full_name, string post, int year, int wage)
	{
		this->_full_name = full_name;
		this->_post = post;
		this->_year = year;
		this->_wage = wage;
	}

	string GetName() const
	{
		return _full_name;
	}

	string GetPost() const
	{
		return _post;
	}

	int GetYear() const
	{
		return _year;
	}

	int GetWage() const
	{
		return _wage;
	}
};