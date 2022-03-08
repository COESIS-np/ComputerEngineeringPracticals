#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
struct student {
  char name[100], result;

  int roll;
  float avg, marks[10];

} s;
void Addrecords();
void Listrecords();

void searchrecords();
void Listoftopper();
char filename[30];
void main(void) {
  char choice;
  printf("Enter file name:");
  scanf("%s", filename);
  while (1) {
    printf("\nEnter:");
    printf("A or a:For adding new records,\nL or l:For displaying a list of "
           "all the records "
           "who are pass and fail");
    printf("\nS or s: For searching a record \n E or e:For exit \n H h for "
           "listing the name of "
           "student who score the highest mark and lowest mark\n\n\n\n");
    fflush(stdin);
    choice = getche();
    switch (choice) {
    case 'A':
    case 'a':
      Addrecords();
      break;
    case 'L':
    case 'l':
      Listrecords();
      break;
    case 'H':
    case 'h':
      Listoftopper();
      break;
    case 'S':
    case 's':
      searchrecords();
      break;
    case 'E':
    case 'e':
      exit(0);
      break;
    default:
      printf("Enter A,a,l,M,m,D,d,E or e");
    }
  }
}

void Addrecords() {
  FILE *f;
  char test;
  if ((f = fopen(filename, "ab+")) == NULL) {
    printf("Can not open the file:");
    getch();
    exit(0);
  }
  while (1) {
    int i;
    float sum = 0;
    printf("\nEnter name,roll");
    scanf("%s %d", s.name, &s.roll);
    puts("Enter marks in five subject");
    for (i = 0; i < 5; i++) {
      scanf(" %2f", &s.marks[i]);
      sum += s.marks[i];
    }
    s.avg = sum / 5;
    if (s.avg > 70)
      s.result = 'P';
    else
      s.result = 'F';
    fwrite(&s, sizeof(s), 1, f);
    sum = 0;
    fflush(stdin);
    printf("Enter Esc key to exit");
    test = getche();
    if (test == 27)
      break;
  }
  fclose(f);
}

void Listoftopper() {
  int i = 0;
  float temp;

  FILE *f;
  if ((f = fopen(filename, "rb")) == NULL) {
    printf("File cannot be open in read mode");
    exit(0);
  }
  // for scoring highest mark
  while (fread(&s, sizeof(s), 1, f) == 1) {
    if (i == 0)
      temp = s.avg;
    i++;
    if (s.avg > temp)
      temp = s.avg;
  }
  rewind(f);
  puts("The highest scoring student is/are :");

  while (fread(&s, sizeof(s), 1, f) == 1) {
    int i;
    if (temp == s.avg) {
      printf("\n%-40s %-10d %10.2f %c", s.name, s.roll, s.avg, s.result);
      printf("\nMarks in each subject");
      for (i = 0; i < 5; i++) {
        printf("\nMark in sub %d: %f \n", i + 1, s.marks[i]);
      }
    }
  }
  // for scoring least marks
  rewind(f);
  i = 0;
  while (fread(&s, sizeof(s), 1, f) == 1) {
    if (i == 0)
      temp = s.avg;
    i++;
    if (s.avg < temp)
      temp = s.avg;
  }
  rewind(f);
  puts("The lowest scoring student is/are :");

  while (fread(&s, sizeof(s), 1, f) == 1) {
    if (temp == s.avg) {
      printf("\n%-40s %-10d %10.2f %c", s.name, s.roll, s.avg, s.result);
      printf("\nMarks in each subject");
      for (i = 0; i < 5; i++) {
        printf("\nMark in sub %d: %f \n", i + 1, s.marks[i]);
      }
    }
  }

  fclose(f);
  getch();
}

void Listrecords() {
  int i;
  FILE *f;
  if ((f = fopen(filename, "rb")) == NULL) {
    printf("File cannot be open in read mode");
    exit(0);
  }
  printf("\n\n The student who passed in exam are:\n\n\n");
  printf("\nName:                             Roll:                            "
         "        average "
         "marks        result      ");
  while (fread(&s, sizeof(s), 1, f) == 1) {
    if (s.result == 'P')
      ;
    {
      printf("\n%-40s %-10d %10.2f %c", s.name, s.roll, s.avg, s.result);
      printf("\nMarks in each subject");
      for (i = 0; i < 5; i++) {
        printf("\nMark in sub %d: %f \n", i + 1, s.marks[i]);
      }
    }
  }
  rewind(f);
  printf("\n\n The student who failed in exam are:\n\n\n");
  printf("\nName:                             Roll:                            "
         "        average "
         "marks        result      ");
  while (fread(&s, sizeof(s), 1, f) == 1) {
    if (s.result == 'F')
      ;
    {
      printf("\n%-40s %-10d %10.2f %c", s.name, s.roll, s.avg, s.result);
      printf("\nMarks in each subject");
      for (i = 0; i < 5; i++) {
        printf("\nMark in sub %d: %f \n", i + 1, s.marks[i]);
      }
    }
  }
  fclose(f);
  getch();
}

void searchrecords() {
  int i;
  FILE *f;
  char name[100];
  int flag = 1;
  if ((f = fopen(filename, "rb")) == NULL) {
    printf("File cannot be open in read mode");
    exit(0);
  }
  printf("\nEnter name of student to search");
  scanf("%[^\n]", name);
  while (fread(&s, sizeof(s), 1, f) == 1) {
    if (strcmp(s.name, name) == 0) {
      printf("\nName:%s\nRoll:%d\nMarks:%f\n result=%c", s.name, s.roll, s.avg,
             s.result);
      for (i = 0; i < 5; i++)
        printf("\n marks in %d %-10.2f", i + 1, s.marks[i]);
      flag = 0;
      break;
    }
  }
  if (flag == 1) {
    printf("Record not found");
  }
  fclose(f);
}
