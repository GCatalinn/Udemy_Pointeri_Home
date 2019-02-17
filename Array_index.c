/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#define COUNT 4

int calculate_index() 
{
    int i;
    int a[COUNT];
    double b[COUNT];
    int *pa;
    double *pb;
    
    printf("sizes are: int= %d, double= %d\n", sizeof(int), sizeof(double));
    
    pa = a;
    pb = b;
    
    for(i = 0; i < COUNT; i++) 
    {
        a[i] = i;
        b[i] = (double)i;
    }
    
    printf("address of a is %p; value of pa = %p; value pointed to by pa = %d\n", a, pa, *pa);
    printf("address of b is %p; value of pb = %p; value pointed to by pb = %f\n", b, pb, *pb);
    
    pa += 1;
    pb += 1;
    
    printf("address of a is %p; value of pa = %p; value pointed to by pa = %d\n", a, pa, *pa);
    printf("address of b is %p; value of pb = %p; value pointed to by pb = %f\n", b, pb, *pb);
    
    return 0;
}