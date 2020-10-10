/* ****************************************************************
 * @author: Kevin Balmores
 * @app name: Hello World
 * @app desc: Outputs "Hello World!"
 * @history:
 *  - <2020/10/08> | Import History
 *      -- Imported to Visual Studio 2019
 *      -- <description>
 *      -- <description>
 *  - <yyyy/mm/dd> | <name>
 *      -- <description>
 *      -- <description>
 *      -- <description>
 * ****************************************************************/

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include "_pause.h"

using namespace std;

//////////////////////////////////////////////////////////////////
//                               NOTE
// This is your program entry point. Your main logic is placed
// inside this function. You may add your functions before this
// "main()", or after this "main()" provided you added reference
// before this "main()" function.
//////////////////////////////////////////////////////////////////

int main() {
    // ************************** TO DO **************************
    // Place your code logic after this comment line
    // ***********************************************************


    /*cout << "\tHello" << endl;
    cout << "\tWorld" << endl;*/

    /*cout << "\tHello" << endl;
    for (int i = 0; i < 8; i++) {
        cout << "\t  |\t" << endl;
    }
    cout << "\tWorld" << endl;*/

    int i = 0;

    cout << "\tHello" << endl;
    while (i <= 4) {
        cout << "\tWorld" << endl;
        ++i;
    }
    

    // ********************** DO NOT CHANGE **********************
    // Print a new line and ask user for any key before exiting
    // ***********************************************************
    _pause();
    return EXIT_SUCCESS;
}
