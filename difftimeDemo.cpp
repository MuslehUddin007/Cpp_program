#include <iostream>
#include <ctime>
using namespace std;

string get_current_time()
{
    time_t rawtime;
    struct tm * timeinfo;

    time ( &rawtime );
    timeinfo = localtime ( &rawtime );

    char output[30];
    strftime(output, 30, "%Y-%m-%d %H-%M-%S %p %a", timeinfo);//%p for "AM/PM"//%r 12hour format//

    return string(output);
}

int main()
{
    time_t start,ending,time_ptr,time_ptr1;
    long addition;

    time(&start);
    for (int i = 0; i < 20000; i++) {
        for (int j = 0; j < 20000; j++);
    }
    for (int i = 0; i < 20000; i++) {
        for (int j = 0; j < 20000; j++);
    }
    for (int i = 0; i < 20000; i++) {
        for (int j = 0; j < 20000; j++);
    }
    time(&ending);
    cout << "Total time required = "
        << difftime(ending,start)
        << " seconds " << endl;

    time(&time_ptr);
    cout << "Current date and time = "
        << asctime(localtime(&time_ptr)) << endl;

    time(&time_ptr1);
    time_ptr = time(NULL);
    tm* tm_local = localtime(&time_ptr1);

    cout << "Current local time is = "
        << tm_local -> tm_hour << ":"
        <<tm_local -> tm_min << ":"
        <<tm_local -> tm_sec << endl;

    cout << get_current_time();

    return 0;
}
