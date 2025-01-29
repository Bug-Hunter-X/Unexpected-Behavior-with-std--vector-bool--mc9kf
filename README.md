# Unexpected Behavior with std::vector<bool>
This example demonstrates a potential issue with the `std::vector<bool>` specialization in C++.  While designed for space optimization, it deviates from the typical `std::vector` behavior, potentially causing unexpected results when using boolean operators or accessing elements directly.

## Issue
The `std::vector<bool>` specialization doesn't store booleans as individual bits; instead, it often uses bit manipulation techniques to compact storage. This can lead to unexpected behavior when using array indexing or directly comparing elements with boolean operators.