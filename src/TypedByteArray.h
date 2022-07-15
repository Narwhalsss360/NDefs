#ifndef TypedByteArray_h
#define TypedByteArray_h

template<typename T, size_t size>
struct TypedByteArray
{
    union
    {
        unsigned char bytes[size];
        T data;
    };

    TypedByteArray()
    {
    }

    TypedByteArray(const unsigned char *value)
    {
        memmove(bytes, value, size);
    }

    TypedByteArray(T &l)
        : data(l)
    {
    }

    TypedByteArray(T &&r)
        : data(r)
    {
    }

    operator T()
    {
        return data;
    }

    void operator=(const T &l)
    {
        data = l;
    }

    void operator=(const T &&r)
    {
        data = r;
    }
};

#endif