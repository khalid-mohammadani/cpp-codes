// [Constructor] Book created
// Title: The C++ Programming Language
// Author: Bjarne Stroustrup
// [Destructor] Book deleted

#include<iostream>

using namespace std;

class Book
{
private:
    string title,author;
public:
    Book(){ 
        title="The C++ Programming Language";
        author="Hunt";
        cout<<"[Constructor] Book created\n";
        cout<<"Book title "<<title<<"\n";
        cout<<"Book author "<<author<<"\n";

    }
    ~Book(){
        cout << "[Destructor] Book deleted\n";
   }
};

int main()
{
    Book b1;                //b1 object is automatically deleted by C++   
    Book* b2 = new Book();

   delete b2;              //b2 object is deleted by us  
   return 0;
}
