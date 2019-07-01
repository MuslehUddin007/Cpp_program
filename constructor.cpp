#include<iostream>

class Student{
	public:
		int id;
		double gpa;
		
		//constructor//
		Student(int x, double y){
			id = x;
			gpa = y;
		}
		//display information//
		void display(){
			std::cout << id << "\t\a" << gpa << std::endl;
		}
};

int main()
{
	Student khan(2313,3.85);
	khan.display();
	
	return 0;
}
