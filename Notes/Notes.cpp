#include <iostream>
int main()
{
    int sum = 0, value = 0;
    // read until end-of-file, calculating a running total of all values read
    while (std::cin >> value)
        sum += value; // equivalent to sum = sum + value
    std::cout << "Sum is: " << sum << std::endl;
    return 0;
}





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