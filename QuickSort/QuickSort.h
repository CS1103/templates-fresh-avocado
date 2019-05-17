//
// Created by Gabriel Spranger Rojas on 2019-05-17.
//

#ifndef QUICKSORT_QUICKSORT_H
#define QUICKSORT_QUICKSORT_H

#include <vector>

using namespace std;

namespace QS {

    template <typename T>
    void quickSort(T arr[], int left, int right) {

        int i = left, j = right;
        T tmp;
        T pivot = arr[(left + right) / 2];

        while (i <= j) {
            while (arr[i] < pivot)
                i++;
            while (arr[j] > pivot)
                j--;
            if (i <= j) {
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
                i++;
                j--;
            }

        }

        if (left < j)
            quickSort(arr, left, j);
        if (i < right)
            quickSort(arr, i, right);
    }

    template <typename T>
    void quickSort(vector<T>& list, int left, int right) {

        int i = left, j = right;
        T tmp;
        T pivot = list[(left + right) / 2];

        while (i <= j) {
            while (list[i] < pivot)
                i++;
            while (list[j] > pivot)
                j--;
            if (i <= j) {
                tmp = list[i];
                list[i] = list[j];
                list[j] = tmp;
                i++;
                j--;
            }

        }

        if (left < j)
            quickSort(list, left, j);
        if (i < right)
            quickSort(list, i, right);
    }

}

#endif //QUICKSORT_QUICKSORT_H
