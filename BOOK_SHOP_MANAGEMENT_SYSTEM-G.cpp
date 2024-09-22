#include <bits/stdc++.h>
#include <stdio.h>
#include <fstream>
using namespace std;

class bookshop
{
private:
    string shopmail;
    int shoppassword;
    string bookname;
    string authorname;
    int copy;
    string genre;
    string isbn;

public:
    void displaybooks();
    bool search_book(string);
    void delete_book(string);
    bool login(string email, string password);
    void add_book();
    void exit();
    void about();
    void userguidelines();
};

void bookshop::about()
{
    cout << "BOOK SHOP MANAGEMENT SYSTEM" << endl;
    cout << "-----------------------------" << endl;
    cout << "\n\n\n";
    cout << "1.This project is made for bookshop owner. Any bookshop owner can utilize this program." << endl;
    cout << "2.Here in this project,varius function available to do various task." << endl;
    cout << "3.One can add books,search books,delete books use this programme" << endl;
    cout << "4.An owner of book shop can save all the information of books that are available right now." << endl;
    cout << "5.He will get an opportunity to keep in touch with all the information of his shop by this system" << endl;
}

bool bookshop::login(string email, string password)
{
    string shopmail = "rkrifat048@gmail.com";
    string word = "rifat10";

    if (shopmail == email && word == password)
    {

        return true;
    }
    else
    {
        return false;
    }
}

void bookshop::userguidelines()
{
    cout << "\t\t\tUser guidelines" << endl;
    cout << "\t\t\t---------------" << endl;
    cout << endl;
    cout << "1.User's must provide the right information as per demand." << endl;
    cout << "2.User's must not provide unnecessary space at the time of giving information to system." << endl;
    cout << "3.User's shoudn't click wrong button." << endl;
    cout << "4.User's should use this system with care" << endl;
    cout << "5.User's shouldn't add more than 100 books to this system" << endl;
    cout << "6.User's should understand the limitation of this project." << endl;
}

void bookshop::add_book()
{
    cin.ignore();
    cout << "\n\n\t\tEnter Book Name:";
    getline(cin, bookname);
    cout << "\t\tEnter Author Name:";
    getline(cin, authorname);
    cout << "\t\tEnter genre of the book:";
    cin >> genre;
    cout << "\t\tEnter Isbn:";
    cin >> isbn;
    cout << "\t\tEnter Number of copies:";
    cin >> copy;
}

void bookshop::displaybooks()
{
    if (bookname != "")
    {
        cout << "\nBook Name:" << bookname << endl;
        cout << "Author Name:" << authorname << endl;
        cout << "Number of copy:" << copy << endl;
        cout << "Genre:" << genre << endl;
        cout << "ISBN:" << isbn << endl;
    }
}

bool bookshop::search_book(string name)
{
    if (name == bookname)
    {
        return true;
    }
    return false;
}

void bookshop::delete_book(string name)
{
    if (name == bookname)
    {
        cout << "\nDeleting Book:" << endl;
        displaybooks();
        bookname = "";
        authorname = "";
        copy = 0;
        genre = "";
        isbn = "";
        cout << "\nBook Deleted Successfully!" << endl;
    }
}

void bookshop::exit()
{
    cout << "\n\n\n\n\t\t\t\tThanks for using this system." << endl;
    cout << "\n\t\t\t\tGood bye. See you again." << endl;
}
int main()
{
    int num;
    bookshop book;
    bookshop bookk[1000];
    int choice;
    cout << "\n\n\n\n\n\t\t\t\t\tWelcome to the Bookshop Management System\n\n\n\n"
         << endl;
    system("pause");
    system("cls");
    cout << "\t\t\t\tDISCRIPTION" << endl;
    cout << "\n\n\n"
         << endl;
    cout << "This is a bookshop management system for any bookshop ownwer." << endl;
    cout << "To secure all the information of book shop,here is login system." << endl;
    cout << "By giving right password and email.Owner of the shop can use this system easyly." << endl;
    cout << "An unknown person will not able to change his shop information without knowing the password and email." << endl;
    cout << "That will surely help him to secure data and information." << endl;
    cout << "This is the raw  discription of this project." << endl;
    cout << "Thanks." << endl;
    system("pause");
check:
    system("cls");
    cout << "\t\t\tLog In Process" << endl;
    cout << "\t\t\t---------------------" << endl;
    string email, password;
    cout << "Enter the  email to log in: ";
    cin >> email;
    cout << "Enter the given password: ";
    cin >> password;

    if (book.login(email, password))
    {
        cout << "\n\n\n\n\t\t\t\t" << endl;
        cout << "Varification successful.Well done" << endl;
        cout << "\n\n\n";
        system("pause");
        goto welcome;
    }
    else
    {
        system("cls");
        cout << "Invalid password/Email" << endl;
        cout << "Try again." << endl;
        cout << endl;
        system("pause");
        goto check;
    }
welcome:
    cout << "\n\t\t\t\t\tBOOKSHOP MANAGEMENT SYSTEM\n";
level:
    system("cls");
    cout << "               MAIN MENU:               " << endl;
    cout << "-------------------------------------------" << endl;
    cout << "     1. Add Books To Store\n";
    cout << "     2. Display All Available Books \n";
    cout << "     3. Search For A Book\n";
    cout << "     4. Remove A Book From Store\n";
    cout << "     5. User Guidelines\n";
    cout << "     6. Details Of The Project\n";
    cout << "     7. Exit From Program\n";
    cout << "Enter according to your choice: ";
    cin >> choice;

    if (choice == 1)
    {
        system("cls");
        cout << "Adding Books To The Store:" << endl;
        cout << "-------------------------" << endl;
        cout << "Enter the number of books:";
        cin >> num;
        for (int i = 0; i < num; i++)
        {
            cout << "\nEnter The details of the books:" << i + 1 << endl;
            bookk[i].add_book();
        }
        cout << "\nBooks added succesfully" << endl;
        system("pause");
        goto level;
    }
    else if (choice == 2)
    {
        system("cls");
        cout << "displaying all the books:" << endl;
        cout << "----------------------------\n"
             << endl;

        // bookshop bookk[num];
        for (int i = 0; i < num; i++)
        {
            bookk[i].displaybooks();
            cout << endl;
        }
        system("pause");
        goto level;
    }
    else if (choice == 3)
    {
        system("cls");
        cout << "Searching for a book...." << endl;
        cout << "----------------------\n"
             << endl;
        string searchbyname;
        cout << "Enter the name of the book to search: ";
        cin >> searchbyname;
        bool found = false;
        // bookshop bookk[num];
        for (int i = 0; i < num; i++)
        {
            if (bookk[i].search_book(searchbyname))
            {
                cout << "Book is Available in the store" << endl;
                bookk[i].displaybooks();
                found = true;
                break;
            }
        }
        if (!found)
        {
            cout << "Sorry.Book is not found in the store." << endl;
        }
        system("pause");
        goto level;
    }
    else if (choice == 4)
    {
        system("cls");
        string deleteName;
        cout << "Enter the name of the book to delete: ";
        cin >> deleteName;
        bool found = false;
        // bookshop bookk[num];
        for (int i = 0; i < num; i++)
        {
            if (bookk[i].search_book(deleteName))
            {
                found = true;
                bookk[i].delete_book(deleteName);
                break;
            }
        }
        if (!found)
        {
            cout << "Book is not found in the store." << endl;
            cout << "Deletion failed" << endl;
        }
        system("pause");

        goto level;
    }
    else if (choice == 5)
    {
        system("cls");
        book.userguidelines();
        system("pause");
        goto level;
    }
    else if (choice == 6)
    {
        system("cls");
        book.about();
        system("pause");
        goto level;
    }
    else if (choice == 7)
    {
        system("cls");
        book.exit();
        return 0;
    }
    else
    {
        system("cls");
        cout << "Invalid option" << endl;
        system("pause");
        goto level;
    }

    return 0;
}
