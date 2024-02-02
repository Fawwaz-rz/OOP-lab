//#include<iostream>
//using namespace std;
//int main()
//{
////a
// //   int *number;
//  //cout << number << endl;
//  // we haven't initialised as well as we have not given the address to the pointer to which it points
//  //correction 
//  //int* number,num=0;//if we initializes pointer with 0 it gives 0000000's as address
//  //number = &num;
//  //cout << number << endl;
////-----------------------------------------------------------------------------------------
//
////b) 
////double* realPtr=0;
//// // long *integerPtr;
//// //correction
//// double* integerPtr;
////  integerPtr = realPtr;//this is wrong datatype must be same and we have to initialize it
////  //or assign a address of some num or other
//
//
////---------------------------------------------------------------------------------
// // c) 
//    //int * x, y=0;
//    //x = &y;
//    ////we have to assign address and initialize it as well
//
//
////---------------------------------------------------
//
////  // d)
//    char s[] = "this is a character array";
//    int j = 0;
//    for (; *(s+j) != '\0'; j++)//to print it we have to jump the address so we use these operators as follows:
//    {
//        cout << *(s+j) << ' ';
//        
//    }
//
////----------------------------------------------------------------------------
////e)
////    short *numPtr,result;
////    void *genericPtr = numPtr;
////    short* generiPtr=0;
////result = *generiPtr + 7;
//////error is that void pointer point any dataype and when we try to equal to other datstype than it is of no datatype so any datatype could not point it
//// 
////------------------------------------------------------
//
////f)
////    double x = 19.34;
////double *xPtr = &x;//we have to write sterrick only bcz variable doesn't holds the address
////cout << xPtr << endl;
//
//}