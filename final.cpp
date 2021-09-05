///ID:16101027///Md.Ashiqur Rahman
#include<bits/stdc++.h>

struct student_database{

        char student_name[100];
        char student_id[100];
        char student_gender[100];
        int student_level;
        int student_term;
        char student_bloodgroup[100];
        int student_age;
        char student_department[100];
        float student_cgpa;
        char student_email[100];
        char student_address[100];
        char student_cellno[100];
};

int main()
{
    int n=200;
    student_database s[n];
    int i;

    FILE *fr;
    fr=fopen("student_db.txt","r");

    for(i=0;i<n;i++)
    {
        fscanf(fr,"%[^:]:%[^:]:%[^:]:%d:%d:%[^:]:%d:%[^:]:%f:%[^:]:%[^:]:%s ",&s[i].student_name,&s[i].student_id,&s[i].student_gender,&s[i].student_level,&s[i].student_term,&s[i].student_bloodgroup,&s[i].student_age,&s[i].student_department,&s[i].student_cgpa,&s[i].student_email,&s[i].student_address,&s[i].student_cellno);
    }
/*
    for(i=0;i<n;i++)
    {
        printf("\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
        printf("\t\tName of the Student: ");
        puts(s[i].student_name);
        printf("\t\tID No: ");
        puts(s[i].student_id);
        printf("\t\tSEX: ");
        puts(s[i].student_gender);
        printf("\t\tLEVEL: %d\n",s[i].student_level);
        printf("\t\tTERM: %d\n",s[i].student_term);
        printf("\t\tBlood Group: ");
        puts(s[i].student_bloodgroup);
        printf("\t\tAge: %d\n",s[i].student_age);
        printf("\t\tDepartment: ");
        puts(s[i].student_department);
        printf("\t\tCGPA: %0.2f\n",s[i].student_cgpa);
        printf("\t\tMail ID: ");
        puts(s[i].student_email);
        printf("\t\tMailing Address: ");
        puts(s[i].student_address);
        printf("\t\tCell No:");
        puts(s[i].student_cellno);
        //printf("\n\n");
        printf("\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");
    }
    */

    while(1)
    {
    printf("    ==       == =======  ==       ======== ========  ==       == =======\n");
    printf("    ==       == =======  ==       ======== ===  ===  == *   * == =======\n");
    printf("    ==       == ==       ==       ==    == ==    ==  ==  * *  == ==      \n");
    printf("    ==       == =====    ==       ==    == ==    ==  ==   *   == =====   \n");
    printf("    ==   *   == =====    ==       ==       ==    ==  ==       == =====   \n");
    printf("    ==  * *  == ==       ==       ==       ==    ==  ==       == ==      \n");
    printf("    == *   * == =======  ======== ======== ===  ===  ==       == =======\n");
    printf("    ==       == =======  ======== ======== ========  ==       == =======\n\n\n");

    printf("======== ========   ==    == ======== =======   ======== ========   ========\n");
    printf("======== ===  ===   ==    == ===  === ==   ==   ======== =========  =========\n");
    printf("   ==    ==    ==   ==    == ==    == ==    =   =        ==     === ==      =\n");
    printf("   ==    ==    ==   ==    == ==    == ==   ==   ======== ==      == == =====\n");
    printf("   ==    ==    ==   ==    == ======== =======   ======== ==      == == =====\n");
    printf("   ==    ==    ==   ==    == ==    == ==               = ==     === ==      =\n");
    printf("   ==    ===  ===   ===  === ==    == ==        ======== =========  =========\n");
    printf("   ==    ========   ======== ==    == ==        ======== ========   ========\n");
    printf(":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
    printf(":::::\t\t\tStudent DataBase                                :::::\n");
    printf(":::::\t\tPress 1 for Same Blood Group Students                   :::::\n");
    printf(":::::\t\tPress 2 for Student of Same Lavel Same Term             :::::\n");
    printf(":::::\t\tPress 3 for Highest CGPA Of A Department                :::::\n");
    printf(":::::\t\tPress 4 for Lowest CGPA Of A Department                 :::::\n");
    printf(":::::\t\tPress 5 for Count Male Student Of A Department          :::::\n");
    printf(":::::\t\tPress 6 for Count Female Students Of A department       :::::\n");
    printf(":::::\t\tPress 7 for Age Between 20-23                           :::::\n");
    printf(":::::\t\tPress 8 for Change Information Of A Student             :::::\n");
    printf(":::::\t\tPress 9 for Name Length Between 10 - 12                 :::::\n");
    printf(":::::\t\tPress 10 for Count Total Student Of A Department        :::::\n");
    printf(":::::\t\tPress 11 for Search Student Information Using ID        :::::\n");
    printf(":::::\t\tPress 12 for the Student Who Got Scholarship            :::::\n");
    printf(":::::\t\tPress 13 for the Backlog Student                        :::::\n");
    printf(":::::\t\tPress 14 for Exit                                       :::::\n");
    printf(":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");
    int a;
    printf("\t\tYour Choice :");
    scanf("%d",&a);

    if(a==1)
    {
        system("cls");
        char a[100];
        int counter=0;
        getchar();
        printf("    ====================================================================\n");
        printf("\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
        printf("\t\tBlood Group: ");
        scanf("%s",&a);
        printf("\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");

        for(i=0;i<n;i++)
        {
            if(strcmp(a,s[i].student_bloodgroup)==0)
            {
                counter++;
                printf("\t\tName of the Student: ");
                puts(s[i].student_name);
                printf("\t\tID of the Student: ");
                puts(s[i].student_id);
                printf("\t\tDepartment: ");
                puts(s[i].student_department);
                printf("\n");
            }
        }
        printf("\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
        printf("\t\tTotal Found : %d\n",counter);
        printf("\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
         printf("    ====================================================================\n\n");
    }

    else if(a==2)
    {
        system("cls");
        int c,d,counter=0;
        printf("    ====================================================================\n");
        printf("\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
        printf("\t\tLevel :");
        scanf("%d",&c);
        printf("\t\tTerm :");
        scanf("%d",&d);
        printf("\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");

        for(i=0;i<n;i++)
        {
            if(s[i].student_level==c && s[i].student_term==d)
            {
                counter++;
                printf("\t\tName of the Student: ");
                puts(s[i].student_name);
                printf("\t\tID of the Student: ");
                puts(s[i].student_id);
                printf("\t\tDepartment: ");
                puts(s[i].student_department);
                printf("\n");
            }
        }
        printf("\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
        printf("\t\tTotal Students of Level %d Term %d are: %d\n",c,d,counter);
        printf("\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
        printf("    ====================================================================\n\n");
    }

   else  if(a==3)
    {
        system("cls");
        char a[100];
        float max_cgpa=s[0].student_cgpa;
        int index=0;
        getchar();
        printf("    ====================================================================\n");
        printf("\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
        printf("\t\tDepartment: ");
        scanf("%s",&a);
        printf("\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
        for(i=0;i<n;i++)
        {
            if(strcmp(a,s[i].student_department)==0)
            {
                max_cgpa=s[i].student_cgpa;
                index=0;
            }
        }

        for(i=0;i<n;i++)
        {
            if(strcmp(a,s[i].student_department)==0 && s[i].student_cgpa>max_cgpa)
            {
                max_cgpa=s[i].student_cgpa;
                index=i;
            }
        }
        printf("\t\tStudent of Highest CGPA of Entered Department: \n");
        printf("\t\tName of The Student: ");
        puts(s[index].student_name);
        printf("\t\tID No: ");
        puts(s[index].student_id);
        printf("\t\tCGPA is: %0.2f",s[index].student_cgpa);
        printf("\n\n");
        printf("\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
         printf("    ====================================================================\n\n");
    }

    else if(a==4)
    {
        system("cls");
        char a[100];
        float min_cgpa=s[0].student_cgpa;
        int index=0;
        getchar();
         printf("    ====================================================================\n");
        printf("\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
        printf("\t\tDepartment: ");
        scanf("%s",&a);
        printf("\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
        for(i=0;i<n;i++)
        {
            if(strcmp(a,s[i].student_department)==0)
            {
                min_cgpa=s[i].student_cgpa;
                index=0;
            }
        }

        for(i=0;i<n;i++)
        {
            if(strcmp(a,s[i].student_department)==0 && s[i].student_cgpa<min_cgpa)
            {
                min_cgpa=s[i].student_cgpa;
                index=i;
            }
        }
        printf("\t\tStudent of Lowest CGPA of Entered Department: \n");
        printf("\t\tName of The Student: ");
        puts(s[index].student_name);
        printf("\t\tID No: ");
        puts(s[index].student_id);
        printf("\t\tCGPA is: %0.2f",s[index].student_cgpa);
        printf("\n\n");
        printf("\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
        printf("    ====================================================================\n\n");
        }
    else if(a==5)
    {
        system("cls");
        char a[100];
         printf("    ====================================================================\n");
        printf("\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
        printf("\t\tDepartment: ");
        scanf("%s",&a);
        printf("\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
        int counter=0;

        for(i=0;i<n;i++)
        {
            if(strcmp(a,s[i].student_department)==0 && strcmp("Male",s[i].student_gender)==0)
            {
                counter++;
                printf("\t\tName of the Student: ");
                puts(s[i].student_name);
                printf("\t\tID of the Student: ");
                puts(s[i].student_id);
                printf("\n");
            }
        }
        printf("\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
        printf("\t\tTotal Male Of This Department : %d\n",counter);
        printf("\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
        printf("    ====================================================================\n\n");
    }

    else if(a==6)
    {
        system("cls");
        char a[100];
        printf("    ====================================================================\n");
        printf("\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
        printf("\t\tDepartment: ");
        scanf("%s",&a);
        printf("\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
        int counter=0;

        for(i=0;i<n;i++)
        {
            if(strcmp(a,s[i].student_department)==0 && strcmp("Female",s[i].student_gender)==0)
            {
                counter++;
                printf("\t\tName of the Student: ");
                puts(s[i].student_name);
                printf("\t\tID of the Student: ");
                puts(s[i].student_id);
                printf("\n");
            }
        }
        printf("\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
        printf("\t\tTotal Female Of This Department : %d\n",counter);
        printf("\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
        printf("    ====================================================================\n\n");
    }

    else if(a==7)
    {
        system("cls");
        printf("    ====================================================================\n");
        getchar();
        for(i=0;i<n;i++)
        {
            if(s[i].student_age>20 && s[i].student_age<23)
            {
                printf("\t\tName of The Student: ");
                puts(s[i].student_name);
                printf("\t\tID No: ");
                puts(s[i].student_id);
                printf("\t\tAge is: ");
                printf("%d",s[i].student_age);
                printf("\n");
                printf("    ====================================================================\n\n");
            }
        }
    }
    else if(a==8)
    {
        system("cls");
        char id[100];
        int flag=0;
        printf("\t\tStudent ID : ");
        getchar();
        gets(id);
        for(int i=0;i<n;i++)
        {
            if(strcmp(id,s[i].student_id)==0)
            {
                system("cls");
                flag=1;
                printf("\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
                printf("\t\tName of the Student: ");
                puts(s[i].student_name);
                printf("\t\tID No: ");
                puts(s[i].student_id);
                printf("\t\tSEX: ");
                puts(s[i].student_gender);
                printf("\t\tLEVEL: %d\n",s[i].student_level);
                printf("\t\tTERM: %d\n",s[i].student_term);
                printf("\t\tBlood Group: ");
                puts(s[i].student_bloodgroup);
                printf("\t\tAge: %d\n",s[i].student_age);
                printf("\t\tDepartment: ");
                puts(s[i].student_department);
                printf("\t\tCGPA: %0.2f\n",s[i].student_cgpa);
                printf("\t\tMail ID: ");
                puts(s[i].student_email);
                printf("\t\tMailing Address: ");
                puts(s[i].student_address);
                printf("\t\tCell No:");
                puts(s[i].student_cellno);
                //printf("\n\n");
                printf("\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");

               printf("\t\t:::::::::::::::::::::::::::::::::::::::::");
                printf("\n\t\t:::\tClick 1 for Change Name       :::");
                printf("\n\t\t:::\tClick 2 for change Term       :::");
                printf("\n\t\t:::\tClick 3 for Change Level      :::");
                printf("\n\t\t:::\tClick 4 for Change CGPA       :::");
                printf("\n\t\t:::\tClick 5 for Change Address    :::");
                printf("\n\t\t:::\tClick 6 for Change Contact No :::");
                printf("\n\t\t:::\tClick 7 for Exit              :::");
                printf("\n\t\t:::::::::::::::::::::::::::::::::::::::::\n\n");
                int x;
                printf("\t\tYour Choice :");
                scanf("%d",&x);
                if(x==1)
                {
                    char name[100];
                    getchar();
                    printf("\n\n\t\tNew Name : ");
                    gets(name);
                    strcpy(s[i].student_name,name);
                    printf("\n\n\t\tNew Name : ");
                    puts(s[i].student_name);
                }
                else if(x==2)
                {
                    int d;
                    printf("\n\n\t\tPrevious Term : %d\n\n",s[i].student_term);
                    printf("\t\tNew Term :");
                    scanf("%d",&d);
                    s[i].student_term=d;
                    printf("\n\n\t\tNew Term : %d\n\n",s[i].student_term);
                }
                else if(x==3)
                {
                    int d;
                    printf("\n\n\t\tPrevious Level : %d\n\n",s[i].student_level);
                    printf("\t\tNew Level :");
                    scanf("%d",&d);
                    s[i].student_level=d;
                    printf("\n\n\t\tNew Level : %d\n\n",s[i].student_level);
                }
                else if(x==4)
                {
                    float c;
                    printf("\n\n\t\tPrevious CGPA : %0.2f\n\n",s[i].student_cgpa);
                    printf("\t\tNew CGPA :");
                    scanf("%f",&c);
                    s[i].student_cgpa=c;
                    printf("\n\t\tNew CGPA : %d\n\n",s[i].student_cgpa);
                }

                else if(x==5)
                {
                    char add[100];
                    getchar();
                    printf("\n\n\t\tNew Address : ");
                    gets(add);
                    strcpy(s[i].student_address,add);
                    printf("\n\n\t\tNew Address : ");
                    puts(s[i].student_address);
                    printf("\n\n");
                }
                else if(x==6)
                {
                    char cell[100];
                    getchar();
                    printf("\n\n\t\tNew Contact : ");
                    gets(cell);
                    strcpy(s[i].student_cellno,cell);
                    printf("\n\n\t\tNew Contact : ");
                    puts(s[i].student_cellno);
                    printf("\n\n");
                }
                else if(x==7)
                {
                    printf("\t\t\tYou Press For Exit\n");
                    printf("\t\t\tThank You !!\n\n");
                    break;
                }

                else
                {
                    printf("\n\n\t\tCheck Your Input\n\n");
                }
            }
        }

    }

    else if(a==9)
    {
        system("cls");
        int r;
        printf("    ====================================================================\n");
        printf("\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
        printf("\t\tName of the students Whose name Length between 10-12: \n\n");
        printf("\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
        for(i=0;i<n;i++)
        {
            r=strlen(s[i].student_name);
            if(r>=10 && r<=12)
            {
                printf("\t\tName Of the Student: ");
                puts(s[i].student_name);
                printf("\t\tID No: ");
                puts(s[i].student_id);
                printf("\t\tDepartment: ");
                puts(s[i].student_department);
                printf("\n");
            }
        }
        printf("    ====================================================================\n\n");
    }

    else if(a==10)
    {
        system("cls");
        char a[100];
        printf("    ====================================================================\n");
        printf("\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
        printf("\t\tDepartment: ");
        scanf("%s",&a);
        printf("\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
        int counter=0;
        for(i=0;i<n;i++)
        {
            if(strcmp(a,s[i].student_department)==0)
            {
                counter++;
                printf("\t\tName of The Student: ");
                puts(s[i].student_name);
                printf("\t\tID No: ");
                puts(s[i].student_id);
                printf("\t\tLevel %d & Term %d",s[i].student_level,s[i].student_term);
                printf("\n\n");
            }
        }
        printf("\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
        printf("\t\tTotal Students Of This Department : %d\n",counter);
        printf("\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
        printf("    ====================================================================\n\n");
    }
    else if(a==11)
    {
        system("cls");
        char a[100];
        printf("    ====================================================================\n");
        printf("\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
        printf("\t\tEnter the ID: ");
        scanf("%s",&a);
        int flag=0;
        printf("\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
        for(i=0;i<n;i++)
        {
            if(strcmp(a,s[i].student_id)==0)
            {
                printf("\t\tName Of The Student: ");
                puts(s[i].student_name);
                printf("\t\tID No: ");
                puts(s[i].student_id);
                printf("\t\tSEX: ");
                puts(s[i].student_gender);
                printf("\t\tLevel: ");
                printf("%d\n",s[i].student_level);
                printf("\t\tTerm: ");
                printf("%d\n",s[i].student_term);
                printf("\t\tBlood Group: ");
                puts(s[i].student_bloodgroup);
                printf("\t\tAge: ");
                printf("%d\n",s[i].student_age);
                printf("\t\tDepartment: ");
                puts(s[i].student_department);
                printf("\t\tCGPA: ");
                printf("%0.2f\n",s[i].student_cgpa);
                printf("\t\tMail ID: ");
                puts(s[i].student_email);
                printf("\t\tMailing Address: ");
                puts(s[i].student_address);
                printf("\t\tCell No: ");
                puts(s[i].student_cellno);
                flag=1;
                printf("\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
                printf("    ====================================================================\n\n");
            }
        }
        if(flag==0)
        {
             printf("    ====================================================================\n\n");
            printf("\t\tNo Student Found\n\n");
             printf("    ====================================================================\n\n");
        }
    }
   else if(a==12)
        {
        system("cls");
        int counter=0;
        getchar();
        printf("    ====================================================================\n");
        printf("\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
        printf("\t\tList of the Students Who Got Scholarship\n");
        printf("\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
        for(i=0;i<n;i++)
            {
                if((s[i].student_cgpa>=3.50) && (s[i].student_cgpa<=4.00))
                    {
                        counter++;
                        printf("\t\tName of The Student: ");
                        puts(s[i].student_name);
                        printf("\t\tID No: ");
                        puts(s[i].student_id);
                        printf("\t\tDepartment: ");
                        puts(s[i].student_department);
                        printf("\t\tCGPA is: %0.2f",s[i].student_cgpa);
                        printf("\n\n");
                    }
            }
        printf("\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
        printf("\t\tTotal Students Who Got Scholarship: %d\n",counter);
        printf("\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");
        }
    else if(a==13)
        {
        system("cls");
        int counter=0;
        getchar();
        printf("    ====================================================================\n");
        printf("\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
        printf("\t\tList of the Students Who FAILED\n");
        printf("\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
        for(i=0;i<n;i++)
            {
                if((s[i].student_cgpa>=0.0) && (s[i].student_cgpa<2.5))
                    {
                        counter++;
                        printf("\t\tName of The Student: ");
                        puts(s[i].student_name);
                        printf("\t\tID No: ");
                        puts(s[i].student_id);
                        printf("\t\tDepartment: ");
                        puts(s[i].student_department);
                        printf("\t\tCGPA is: %0.2f",s[i].student_cgpa);
                        printf("\n\n");
                    }
            }
        printf("\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
        printf("\t\tTotal Students Who Does not pass All the Subject: %d\n",counter);
        printf("\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
        printf("    ====================================================================\n\n");
        }
    else if(a==14)
    {
        printf("\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
        printf("\t\t\tYou Press For Exit\n\n");
        printf("\t\t\tThank You !!\n");
        printf("\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
        break;
    }
    else
        {
        system("cls");
        printf("\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
        printf("\t\t\tCheck Your Input\n\n");
        printf("\t\t\tThank You !!\n");
        printf("\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
        }
    }
    return 0;
}
