#include "Counter.h"

Counter::Counter() {
    value = 0;
}
int Counter::getValue() {
    return value;
}
void Counter::increment() {
    value++;
}
void Counter::decrement() {
    if (value > 0) {
        value--;
    }
}