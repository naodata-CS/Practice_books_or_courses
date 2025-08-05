#include <stdio.h>
#include <string.h>

void cleanInt(){
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void cleanChar(char *character, int sizeofCharacter){
    fgets(character, sizeofCharacter, stdin);
    int len = strlen(character);
    if(len > 0 && character[len - 1]=='\n'){
        character[len-1]='\0';
    }
}

int main() {
    char name[25];
    char last_name[30];
    int age;
    long long identification;
    // In C doesn't exist strings, all are array of characters, for that you must delete the last character 'o' that indicates end of array;
    printf("\nWhat's your name? ");
    // scanf("%s", &name); Only for one word;
    cleanChar(name,sizeof(name)); //Only use before to enter a new values;
    printf("How old are you? ");
    scanf("%d", &age);
    cleanInt();
    //getchar(); //Use before enter a new value, use to delete white spaces;
    printf("Write your ID ");
    scanf("%lld", &identification);
    cleanInt();
    // while ((c = getchar()) != '\n' && c != EOF);
    printf("Good morning %s\n", name);
    printf("You are %d years old\n", age);
    printf("Your ID is:%lld\n", identification);
    printf("What is your last name? ");
    cleanChar(last_name,sizeof(last_name));
    printf("Your last name is %s\n", last_name);


    return 0;
}
