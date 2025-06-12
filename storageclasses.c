#include <stdio.h>

auto int autoVar = 10;
register int regVar = 20;
static int staticVar = 30;
extern int externVar;

void function() {
    auto int localAuto = 100;
    static int localStatic = 200;

    printf("Inside function:\n");
    printf("Local auto variable: %d\n", localAuto);
    printf("Local static variable: %d\n", localStatic);

    localAuto++;
    localStatic++;
}

int main() {
    printf("Storage Classes in C:\n\n");
    printf("1. AUTO: Default storage class for local variables\n");
    printf("2. REGISTER: Stored in CPU register for faster access\n");
    printf("3. STATIC: Retains value between function calls\n");
    printf("4. EXTERN: Declared in one file, defined in another\n\n");

    printf("Global auto variable: %d\n", autoVar);
    printf("Global register variable: %d\n", regVar);
    printf("Global static variable: %d\n", staticVar);

    printf("\nCalling function twice to show static behavior:\n");
    function();
    function();

    return 0;
}
