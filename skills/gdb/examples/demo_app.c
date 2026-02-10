#include <stdio.h>
#include <unistd.h>
#include <time.h>
#include <string.h>

// A simple structure to simulate some data
typedef struct {
    int id;
    char name[32];
    int value;
} Item;

void process_item(Item *item) {
    item->value += 1;
    // Simulate some work
    usleep(100000); // 100ms
}

void loop_function(int iteration) {
    Item current_item;
    current_item.id = iteration;
    sprintf(current_item.name, "Item_%d", iteration);
    current_item.value = 0;

    process_item(&current_item);
    
    // Occasional print to stdout to show it's alive (but not too spammy)
    if (iteration % 50 == 0) {
        printf("Main Loop: Iteration %d processed. Value: %d\n", iteration, current_item.value);
        fflush(stdout);
    }
}

int main() {
    int counter = 0;
    printf("Demo App Started. PID: %d\n", getpid());
    fflush(stdout);

    while (1) {
        loop_function(counter);
        counter++;
        usleep(500000); // 0.5s loop interval
    }
    return 0;
}
