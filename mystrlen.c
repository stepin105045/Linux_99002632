int mystrlen(char str)
{
    printf("Enter a string: \n");
    scanf("%s",str);
    int i;
    for(i=0; str[i]!='\0'; ++i);
    printf("\nLength of input string: %d",i);
    return i;
}
