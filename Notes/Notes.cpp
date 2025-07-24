#include <iostream>
int main()
{
// currVal is the number we’re counting; we’ll read new values into val
int currVal = 0, val = 0;
// read first number and ensure that we have data to process
if (std::cin >> currVal) {
int cnt = 1; // store the count for the current value we’re processing
while (std::cin >> val) { // read the remaining numbers
if (val == currVal) // if the values are the same
++cnt; // add 1 to cnt
else { // otherwise, print the count for the previous value
std::cout << currVal << " occurs "
<< cnt << " times" << std::endl;
currVal = val; // remember the new value
cnt = 1; // reset the counter
}
} // while loop ends here
// remember to print the count for the last value in the file
std::cout << currVal << " occurs "
<< cnt << " times" << std::endl;
} // outermost if statement ends here
return 0;
}




// #include <iostream>
// int main()
// {
//     int sum = 0, value = 0;
//     // read until end-of-file, calculating a running total of all values read
//     while (std::cin >> value)
//         sum += value; // equivalent to sum = sum + value
//     std::cout << "Sum is: " << sum << std::endl;
//     return 0;
// }

// #include <iostream>

// int main()
// {
//     std::cout << "/*";
//     std::cout << "*/";
//     std::cout << /* "*/" */";
//     std::cout << /* "*/" /* "/*" */;
//     return 0;
// }


// tells compiler to include the contents of iostream header file
// #include <iostream>

// int main()
// {
//     std::cout << "Enter two numbers: " << std::endl;
//     int v1 = 0, v2 = 0;
//     std::cin >> v1 >> v2;
//     std::cout << "The sum of " << v1 << " and " << v2 << " is " << v1 + v2 << std::endl;
//     return 0;
// }