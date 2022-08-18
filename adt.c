#include<stdio.h>
struct adt
{
    char* stu_name;
    int roll_no;
    int batch;
};
struct distance
{
    int speed;
    int time;
    int dist;
}s,t,d;
int main(){
struct adt student;
student.stu_name="ISHA";
student.roll_no=2;
student.batch=14;
printf("\nstudent name is : %s ",student.stu_name);
printf("\nstudent roll number is : %d ",student.roll_no);
printf("\nbatch of student is : %d",student.batch);
printf("ENTER THE VALUE OF Speed : \n");
scanf("%d",&s.speed);
printf("ENTER THE VALUE OF Time : \n");
scanf("%d,&t.time");
d.dist=(s.speed*t.time);
printf("the distance is : %d\n",d.dist);
return 1;
}



