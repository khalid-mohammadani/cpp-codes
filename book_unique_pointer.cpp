#include<iostream>
#include<memory>
using namespace std;

class Book
{
public:
    Book(){
        cout<<"[Constructor] Book created\n";
        cout<<"Book title The C++ Programming Language\n";
        cout<<"Book author Hunt\n";
    }
    ~Book(){
        cout << "[Destructor] Book deleted\n";
    }
};

class Library{
    private:
        std::shared_ptr<Book> book;
    public:
    Library(std::shared_ptr<Book> b){
        cout<<"[Constructor] Library created\n";
        book=b;       
    }
    ~Library(){
        cout << "[Destructor] Library deleted\n";
    }

};

class BookStore{
    private:
        std::unique_ptr<Book> book;
    public:
        BookStore(std::unique_ptr<Book> b){
            cout<<"[Constructor] BookStore created\n";
            book=std::move(b); // b is unique ptr so it direct cannot be copied or assigned to another ptr threfore move ownership
    
        }
        ~BookStore(){
            cout << "[Destructor] BookStore deleted\n";
        }
    
};

class BookReviewer{
    private:
        std::weak_ptr<Book> book;
    public:
         BookReviewer(std::shared_ptr<Book> b){
            cout<<"[Constructor] BookReviewer created\n";
            book=b; // b is shared ptr so it direct can be copied or assigned to another ptr
    
        }
        ~BookReviewer(){
            cout << "[Destructor] BookReviewer deleted\n";
        }
    
};



int main()
{
    std::unique_ptr<Book> b = std::make_unique<Book>();
    std::shared_ptr<Book> sharedB = std::make_shared<Book>();
    cout<<"count "<<sharedB.use_count() <<endl;

    Library lib(sharedB);
    cout<<"count "<<sharedB.use_count() <<endl;

    BookReviewer rev(sharedB);
    cout<<"count "<<sharedB.use_count() <<endl;

    return 0;
}