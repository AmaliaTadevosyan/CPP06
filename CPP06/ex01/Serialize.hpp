#pragma once

#include <iostream>

typedef struct Data
{
    int member1;
    int member2;
} Data;

class Srialize
{
    private:
        Serialize();
        Serialize(const Serialize&);
        Serialize& operator=(const Serialize&);
        ~Serialize();
    public:
        static uniptr_t serialize(Data* ptr);
        static Data* deserialize(uniptr_t raw);
}