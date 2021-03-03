#include <iostream>

template < typename T >
void my_swap(T& first, T& second) 
{
    T temp(first); 
    first = second;
    second = temp;
}
    
template < class ElementType > 
void bubbleSort(ElementType* arr, size_t arrSize)
{
    for (size_t i = 0; i < arrSize - 1; ++i)
        for (size_t j = 0; j < arrSize - 1; ++j)
            if (arr[j + 1] < arr[j])
                my_swap(arr[j], arr[j + 1]);
}

template < typename ElementType >
void out_array(const ElementType* arr, size_t arrSize)
{
    for (size_t i = 0; i < arrSize; ++i)
        std::cout << arr[i] << ' ';
    std::cout << std::endl;
}


int main()
{
    const size_t n = 5;
    int arr1[n] = { 10 , 5 , 7 , 3 , 4 };
    double arr2[n] = { 7.62 , 5.56 , 38.0 , 56.0 , 9.0 };
    std::cout << "Source arrays:\n";
    out_array(arr1, n);
    out_array(arr2, n);

    bubbleSort(arr1, n);
    bubbleSort(arr2, n);

    std::cout << "Sorted arrays:\n";
    out_array(arr1, n);
    out_array(arr2, n);
}