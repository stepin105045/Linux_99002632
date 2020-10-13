void mystrcat(char str1[], char str2[])
{
   // printf("enter str1: ");
    //fgets(str1, sizeof(str1), stdin);
    //printf("enter str2: ");
//fgets(str2, sizeof(str2), stdin);
    int length = 0;
    int j;
    while (str1[length] != '\0')
    {
        ++length;
    }
    for (j = 0; str2[j] != '\0'; ++j, ++length)
    {
        str1[length] = str2[j];
    }
    str1[length] = '\0';
    printf("After concatenation: ");
    puts(str1);
}
