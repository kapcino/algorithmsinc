cmake_minimum_required (VERSION 2.6)
PROJECT(algorithms)
ADD_DEFINITIONS("-Wall -Wextra -ansi -pedantic -std=c99 -g")
add_executable (bubblesort bubblesort.c)
add_executable (insertionsort insertionsort.c)
add_executable (linkedlist_sort linkedlist_sort.c)
add_executable (mergesort mergesort.c)
add_executable (quickfind quickfind.c)
add_executable (quicksort quicksort.c)
add_executable (reverselinklist reverselinklist.c)
add_executable (selectionsort selectionsort.c)
add_executable (shellsort shellsort.c)
add_executable (stack_array stack_array.c)
add_executable (quicksort2 quicksort2.c)
