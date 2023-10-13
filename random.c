#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Array of emotions
    const char* emotions[] = {
        "sadness", "happiness", "fear", "anger", "surprise", "disgust"
    };

    // Seed the random number generator with the current time
    srand(time(NULL));

    // Generate a random number between 0 and 5 (usually 32767)
    int random_number = rand() % 6;
    printf("Random emotion: %s\n", emotions[random_number]);
}