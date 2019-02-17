#include <stdio.h>
#include <stdlib.h>

#define COUNT 4

typedef struct {
    int a;
    int c;
    double b;
    long long int d;
}MYSTRUCT;

typedef struct {
    int ***ippp;
    int **ipp;
    int *ip;
    int i;
}myptr;



int ptr_to_Structs()
{
    int i;
    MYSTRUCT *p, *q;
    void* v;
   
    printf("size of MYSTRUCT = %d\n", sizeof(MYSTRUCT));
   
//   p = (MYSTRUCT*)calloc(COUNT, 24);  // Gresit!, e mai safe cu sizeof
     p = (MYSTRUCT*)calloc(COUNT, sizeof(MYSTRUCT));   
   
    for(i = 0; i < COUNT; i++)
    {
        p[i].a = i;
        p[i].b = 5 * i;
        p[i].c = 3 + i;
        p[i].d = 20 + i;
    }
     
    q = p;
    printf("[0] values: \na is %D\nb is %F\nc is %d\nd is %lld\n ", q->a, q->b, q->c, q->d);
    printf("--addresses: \na is %p\nb is %p\nc is %p\nd is %p\n ", &q->a, &q->b, &q->c, &q->d);

    printf("\n");
    q = p + 3;
    printf("[3] values: \na is %D\nb is %F\nc is %d\nd is %lld\n ", q->a, q->b, q->c, q->d);
    printf("--addresses: \na is %p\nb is %p\nc is %p\nd is %p\n ", &q->a, &q->b, &q->c, &q->d);
     
    printf("\n");
    v = p + 3;
    printf("Structure at index 3\n in 4 byte format\n");
    for(i = 0; i < sizeof(MYSTRUCT)/ sizeof(int); i++) 
        printf("v[%d] = %d\n", i, ((int*)v)[i]);
    
    printf("Structure at index 3\n in 8 byte format\n");
    printf("v[0] = %d\n", ((int*)v)[0]);
    printf("v[1] = %d\n", ((int*)v)[1]);
    printf("v[2] = %f\n", ((double*)v)[2]);
    printf("v[3] = %lld\n", (( long long int*)v)[3]);
    
    return 0;
}

int ptr_to_ptr() 
{
    myptr* ptr;
    
    ptr = (myptr*)calloc(1,sizeof(myptr));
    
    ptr->i = 255;
    ptr->ip = &ptr->i;
    ptr->ipp = &ptr->ip;
    ptr->ippp = &ptr->ipp;
    
    return 0;
}