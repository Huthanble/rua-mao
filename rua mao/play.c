#define  _CRT_SECURE_NO_WARNINGS 1
#include "play.h"
#include<stdio.h>
int change_mood(int mood, int val)
{
    mood += val;
    if (mood < 0)
    {
        printf("Little Qin is sad... : (\n");
    }
    else if (mood == 0)
    {
        printf("Little Qin wants to play with you~ : )\n");
    }
    else
    {
        printf("Little Qin is happy! XD\n");
    }
    return mood;
}
void change_weight(float factor)
{
    extern float weight;
    weight *= factor;
    if (weight < 50.0)
    {
        printf("Cute!\n");
    }
    else if (weight > 200.0)
    {
        printf("Extremely CUTE!\n");
    }
    else
    {
        printf("So cute!\n");
    }
}
int rua(int mood)
{
    mood = change_mood(mood, 1);
    return mood;
}
int feed(int mood)
{
    mood = change_mood(mood, 2);
    change_weight(2);
    return mood;
}
int do_nothing(int mood)
{
    mood = change_mood(mood, -1);
    change_weight(0.75);
    return mood;
}
