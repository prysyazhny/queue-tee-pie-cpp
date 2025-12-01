#pragma once

#include <iostream>
#include "cutie.hpp"

class QueueTees
{
private:
    static const int MAX_SIZE = 10;
    Cutie *data[MAX_SIZE];
    int front_index;
    int back_index;
    int current_size;

public:
    QueueTees()
        : front_index(0), back_index(0), current_size(0) {}

    int size() const
    {
        return current_size;
    }

    void enqueue(Cutie &cutie)
    {
        if (current_size >= MAX_SIZE)
        {
            std::cout << "Queue is full. Cannot enqueue another Cutie.\n";
            return;
        }

        data[back_index] = &cutie;
        back_index = (back_index + 1) % MAX_SIZE;
        current_size++;
    }

    Cutie *dequeue()
    {
        if (current_size == 0)
        {
            std::cout << "Queue is empty. Cannot dequeue.\n";
            return nullptr;
        }

        Cutie *front_cutie = data[front_index];
        front_index = (front_index + 1) % MAX_SIZE;
        current_size--;
        return front_cutie;
    }
};
