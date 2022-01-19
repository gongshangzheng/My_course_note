//printN
#include <iostream>
void printN(int N)
{
    for(int i=1;i<=N;i++)
        printf("%d\n",i);
}

int main()
{
    int N;
    std::cin>>N;
    printN(N);
    system("pause");
    return 0;
}