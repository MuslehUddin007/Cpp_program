#include<iostream>
#include<conio.h>

class Student
{
	public:
		int id;
		double gpa;	
		
		void display(){
			std::cout << id << " " << gpa << std::endl;
		}
		void setValue(int x,double y){
			id = x;
			gpa = y;
		}
};

int main()
{
	Student Khan,Akil;
	Khan.id = 2313;
	Khan.gpa = 3.85;
	Khan.display();
	
	Akil.setValue(2315,3.95);
	Akil.display();
	
	getch();
	return 0;
}
