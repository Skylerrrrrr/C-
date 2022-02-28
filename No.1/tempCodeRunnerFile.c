    if(((year%4==0) && (year%100 !=0)) || (year%400 == 0))
        {
            printf("%d年\n", year);
            count++;
        }
        printf("\ncount = 有%d个\n", count);
        return 0;