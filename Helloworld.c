#include<stdio.h>
#include<string.h>
typedef struct students{
    char name[100];
    int roll;
    float cgpa;
} stu;
typedef struct teachers{
    char name[100];
    int class_no;
} tea;
typedef struct staffs{
    char name[100];
    int class_no; 
} sta;
void studetails(stu class[]);
void teadetails(tea teach[]);
int main(){
    stu class1[100];
    printf("Enter the details of 1st class students.\n ");
    studetails(class1);
    stu class2[100];
    printf("Enter the details of 2nd class students.");
    studetails(class2);
    tea teach[100];
    printf("Enter the details of teachers.\n");
    teadetails(teach);
    return 0;
}
void studetails(stu class[]){
    int i;
    for(i=0;i<5;i++){
        printf("Enter the name of %d student :",i+1);
            scanf("%s",&class[i].name);
        printf("Enter the roll num of %d student :",i+1);
            scanf("%d",&class[i].roll);
        printf("Enter the CGPA of %d student :",i+1);
            scanf("%f",&class[i].cgpa);
        
    }
    
}
void teadetails(tea teach[]){
    int i;
    for(i=0;i<5;i++){
        printf("Enter the name of %d teacher.",i+1);
        scanf("%s",&teach[i].name);
        printf("Enter the class of %d teacher.",i+1);
        scanf("%d",&teach[i].class_no);
    }
}
