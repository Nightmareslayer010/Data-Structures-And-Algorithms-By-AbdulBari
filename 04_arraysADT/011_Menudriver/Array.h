#ifndef ARRAY_H
#define ARRAY_H

class Array
{
private:
    int *A;
    int size;
    int length;
    void swap(int *x, int *y);

public:
    // constructors and destructor
    Array();

    Array(int s, int l);

    ~Array();

    // member functions
    // helper
    void display();
    // accessor
    int get(int index);
    // mutater
    void set(int index, int value);
    // facilitator
    void append(int value);
    void insert(int index, int value);
    void Delete(int index);
    int lSearch(int key);
    int bSearch(int key);
    int rBsearch(int key);
    int max();
    int min();
    int sum();
    int avg();
    void reverseNormal();
    void reverseSwap();
    void insertInSorted();
    void isSorted();
    void reArrange();
    void Merge(Array &Arr2);
    void Union(Array &Arr2);
    void Intersection(Array &Arr2);
    void Difference(Array &Arr2);
};

#endif