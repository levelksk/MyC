#include <stdio.h>

void butler(void); /* ANSI/IOS C函数原型 */

int main(void) {
    printf("I will sammon butler function.\n");
    butler();
    printf("Yes. Bring me some tea and writeable DVDs.\n");
    return 0;
}

void butler(void) { /* 函数定义开始 */
    printf("You rang, sir?\n");
}
