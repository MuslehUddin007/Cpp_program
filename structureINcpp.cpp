#include<iostream>

struct book
{
    private:
        int book_id;
        char book_name;
        float book_price;
    public:
        void input(){
            std::cout << "Enter Book information: " << std::endl;
            std::cin >> book_id >> book_name;
            std::cin.sync();
            std::cin >> book_price;
        }
        void display(){
            std::cout << "Book Information: " << std::endl;
            std::cout << "Book Id : " << book_id << std::endl;
            std::cout << "Book Name : " << book_name << std::endl;
            std::cout << "Book Price : " << book_price << std::endl;
        }
}b;

int main()
{
    b.input();
    b.display();
    int x=0;
    std::cin >> x;
    if(x<0)
        x = -x;
    std::cout << x << std::endl;
    return 0;
}
