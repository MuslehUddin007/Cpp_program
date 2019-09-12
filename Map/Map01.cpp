#include <iostream>
#include <iterator>
#include <map>

int main()
{
    std::map<int,int> m1;    //declare Map//

    m1.insert(std::pair<int,int>(1,10));
    m1.insert(std::pair<int,int>(2,20));    //(key,element)//
    m1.insert(std::pair<int,int>(3,30));
    m1.insert(std::pair<int,int>(4,40));
    m1.insert(std::pair<int,int>(5,50));
    m1.insert(std::pair<int,int>(6,60));
    m1.insert(std::pair<int,int>(7,70));
    m1.insert(std::pair<int,int>(8,80));
    m1.insert(std::pair<int,int>(9,90));
    m1.insert(std::pair<int,int>(10,100));

    std::map<int,int>::iterator it;

    std::cout << "The map : " << std::endl;
    std::cout << "KEY\tELEMENT" << std::endl;
    for(it = m1.begin();it != m1.end(); it++){
        std::cout << it -> first << "\t" << it ->second << std::endl;
    }
    std::cout << std::endl;

    //std::map<int,int> m2(m1.begin(),m1.end());  //copy from m1//

    m1.emplace_hint(m1.begin(),11,110); //emplace_hint//

    std::cout << "After delete all the element up to key=3 : " << std::endl;
    m1.erase(m1.begin(),m1.find(3));
    m1.erase(4);
    std::cout <<"KEY\tELEMENT"<<std::endl;
    for(it = m1.begin();it != m1.end(); it++){
        std::cout << it->first << "\t" << it->second << std::endl;
    }
    std::cout << m1.lower_bound(5)-> first <<" "<< m1.lower_bound(5)->second << std::endl;
    std::cout << m1.upper_bound(5)-> first <<" "<< m1.upper_bound(5)->second << std::endl;

    if(m1.count(9)) //count//
        std::cout << "The key is present" << std::endl;
    else
        std::cout << "The key is not present" << std::endl;

    return 0;
}
