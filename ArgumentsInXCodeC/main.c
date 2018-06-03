//
//  main.c
//  ArgumentsInXCodeC
//
//  Created on 5/28/18.
//  Copyright © 2018. All rights reserved.
//

/*
    Just a quick demo of setting and processing arguments
    in an XCode C project.
 
    Bottom line: Debug arguments are set through Product Menu -> Scheme -> Edit Scheme
                    or Clover-< for short.
 
    Other arg notes, use ' or " around args with spaces or '\ ' to escape the space.
    When args with spaces are put in a build scheme, you must supply the quoting.
 
 */

#include <stdio.h>
#include <stdlib.h>


void dumpArgs(int numberOfArgs, const char * argArray[]) {
    // Simple arg dump
    for (int x=0; x<numberOfArgs; x++)
        printf("Arg[%d] = %s \n", x,argArray[x]);
    
    /*
     With params "a, b, 42" produces...
     Arg[0] = /Users/{..full path...}/Debug/ArgumentsInXCodeC
     Arg[1] = a
     Arg[2] = b
     Arg[3] = 42
     Program ended with exit code: 0
     */

}

int convertArgToInteger(int argNumber, const char * argArray[]) {
    // Convert the argument number (zero based) specified to an integer.
    
    int rval = -1;
    
    // stdlib.h functions are like atoi() and strtol(), there are more.
    rval = atoi(argArray[argNumber]);
    
    return rval;
    
}

int main(int argc, const char * argv[]) {
    
    // Passing argument info to a function
    dumpArgs(argc, argv);
    
    int testval = convertArgToInteger(3, argv);
    printf("argument 3 converted to integer = %d \n", testval);

    return 0;
}
