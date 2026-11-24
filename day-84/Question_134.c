//Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.

#include <stdio.h>
enum status{
        success=1,
        failure,
        timeout
    };
int main(){
    enum status result;
    printf("Enter status (1=success,2=failure,3=timeout):");
    scanf("%d",&result);
    switch(result){
        case success:
        printf("operation completed successfully ");
        break;
        case failure:
        printf("operation failed");
        break;
        case timeout:
        printf("operation timeout");
        break;
        default:
            printf("Invalid status.");
            break;
    

    }
    return 0;
}