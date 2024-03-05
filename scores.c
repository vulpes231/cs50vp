#include <stdio.h>
#include <cs50.h>

const int N = 3;

float average(int array[]);

int main(void)
{
    int scores[N];
   
    for(int i = 0; i < N; i++)
    {
        scores[i] = get_int("Enter Scores: ");
    }

    printf("Average score: %f\n", average(scores));
}

float average(int array[])
{
//    return (array[0] + array[1] + array[2]) / (float) N;
    int sum = 0;

    for(int i = 0; i < N; i++)
    {
        sum += array[i];
    }

    return sum / (float) N;

}