#include "Array.h"
#include <iostream>
using namespace std;

int main()
{
    // input
    int s, l, index, value, output;
    cout << "Enter size" << endl;
    cin >> s;
    cout << "Enter length" << endl;
    cin >> l;
    while (l > s)
    {
        cout << "Length cant be greater than: " << s;
        cin >> l;
    }
    Array arr1(s, l);
    Array arr2(s, l);
    cout << "Enter Elements" << endl;
    int input;
    for (int i = 0; i < l; i++)
    {
        cin >> input;
        arr1.set(i, input);
    }
    cout << "Enter elements for array 2" << endl;
    for (int j = 0; j < l; j++)
    {
        cin >> input;
        arr2.set(j, input);
    }
    // Menu
    int choice;
    do
    {
        cout << "-----Araray ADT MENU------" << endl;
        cout << endl;
        cout << "1. Display array 1" << endl;
        cout << "2. Display array 2" << endl;
        cout << "3 get value from index" << endl;
        cout << "4. Append a Value " << endl;
        cout << "5. Insert value at an Index" << endl;
        cout << "6. Delete element " << endl;
        cout << "7. Linear Search" << endl;
        cout << "8. Binary  Search" << endl;
        cout << "9. Binary  Search Recursive" << endl;
        cout << "10. max min sum and avg" << endl;
        cout << "11. Reverse Array Normal" << endl;
        cout << "12. Reverse Array Swap" << endl;
        cout << "13. Insert in Sorted Array" << endl;
        cout << "14. Check if Array is Sorted" << endl;
        cout << "15. Rearrange Negatives" << endl;
        cout << "16.Left Rotate an Array by k times" << endl;
        cout << "17.Right Rotate an Array by k times" << endl;
        cout << "18.Union" << endl;
        cout << "19.Intersection" << endl;
        cout << "20.Difference" << endl;
        cout << "21.Merge" << endl;
        cout << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
            arr1.display();
            break;
        case 2:
            arr2.display();
            break;
        case 3:
            cout << "Enter index you wanna get" << endl;
            cin >> index;
            output = arr1.get(index);
            cout << output << endl;

            break;
        case 4:
            cout << "Enter append value" << endl;
            cin >> value;
            arr1.append(value);
            cout << "array with appended value:" << endl;
            arr1.display();

            break;
        case 5:
            cout << "Enter index and Value you wanna Insert" << endl;
            cin >> index >> value;
            arr1.insert(index, value);
            cout << "array with inserted value at index" << endl;
            arr1.display();
            break;
        case 6:
            cout << "Enter element index you wanna Delete" << endl;
            cin >> index;
            arr1.Delete(index);
            cout << "Element renoved new array is :" << endl;
            arr1.display();
            break;
        case 7:
            cout << "Enter linear search key" << endl;
            cin >> value;
            output = arr1.lSearch(value);
            cout << output << endl;
            break;
        case 8:
            cout << "Enter key for binary Search" << endl;
            cin >> value;
            output = arr1.bSearch(value);
            cout << output << endl;
            break;
        case 9:
            cout << "Enter key for Recursive Binary Search" << endl;
            cin >> value;
            output = arr1.rBsearch(value);
            cout << output << endl;
            break;
        case 10:
            cout << "here is your max min sum avg" << endl;
            cout << arr1.max() << endl;
            cout << arr1.min() << endl;
            cout << arr1.sum() << endl;
            cout << arr1.avg() << endl;

            break;
        case 11:
            cout << "your reverse Array is" << endl;
            arr1.reverseNormal();
            arr1.display();
            break;
        case 12:
            cout << "Reversed Array with Swap" << endl;
            arr1.reverseSwap();
            arr1.display();
            break;
        case 13:
            cout << "Insert in Sorted" << endl;
            cin >> value;
            arr1.display();
            break;
        case 14:
            cout << "Array Sorted Status:" << endl;
            output = arr1.isSorted();
            cout << output << endl;

            break;
        case 15:
            cout << "rearranged  array is:" << endl;
            arr1.reArrange();
            arr1.display();
            break;
        case 16:
            cout << "Enter Left Rotation Value" << endl;
            cin >> value;
            arr1.lShiftRotate(value);
            cout
                << "Array rotated in Left for " << value << "times" << endl;
            arr1.display();
            break;
        case 17:
            cout << "Enter Right Rotation Value" << endl;
            cin >> value;
            arr1.rShiftRotate(value);
            cout << "Array rotated in Right for " << value << "times" << endl;
            arr1.display();
            break;
        case 18:
        {
            cout << "Union Array is:" << endl;
            Array arr3 = arr1.Union(arr2);
            arr3.display();
            break;
        }
        case 19:
        {
            cout << "Intersection Array is:" << endl;
            Array arr3 = arr1.Intersection(arr2);
            arr3.display();
            break;
        }

        break;
        case 20:
        {
            cout << "Difference Array is:" << endl;
            Array arr3 = arr1.Difference(arr2);
            arr3.display();
            break;
        }
        /* code */
        break;
        case 21:
        {
            cout << "Merged Array is:" << endl;
            Array arr3 = arr1.Merge(arr2);
            arr3.display();
            break;
        }
        case 0:
            break;
        default:
            cout << "invalid choice" << endl;
            break;
        }

    } while (choice != 0);

    return 0;
}