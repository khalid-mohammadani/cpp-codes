#include<iostream>
#include<memory>
using namespace std;

class Book{
    public:
        Book(){
            cout<<"Constructor of Book class\n";
        }
        
        ~Book(){
            cout<<"Destructor of Book class\n";
        }
};


class Library{
    private:
        std::shared_ptr<Book>bookInLibrary; 
    public:
        Library(std::unique_ptr<Book> b){
            cout<<"Constructor of Library class\n";
            bookInLibrary= std::shared_ptr<Book>(move(b)); 
        }
        std::shared_ptr<Book> getLibrary()
        {
            return bookInLibrary;
        }
        ~Library(){
            cout<<"Destructor of Library class\n";
        }
};


class ReadBook{
    private:
    std::weak_ptr<Book> readBook;
    public:
        ReadBook(std::shared_ptr<Book> read){
            cout<<"Constructor of ReadBook class\n";
            readBook=read;
        }
        ~ReadBook(){
            cout<<"Destructor of ReadBook class\n";
        }
};

int main()
{
    std::unique_ptr<Book> book = std::make_unique<Book>();
    Library insert = std::move(book);
    ReadBook read=insert.getLibrary();
    return 0;
}