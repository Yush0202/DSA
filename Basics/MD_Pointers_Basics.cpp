#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
//int main()
//{
//    int a=10;
//    int *p;
//    p=&a;
//    cout<<a<<endl;
//    //printf("using pointer %d\n",*p);
//    //printf("using pointer %d %d",p,&a);
//    printf("%d",*p);
//    return 0;
//}


//pointer to array
//int main()
//{
//    int A[5]={2,4,6,8,10};
//    int *p;
//    p=A;//we don't have to use "&" when we give array name
        //to a pointer because name of array A is itself 
        //starting address of the array
        //if we have to give address then we can use
        //p=&A[0];
        //don't write p=&A while using pointer to array it 
        //will give invalid syntax
    //access all elements using pointers
    //for(int i=0;i<5;i++){
    //    cout<<A[i]<<endl;
    //}
    //if we use p=&A[0] then we'll get output by using:
    //for(int i=0;i<5;i++){
    //    cout<<*(p+i)<<endl;
    //}

//    return 0;
     
//}



//create an array in heap using C
//after the work is done we release the memory using "free"
//int main()
//{
//    int *p;//p creating in stack
//    p=(int *)malloc(5*sizeof(int));//array of 5 integers
//                                  //created in heap
//    p[0]=10;p[1]=15;p[2]=5;p[3]=21;p[4]=32;
//
//    for(int i=0;i<5;i++){
//        cout<<p[i]<<endl;
//    }
//    free(p);
//}

//create an array in heap using C++
//in C++ we dynamically created memory for an array in heap
//using new. When we have finished using it we must also
//delete that memory usinf "delete"
//this is called deallocating the memory which is allocated 
//in heap . In small programs if we dont use delete or free
//then its not a big problem. In big projects when memory
//is not required , we must delete the memory
//int main()
//{
//    int *p;
//    p=new int[5];
//    p[0]=1;p[1]=2;p[2]=3;p[3]=4;p[4]=5;
//    for(int i=0;i<5;i++){
//        cout<<p[i]<<endl;
//    }
//    delete[]p;
//    return 0;
//}



//whatever the data type of pointer is
//pointer takes same amount of memory 
//size of a pointer is independent of its data type
//int main()
//{
//    int *p1;
//    char *p2;
//    float *p3;
//    double *p4;
//    struct Rectangle *p5;
//    cout<<sizeof(p1)<<endl;
//    cout<<sizeof(p2)<<endl;
//    cout<<sizeof(p3)<<endl;
//    cout<<sizeof(p4)<<endl;
//    cout<<sizeof(p5)<<endl;
//}




