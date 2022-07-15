#ifndef BoolByteArray_h
#define BoolByteArray_h

struct BoolByteArray
{
private:
    unsigned char array;

public:
    void set(int i)
    {
        array |= (1 << i);
    }

    void clear(int i)
    {
        array &= ~(1 << i);
    }

    bool get(int i)
    {
        return array && (1 << i);
    }

    bool operator [](int i)
    {
        return get(i);
    }

    /*bool& operator[](int i)
    {
        set(i);
        return array;
    }*/

    unsigned char* ptr()
    {
        return array;
    }
};

#endif