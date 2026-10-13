#include <stdio.h>
int main()
{ 
  int n;
  scanf("%d", &n);
  if (n > 0 && n <= 10)
  {
    for (int i = 1; i <= n; i++)
    {
       
        int letter = 64;
        
        for (int j = 1; j <=i; j++)
        {
            int cl = 64;
            printf("%c ", cl = cl + i );
        }
        printf("\n");

    }
  }
  return 0;
}