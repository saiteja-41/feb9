 #include <stdio.h>

int main()
{
    int num=98, n, newNum;
 
    
    printf("Enter nth bit to toggle (0-31): ");
    scanf("%d", &n);

   
    newNum = num ^ (1 << n);

    printf("Bit toggled successfully.\n\n");
    printf("Number before toggling %d bit: %d (in decimal)\n", n, num);
    printf("Number after toggling %d bit: %d (in decimal)\n", n, newNum);

    return 0;
}

