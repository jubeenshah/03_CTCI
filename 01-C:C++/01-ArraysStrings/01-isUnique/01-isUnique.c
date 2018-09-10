#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isUnique(char* str) {
    int length = strlen(str);
    if (length>128){
        return false;
    }
    bool charSet[128] = {false};
    for (int i = 0; i <= length; i++){
        int val = str[i];
        if (charSet[val]) {
            return false;
        }
        charSet[val] = true;
    }
    return true;
}

int main(int argc, char const *argv[])
{
    char* testStrings[5] = {"abcde", "hello", "apple", "kite", "padle"};
    for (int i = 0; i < 5; i++)
        printf("%s: %s\n", testStrings[i], isUnique(testStrings[i]) ? "true" : "false");
    return 0;
}

