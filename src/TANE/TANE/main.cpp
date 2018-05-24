#include "TANE.hpp"

int main(int argc, const char * argv[])
{
    double start, stop, durationTime;
    start = clock();
    TANE();
    stop = clock();
    durationTime = ((double)(stop - start)) / CLOCKS_PER_SEC;
    cout << "Running Time: " << durationTime << "s" << endl;
    return 0;
}
