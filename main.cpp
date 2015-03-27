#include <iostream>
#include "swap.h"
using namespace std;

int buf[2]={1,2};

int main() {
    swap();
    cout<<buf[0]<<" "<<buf[1]<<endl;
    return 0;
}