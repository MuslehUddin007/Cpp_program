#include<iostream>
#include<vector>
#include<string>

int main()
{
	std::vector <std::string> colour;
	
	colour.push_back("Blue");
	colour.push_back("Red");
	colour.push_back("Orange");
	colour.push_back("Yellow");
	
	for(int i=0;i<4;i++){
		std::cout << colour[i] << std::endl;
	}
	return 0;
}
