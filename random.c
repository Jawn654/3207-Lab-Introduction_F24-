#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "random.h"

char randchar(){
    char letters[] = "abcdefghijklmnopqrstuvwxyz";
    char num = letters[rand() % 26];
    return num;
}
