#include <iostream>
#include <string>
#include <vector>
using namespace std;
#include "Class1.h"
#include "Class2.h"



int main()
{

    // Task1 ---------------------------------------------------------------------
    cout << "Task 1: \n\n";
    vector<Book> books = 
    {
        Book("Rowling", "Harry Potter & philosopher stone", "Bloomsbury", 1997, 300),
        Book("Rowling", "Harry Potter & prisoner of Azkaban", "Bloomsbury", 1998, 300),

        Book("Dick", "Blade Runner", "Times", 1998, 400),
        Book("Dick", "Solar Tower", "Times", 1999, 400),

        Book("Gluhovsky", "Metro 2033", "Kyiv", 1999, 500),
        Book("Gluhovsky", "Metro 2034", "Kyiv", 2000, 500)

    };

    string find_author = "Dick";
    cout << "Books by " << find_author << ": " << endl;
    for (const Book& i : books) 
    {
        if (i.GetAuthor() == find_author)
        {
            cout << i.GetTitle() << " " << i.GetYear() << " " << i.GetPubl() << endl;

        }
    }
    cout << "\n";

    string find_publ = "Kyiv";
    cout << "Books publisher by " << find_publ << ": " << endl;
    for (const Book& i : books)
    {
        if (i.GetPubl() == find_publ)
        {
            cout << i.GetTitle() << " " << i.GetYear() << " " << i.GetAuthor() << endl;
        }
    }
    cout << "\n";

    int find_year = 1998;
    cout << "Books after " << find_year << ": " << endl;
    for (const Book& i : books)
    {
        if (i.GetYear() > find_year)
        {
            cout << i.GetTitle() << " " << i.GetYear() << " " << i.GetAuthor() << endl;
        }
    }
    cout << "\n\n";


    // Task2 ---------------------------------------------------------------------
    cout << "Task 2: \n\n";
    vector<Worker> workers =
    {
        Worker("Joey", "Admin", 2010, 30000),
        Worker("Fibi", "Musician", 2016, 15999),
        Worker("Rachel", "Designer", 2020, 23000)
    };

    int find_ExpYear = 10;
    cout << "Work experience over " << find_ExpYear << ": " << endl;
    for (const Worker& i : workers)
    {
        if (int j = 2023 - i.GetYear() > find_ExpYear)
        {
            cout << i.GetName() << " " << i.GetPost() << " " << i.GetYear() << " " << i.GetWage() << endl;
        }
    }
    cout << "\n";

    int find_Wage = 20000;
    cout << "Wage over " << find_Wage << ": " << endl;
    for (const Worker& i : workers)
    {
        if (i.GetWage() > find_Wage)
        {
            cout << i.GetName() << " " << i.GetPost() << " " << i.GetYear() << " " << i.GetWage() << endl;
        }
    }
    cout << "\n";

    string find_Post = "Admin";
    cout << "People on " << find_Post << " post: " << endl;
    for (const Worker& i : workers)
    {
        if (i.GetPost() == find_Post)
        {
            cout << i.GetName() << " " << i.GetPost() << " " << i.GetYear() << " " << i.GetWage() << endl;
        }
    }

}
