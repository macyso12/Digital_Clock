//  Digital Clock

#include <iostream>
#include <stdlib.h>
#include <curses.h>
#include <unistd.h>
using namespace std;

int main() {
    int hour = 0;
    int min = 0;
    int sec = 0;
    while (true){
        system("clear");
        cout << "***************" << endl ;
        cout <<hour<< " : " << min << " : " << sec << endl ;
        cout << "***************" << endl ;
        sec ++ ;
        if (sec == 60){
            min ++;
            sec = 0;
            if (min == 60){
                hour++;
                min = 0;
                if (hour == 60){
                    hour = 0;
                }
            }
        }
        usleep(10000);
    }
    return 0;
}
