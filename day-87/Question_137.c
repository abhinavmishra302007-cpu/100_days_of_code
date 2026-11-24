//Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

#include <stdio.h>

enum Role {
    ADMIN = 1,
    USER,
    GUEST
};

int main()
{
    enum Role r;

    printf("Enter role (1=ADMIN, 2=USER, 3=GUEST): ");
    scanf("%d", &r);

    switch(r)
    {
        case ADMIN:
            printf("Welcome Admin! You have full access.");
            break;

        case USER:
            printf("Welcome User! You have limited access.");
            break;

        case GUEST:
            printf("Welcome Guest! Please login to continue.");
            break;

        default:
            printf("Invalid role.");
    }

    return 0;
}