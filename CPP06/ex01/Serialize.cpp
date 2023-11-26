#include "Serialize.hpp"

static uniptr_t Serialize::serialize(Data* ptr)
{
    return (reinterpret_cast<uniptr_t>(ptr));
}

static Data* Serialize::deserialize(uniptr_t raw)
{
    return (reinterpret_cast<Data*>(raw));
}

