#pragma once
class Book
{
private:

	string _author;
	string _title;
	string _publ;
	int _year;
	int _pages;

public:

	explicit Book(string author, string title, string publ, int year, int pages)
	{
		this->_author = author;
		this->_title = title;
		this->_publ = publ;
		this->_year = year;
		this->_pages = pages;
	}

	string GetAuthor() const
	{
		return _author;
	}

	string GetTitle() const
	{
		return _title;
	}

	string GetPubl() const
	{
		return _publ;
	}

	int GetYear() const
	{
		return _year;
	}

	int GetPages() const
	{
		return _pages;
	}

};