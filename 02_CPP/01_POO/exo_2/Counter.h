#ifndef Counter_H
#define Counter_H

class Counter {
    private :
        int value;
    public :
        Counter();
        int getValue();
        void increment();
        void decrement();
};

#endif