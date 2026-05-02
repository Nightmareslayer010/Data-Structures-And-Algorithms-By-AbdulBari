#ifndef ARRAY_H
#define ARRAY_H

template <class T>
class Array
{
private:
    T *A;
    int size;
    int length;
    void swap(T *x, T *y);

public:
    // constructors and destructor
    Array();
    Array(int s, int l);
    Array(const Array &arr);
    ~Array();

    // member functions
    // helper
    void display() const;
    // accessor
    int get(int index);
    // mutater
    void set(int index, T value);
    // facilitator
    void append(T value);
    void insert(int index, T value);
    void Delete(int index);
    int lSearch(T key);
    int bSearch(T key);
    int bSearchHelper(int low, int high, T key);
    int rBsearch(T key);
    T max();
    T min();
    T sum();
    double avg();
    void reverseNormal();
    void reverseSwap();
    void insertInSorted(T value);
    bool isSorted();
    void reArrange();
    void lShiftRotate(int k);
    void rShiftRotate(int k);
    Array<T> Merge(Array<T> &arr2);
    Array<T> Union(Array<T> &arr2);
    Array<T> Intersection(Array<T> &arr2);
    Array<T> Difference(Array<T> &arr2);
};
#include "Array.cpp"
#endif