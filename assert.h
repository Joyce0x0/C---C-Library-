assert.h -用於在運行時確保程式符合指定條件，如果不符合，就報錯終止運行。

#include <assert.h>
#include <stdio.h>

int main()
{
   int a;
   char str[50];
	 
   printf("Enter an integer value: ");
   scanf("%d
", &a);
   assert(a >= 10);
   printf("Integer entered is %d
", a);
    
   printf("Enter string: ");
   scanf("%s
", &str);
   assert(str != NULL);
   printf("String entered is: %s
", str);
	
   return(0);
}

編譯並運行上述程序:
Enter an integer value: 11
Integer entered is 11
Enter string: yiibai 
String entered is: yiibai 



  來源:https://wangdoc.com/clang/lib/assert.h
  來源:https://tw511.com/2/18/476.html
  來源:https://tw.gitbook.net/c_standard_library/c_macro_assert.html
