#include <iostream>

int main(int argc,char **argv)
{
    int i;
    int j;

    i = 1;
    if(argc == 1)
        std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    while(i < argc)
    {
        j = 0;
        while(argv[i][j])
        {
            if(argv[i][j] >= 'a' && argv[i][j] <= 'z')
                std::cout.put(argv[i][j] - ('a' - 'A'));
            else
                std::cout.put(argv[i][j]);
            j++;
        }
        i++;
    }
    std::cout<<std::endl;
    return (0);
}