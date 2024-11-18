#include <stdio.h>
int main(){
    char studentName[50];
    int rollNo;
    float mathsmarks,sciencemarks,sstmarks,hindimarks,englishmarks,average,totalMarks;
    printf("Enter Student Name : ");
    scanf("%s",studentName);
    printf("Enter Roll Number : ");
    scanf("%d",&rollNo);
    printf("Enter Maths Mark : ");
    scanf("%f",&mathsmarks);
    printf("Enter Science Marks : ");
    scanf("%f",&sciencemarks);
    printf("Enter SST Marks : ");
    scanf("%f",&sstmarks);
    printf("Enter Hindi Marks : ");
    scanf("%f",&hindimarks);
    printf("Enter English Marks : ");
    scanf("%f",&englishmarks);
    totalMarks= mathsmarks+sciencemarks+sstmarks+hindimarks+englishmarks;
    average = (mathsmarks+sciencemarks+sstmarks+hindimarks+englishmarks)/5;
    printf("Total marks obtained : %f\n",totalMarks);
    printf("Average is %f",average);
    return 0;
}