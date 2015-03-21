#ifndef UTIL_H
#define UTIL_H

template<typename T>
void safe_delete(T * &p)
{
    delete p;
    p = 0;
}

template<typename T>
void safe_delete_array(T * &p)
{
    delete [] p;
    p = 0;
}

#endif // UTIL_H
