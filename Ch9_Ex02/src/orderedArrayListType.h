#ifndef H_OrderedListType
#define H_OrderedListType

//*************************************************************
// Author: D.S. Malik
//
// This class specifies the operations to implement an ordered
// list as an array.
// Modified by Charles Carper
//*************************************************************

#include <iostream>
#include "arrayListType.h"

using namespace std;

template<class elemType>
class orderedArrayListType: public arrayListType<elemType>
{
public:
	void insertOrd(const elemType&);
	int binarySearch(const elemType& item) const;
	orderedArrayListType(int size = 100);
	int recBinarySearchImp(const elemType& item) const;

private:
	int recBinarySearch(const elemType& item, int first, int last) const;

protected:
    elemType *list;  //array to hold the list elements
    int length;      //to store the arrayListType<elemType>::length of the list
    int maxSize;     //to store the maximum size of the list
};

template <class elemType>
int orderedArrayListType<elemType>::recBinarySearchImp(const elemType& item)  const
{
	return recBinarySearch(item, 0, arrayListType<elemType>::length);
}

template <class elemType>
int orderedArrayListType<elemType>::recBinarySearch(const elemType& item,
										     int first, int last)  const
{
	int mid;

	if (first <= last)
			{
				if (arrayListType<elemType>::list[first] == item)
					return first;
				else
					return recBinarySearch(item, first+1, last);
			}
			else
				return -1;

}

template <class elemType>
void orderedArrayListType<elemType>::insertOrd(const elemType& item)
{
    int first = 0;
    int last = arrayListType<elemType>::length - 1;
    int mid;

    bool found = false;

    if (arrayListType<elemType>::length == 0)   //the list is empty
    {
        arrayListType<elemType>::list[0] = item;
    }
    else if (arrayListType<elemType>::length == arrayListType<elemType>::maxSize)
        cerr << "Cannot insert into a full list." << endl;
    else
    {
        while (first <= last && !found)
        {
            mid = (first + last) / 2;

            if (arrayListType<elemType>::list[mid] == item)
                found = true;
            else if (arrayListType<elemType>::list[mid] > item)
                last = mid - 1;
            else
                first = mid + 1;
        }//end while

        if (found)
            cerr << "The insert item is already in the list. "
                 << "Duplicates are not allowed." << endl;
        else
        {
            if (arrayListType<elemType>::list[mid] < item)
                mid++;

            arrayListType<elemType>::insertAt(mid, item);
        }
    }
}//end insertOrd

template<class elemType>
int orderedArrayListType<elemType>::binarySearch
                                       (const elemType& item) const
{
    int first = 0;
    int last = arrayListType<elemType>::length - 1;
    int mid;

    bool found = false;

    while (first <= last && !found)
    {
        mid = (first + last) / 2;

        if (arrayListType<elemType>::list[mid] == item)
            found = true;
        else if (arrayListType<elemType>::list[mid] > item)
            last = mid - 1;
        else
            first = mid + 1;
    }

    if (found)
        return mid;


    else return -1;
}//end binarySearch

template<class elemType>
orderedArrayListType<elemType>::orderedArrayListType(int size)
   : arrayListType<elemType>(size)
{
	maxSize = size;
	length = 0;
	list = new elemType[maxSize];
	for (int i = 0; i < maxSize; i++)
		list[i] = 0;
}

#endif
