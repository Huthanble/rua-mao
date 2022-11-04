#define  _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
#include "play.h"

float weight = 100.0;

int main()
{
    int mood = 1, act;

    for (int i = 0; i < 7; i++) {
        scanf("%d", &act);

        switch (act) {
        case 2: mood = rua(mood); break;
        case 1: mood = feed(mood); break;
        case 0: mood = do_nothing(mood); break;
        }
    }

    return 0;
}
