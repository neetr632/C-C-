#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    // Example of using __attribute__((visibility("hidden")))
    int __attribute__((visibility("hidden"))) hidden_function()
    {
        return 42;
    }

    // Example of using __attribute__((noreturn))
    void __attribute__((noreturn)) exit_program()
    {
        printf("Exiting program...\n");
        exit(0);
    }

    // Example of using __attribute__((aligned(n)))
    struct __attribute__((aligned(16))) AlignedStruct
    {
        int x;
        char y;
    };

    // Example of using __attribute__((deprecated))
    void __attribute__((deprecated)) deprecated_function()
    {
        printf("This function is deprecated.\n");
    }

    int main()
    {
        // Calling the hidden function
        printf("Hidden function result: %d\n", hidden_function());

        // Calling the function that does not return
        exit_program();

        // Declaring an instance of the aligned structure
        struct AlignedStruct aligned_instance;

        // Calling the deprecated function
        deprecated_function();

        return 0;
    }
}

/**
 * what are global name spaces?
 * globalnamespaces are token or attributes that are used to tweak the behaviour of the code in c language.
 * it allows you to fine tune the behaviour of the code by optimizing it according to your need
 */