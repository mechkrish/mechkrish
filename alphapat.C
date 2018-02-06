#incluude <stdio.h>
int main()
{
    char s;
    printf("Enter a character");
    scanf("%s",&s);

    if( (s>='a' && c<='z') || (s>='A' && s<='Z'))
        printf("%s is an alphabet.",c);
    else
        printf("%s is not an alphabet.",c);

    return 0;
}
