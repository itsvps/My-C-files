// Const var means that the variable cannot be assigned a new value.
//But the value can be changed by other code or pointer.



int main(void)
{
    const volatile int local = 10;
    int *ptr = (int*) &local; 
    printf("Initial value of local : %d \n", local); 
    *ptr = 100; 
    printf("Modified value of local: %d \n", local); 
    return 0;
}

// output:
//  Initial value of local : 10 
//  Modified value of local: 100 