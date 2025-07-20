#include <iostream>
#include <unistd.h> // for sleep
using namespace std;

int main() {
    cout << "Loading";  // goes into buffer
    sleep(2);           // wait 2 seconds
    cout << "." << flush; // now prints everything immediately
    sleep(2);
    cout << "." << flush;
    return 0;
}
