//
// Created by Gabriel Spranger Rojas on 2019-05-17.
//

#include "QuickSort.h"
#include "catch.hpp"

const int ARRAY_LENGTH = 4;
const int FIRST_INDEX = 0;
const int LAST_INDEX = ARRAY_LENGTH-1;

SCENARIO("Test para combrobar la función quicksort().") {
    GIVEN("2 arrays y 2 vectores.") {
        WHEN("Todos están desordenados.") {
            THEN("Comprobar que con quicksort() que todos se ordenan de menor a mayor.") {

                /// PROBANDO CON ARRAYS

                char arr[ARRAY_LENGTH] = {'b', 'd', 'a', 'c'};

                int arr1[ARRAY_LENGTH] = {4, 3, 2, 1};

                QS::quickSort(arr, FIRST_INDEX, LAST_INDEX);
                QS::quickSort(arr1, FIRST_INDEX, LAST_INDEX);

                REQUIRE(arr[0] == 'a');
                REQUIRE(arr[1] == 'b');
                REQUIRE(arr[2] == 'c');
                REQUIRE(arr[3] == 'd');

                REQUIRE(arr1[0] == 1);
                REQUIRE(arr1[1] == 2);
                REQUIRE(arr1[2] == 3);
                REQUIRE(arr1[3] == 4);

                /// PROBANDO CON VECTORES

                vector<string> list1 = {"e", "d", "c", "b", "a"};
                vector<int> list2 = {1000, 6, 9, 343, 999};

                // 0 y 4 son el primer y último índice, respectivamente
                QS::quickSort(list1, 0, 4);
                QS::quickSort(list2, 0, 4);

                REQUIRE(list1[0] == "a");
                REQUIRE(list1[1] == "b");
                REQUIRE(list1[2] == "c");
                REQUIRE(list1[3] == "d");
                REQUIRE(list1[4] == "e");

                REQUIRE(list2[0] == 6);
                REQUIRE(list2[1] == 9);
                REQUIRE(list2[2] == 343);
                REQUIRE(list2[3] == 999);
                REQUIRE(list2[4] == 1000);

            }
        }
    }
}
