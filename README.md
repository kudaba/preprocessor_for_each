# Preprocessor For Each

These macros present a way to apply preprocessor actions in a for loop fashion. There are many variations to allow for 1-6 elements and 0-6 static arguments, and calling them with or without the loop indexer.

Included is the Text Transform file used to generate the file if you want to tweak anything.

This was inspired by the following sources:

https://stackoverflow.com/questions/36197213/for-each-macro-with-two-or-more-params-in-call-macro
https://stackoverflow.com/questions/6707148/foreach-macro-on-macros-arguments
https://github.com/yabadabu/for_each

# Example
```cpp
// Outputs:
// 0 1 2
// 1 3 4
// 2 5 6
// 3 7 8
#define PRINT_COUNT(i, x, y) printf("%d %d %d\n", i, x, y);
	FOR_EACH_2_COUNT(PRINT_COUNT, 1, 2, 3, 4, 5, 6, 7, 8);

// Outputs:
// 10 20 30, 1 2 3
// 10 20 30, 4 5 6
// 10 20 30, 7 8 9
#define PRINT_COUNT2(a1, a2, a3, x, y, z) printf("%d %d %d, %d %d %d\n", a1, a2, a3, x, y, z);
	FOR_EACH_3ARGS_3(PRINT_COUNT2, 10, 20, 30, 1, 2, 3, 4, 5, 6, 7, 8, 9);
```