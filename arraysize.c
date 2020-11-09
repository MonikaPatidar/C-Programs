int main(void)
{
        int* numbers = malloc(sizeof(int));
        int size = 0;
        const int elements = 1000;

        for(int i = 0; i < elements; i++)
        {
                numbers[i] = i;
        }

        size = sizeof(numbers)/sizeof(int);
        printf("size = %d\n", size); //prints 2 instead of 1000
        return 0;
}
