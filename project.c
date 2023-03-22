#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    int a[100];
    printf("Number of elements in the array (n): ");
    scanf("%d",&n);

    printf("Enter %d elements: ", n);
    for(int i=0; i<n; ++i) scanf("%d", &a[i]);

    int choice;

    while(1)
    {
        printf("\n-----------------------------------\n");
        printf("\n               MENU                \n");
        printf("\n-----------------------------------\n\n");
        printf("1.  Optimized sorting\n");
        printf("2.  Insert element in the array\n");
        printf("3.  Delete element from the array\n");
        printf("4.  Rotate the array clockwise\n");
        printf("5.  Check if an element is in the array\n");
        printf("6.  Reverse the array\n");
        printf("7.  Exit the program\n\n");
        printf("Choice: ");
        scanf("%d",&choice);

        if(choice==7) break;

        switch(choice)
        {
        case 1:
        {
            int i, j;
            for (i = 0; i < n - 1; i++)
            {
                if (a[i] > a[i + 1])
                {
                    j = a[i];
                    a[i] = a[i + 1];
                    a[i + 1] = j;
                    i = -1;
                }
            }
            for (i = 0; i < n; i++)
            {
                printf("%d ", a[i]);
            }



            break;
        }

        case 2:
        {
            int element, id, i;
            printf("Element: ");
            scanf("%d", &element);
            printf("Index: ");
            scanf("%d",&id);



            if (id > n+1 && id <= 0)
            {
                printf("Invalid");
            }
            else
            {
                for (i = n; i >= id; i--)
                {
                    a[i] = a[i-1];
                }
                a[id-1] = element;
                n++;
                for (i = 0; i < n; i++)
                {
                    printf("%d\t", a[i]);
                }
            }

        }


            //insert "element" at index "id" and print the array

        break;


    case 3:
        {
            int id, temp, i;
            printf("Index: ");
            scanf("%d",&id);

             for (i = 0; i < n; i++)
    {
        if (i >= id)
        {
         temp = a[i+1];
         a[i] = temp;

        }
    }
    n--;
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

            //remove element at index "id" and print the array

            break;
        }

    case 4:
        {


            int degree, i, j;
            printf("Degree of rotation: ");
            scanf("%d", &degree);


            for (i = 0; i < degree; i++)
            {
                int temp = a[n - 1];
                for (j = n - 1; j > 0; j--)
                {
                    a[j] = a[j - 1];
                }
                a[0] = temp;
            }
            for (i = 0; i < n; i++)
            {
                printf("%d ", a[i]);
            }
            //rotate the array clockwise "degree" times and print it

            break;
        }

    case 5:
        {
            int number, i;
            int f[101];
            scanf("%d",&number);

            for (i = 0; i < n; i++)
            {

                f[a[i]]+= 1;

            }

            if (f[number] >= 1)
            {
                printf ("YES");
            }
            else
            {
                printf("NO");
            }

            break;
        }

    case 6:
        {

            int temp, i;
            for (i = 0; i < n/2; i++)
            {
                temp = a[i];
                a[i] = a[n-i-1];
                a[n-i-1] = temp;
            }

            for (i = 0; i < n; i++)
            {
                printf("%d ", a[i]);
            }
            break;
        }


    default:
        printf("Wrong input.");
    }
    }

return 0;
}

