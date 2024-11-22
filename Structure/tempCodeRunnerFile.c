  student s1;
  printf("Enter the name of the student: ");
  gets(s1.name);
  printf("Enter the roll number of the student: ");
  scanf("%d", &s1.roll);
  printf("Enter the marks of the student: ");
  scanf("%f", &s1.marks);

  printf("Name: %s\n", s1.name);
  printf("Roll: %d\n", s1.roll);
  printf("Marks: %.2f\n", s1.marks);

  student s2 = {"John", 2, 98.5};

  printf("Name: %s\n", s2.name);
  printf("Roll: %d\n", s2.roll);
  printf("Marks: %.2f\n", s2.marks);

  student s3 = {.name = "Alice", .roll = 3, .marks = 99.5};

  printf("Name: %s\n", s3.name);
  printf("Roll: %d\n", s3.roll);
  printf("Marks: %.2f\n", s3.marks);

  student std[100];
  int n;
  printf("Enter the number of students: ");
  scanf("%d", &n);
  for(int i=0; i<n; i++){
    printf("Enter the name of the student %d: ", i+1);
    scanf("%s", std[i].name);
    printf("Enter the roll number of the student %d: ", i+1);
    scanf("%d", &std[i].roll);
    printf("Enter the marks of the student: %d: ", i+1);
    scanf("%f", &std[i].marks);
  }

  for(int i=0; i<n; i++){
    printf("Name: %s\n", std[i].name);
    printf("Roll: %d\n", std[i].roll);
    printf("Marks: %.2f\n", std[i].marks);
  }

  strcpy(s1.name, "Sakib");
  printf("Name: %s\n", s1.name);

  student *ptr = &s1;

  printf("Name: %s\n", ptr->name);
  printf("Roll: %d\n", ptr->roll);
  printf("Marks: %.2f\n", ptr->marks);

  //alternative

  printf("Name: %s\n", (*ptr).name);
  printf("Roll: %d\n", (*ptr).roll);
  printf("Marks: %.2f\n", (*ptr).marks);