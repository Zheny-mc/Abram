#include <iostream>
#include <vector>

int main()
{
    std::vector< std::vector<int> > A(5, std::vector<int>(2));

    printf("str = %d\n", A.size());
    printf("col = %d\n", A[0].size());


    return 0;   
}
